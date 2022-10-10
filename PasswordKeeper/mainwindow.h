#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>
#include <QMap>
#include <QListWidgetItem>
#include <QClipboard>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Account;
class AddWindow;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void InitializeDefault();
    void UploadAccList();
    void UploadProfileFile();

signals:
    void signalAddError(bool is_found);

private slots:
    void on_add_pb_clicked();
    void on_acc_lw_item_pressed(QListWidgetItem *item);
    void on_acc_name_pb_clicked();
    void on_login_pb_clicked();
    void on_pass_pb_clicked();
    void on_del_pb_clicked();
    void on_correct_pb_clicked();

    void slotTryAddAcc(const QString& name, const QString& login, const QString& pass);

public slots:
    void slotAboutToQuit();

private:
    std::unique_ptr<Ui::MainWindow> ui_;
    QMap<QString, Account> accounts_;
    AddWindow* add_window_;
    QClipboard* clipboard_;
    bool edit_flag_ = false;
    QString current_item_name_;
};
#endif // MAINWINDOW_H
