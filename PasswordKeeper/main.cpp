#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QObject::connect(&a, &QCoreApplication::aboutToQuit, &w, &MainWindow::slotAboutToQuit);
    w.show();
    return a.exec();
}
