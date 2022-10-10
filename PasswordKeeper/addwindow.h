#ifndef ADDWINDOW_H
#define ADDWINDOW_H

#include <QDialog>
#include <memory>

namespace Ui {
class AddWindow;
}

class AddWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AddWindow(QWidget *parent = nullptr);
    ~AddWindow();

    void ClearWindow();

signals:
    void signalTryAddAcc(const QString& name, const QString& login, const QString& pass);

private slots:
    void on_add_pb_clicked();
    void on_cancel_pb_clicked();

public slots:
    void slotAddError(bool is_found);

private:
    std::unique_ptr<Ui::AddWindow> ui_;
};

#endif // ADDWINDOW_H
