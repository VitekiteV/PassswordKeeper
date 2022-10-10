#include "addwindow.h"
#include "ui_addwindow.h"
#include <QMessageBox>

AddWindow::AddWindow(QWidget *parent) :
    QDialog(parent),
    ui_(std::make_unique<Ui::AddWindow>())
{
    ui_->setupUi(this);
}

AddWindow::~AddWindow()
{
}

void AddWindow::ClearWindow()
{
    ui_->name_elbl->clear();
    ui_->login_elbl->clear();
    ui_->pass_elbl->clear();
}

void AddWindow::on_add_pb_clicked()
{
    if (ui_->name_elbl->text() == "")
        QMessageBox::critical(this, "Ошибка", "Введите название аккаунта");
    else if (ui_->login_elbl->text() == "")
        QMessageBox::critical(this, "Ошибка", "Введите логин");
    else if (ui_->pass_elbl->text() == "")
        QMessageBox::critical(this, "Ошибка", "Введите пароль");
    else
        emit signalTryAddAcc(ui_->name_elbl->text(), ui_->login_elbl->text(), ui_->pass_elbl->text());
}

void AddWindow::on_cancel_pb_clicked()
{
    this->close();
}

void AddWindow::slotAddError(bool is_found)
{
    if (is_found)
        QMessageBox::critical(this, "Ошибка", "Такое название аккаунта уже существует");
    else
      this->close();
}
