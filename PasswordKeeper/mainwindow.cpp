#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QDataStream>
#include "Account.h"
#include "addwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui_(std::make_unique<Ui::MainWindow>())
{
    ui_->setupUi(this);
    ui_->acc_name_pb->hide();
    InitializeDefault();

    connect(ui_->acc_lw, &QListWidget::itemPressed, this, &MainWindow::on_acc_lw_item_pressed);

    add_window_ = new AddWindow;
    connect(add_window_, &AddWindow::signalTryAddAcc, this, &MainWindow::slotTryAddAcc);
    connect(this, &MainWindow::signalAddError, add_window_, &AddWindow::slotAddError);
}

MainWindow::~MainWindow()
{
}

void MainWindow::InitializeDefault()
{
    QFile file("default.prf");
    if (!file.exists())
    {
        file.open(QIODeviceBase::WriteOnly);
        file.close();
    }
    if (file.open(QIODeviceBase::ReadOnly))
    {
        QDataStream strm(&file);
        while(!strm.atEnd())
        {
            QString name, login, pass;
            strm >> name >> login >> pass;
            accounts_[name] = Account(login, pass);
        }
        UploadAccList();
    }
}

void MainWindow::UploadAccList()
{
    if (!accounts_.isEmpty())
    {
        auto acc_name_list = accounts_.keys();
        for (const auto& acc_name : acc_name_list)
            ui_->acc_lw->addItem(acc_name);
    }
}

void MainWindow::UploadProfileFile()
{
    QFile file("default.prf");
    if (file.open(QIODeviceBase::WriteOnly | QIODeviceBase::Truncate))
    {
        QDataStream strm(&file);
        if (!accounts_.isEmpty())
        {
            auto acc_name_list = accounts_.keys();
            for (const auto& acc_name : acc_name_list)
            {
                auto acc = accounts_[acc_name];
                QString login = acc.GetLogin();
                QString pass = acc.GetPass();
                strm << acc_name << login << pass;
            }
        }
    }
}

void MainWindow::on_add_pb_clicked()
{
    add_window_->ClearWindow();
    add_window_->setModal(true);
    add_window_->exec();
}

void MainWindow::on_acc_lw_item_pressed(QListWidgetItem *item)
{
    current_item_name_ = item->text();

    ui_->acc_name_pb->hide();
    ui_->acc_name_elbl->setEnabled(false);
    ui_->login_elbl->setEnabled(false);
    ui_->pass_elbl->setEnabled(false);
    ui_->login_pb->setText("Скопировать");
    ui_->pass_pb->setText("Скопировать");
    edit_flag_ = false;

    ui_->acc_name_elbl->setText(current_item_name_);
    ui_->login_elbl->setText(accounts_[item->text()].GetLogin());
    ui_->pass_elbl->setText(accounts_[item->text()].GetPass());
}

void MainWindow::on_acc_name_pb_clicked()
{
    bool is_found = false;
    auto names = accounts_.keys();
    for (const auto& acc_name : names)
        if (acc_name == ui_->acc_name_elbl->text())
        {
            is_found = true;
            break;
        }

    if (is_found)
        QMessageBox::critical(this, "Ошибка", "Аккаунт с таким именем уже существует!");
    else
    {
        auto value = accounts_.take(current_item_name_);
        current_item_name_ = ui_->acc_name_elbl->text();
        accounts_[current_item_name_] = value;
        auto selected_item = ui_->acc_lw->selectedItems();
        selected_item[0]->setText(current_item_name_);
    }
}

void MainWindow::on_login_pb_clicked()
{
    if (edit_flag_)
        accounts_[current_item_name_].SetLogin(ui_->login_elbl->text());
    else
        clipboard_->setText(ui_->login_elbl->text());
}

void MainWindow::on_pass_pb_clicked()
{
    if (edit_flag_)
        accounts_[current_item_name_].SetPass(ui_->pass_elbl->text());
    else
        clipboard_->setText(ui_->pass_elbl->text());
}

void MainWindow::on_del_pb_clicked()
{
    auto selected_item = ui_->acc_lw->selectedItems();
    if (!selected_item.empty())
    {
        auto answer = QMessageBox::question(this, "Удаление", "Вы действительно хотите удалить аккаунт " + selected_item[0]->text() + "?");
        if (answer == QMessageBox::Yes)
        {
            accounts_.remove(current_item_name_);
            delete ui_->acc_lw->takeItem(ui_->acc_lw->row(selected_item[0]));
            ui_->acc_name_elbl->clear();
            ui_->login_elbl->clear();
            ui_->pass_elbl->clear();
        }
    }
    else
        QMessageBox::critical(this, "Ошибка", "Выберите аккаунт");
}

void MainWindow::on_correct_pb_clicked()
{
    auto selected_item = ui_->acc_lw->selectedItems();
    if (!selected_item.empty())
    {
        ui_->acc_name_pb->show();
        ui_->acc_name_elbl->setEnabled(true);
        ui_->login_elbl->setEnabled(true);
        ui_->pass_elbl->setEnabled(true);
        ui_->login_pb->setText("Сохранить");
        ui_->pass_pb->setText("Сохранить");
        edit_flag_ = true;
    }
    else
        QMessageBox::critical(this, "Ошибка", "Выберите аккаунт");
}

void MainWindow::slotTryAddAcc(const QString& name, const QString& login, const QString& pass)
{
    bool is_found = false;
    if (!accounts_.empty())
    {
        auto names = accounts_.keys();
        for (const auto& acc_name : names)
            if (acc_name == name)
            {
                is_found = true;
                break;
            }
    }
    if (!is_found)
    {
        accounts_[name] = Account(login, pass);
        ui_->acc_lw->addItem(name);
    }
    emit signalAddError(is_found);
}

void MainWindow::slotAboutToQuit()
{
    UploadProfileFile();
}
