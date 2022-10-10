/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *acc_list_lbl;
    QListWidget *acc_lw;
    QPushButton *add_pb;
    QPushButton *del_pb;
    QPushButton *correct_pb;
    QFrame *line;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *acc_name_lbl;
    QLineEdit *acc_name_elbl;
    QPushButton *acc_name_pb;
    QLabel *login_lbl;
    QLineEdit *login_elbl;
    QPushButton *login_pb;
    QLabel *pass_lbl;
    QLineEdit *pass_elbl;
    QPushButton *pass_pb;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(725, 305);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(240, 240, 240, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        acc_list_lbl = new QLabel(centralwidget);
        acc_list_lbl->setObjectName(QString::fromUtf8("acc_list_lbl"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(acc_list_lbl->sizePolicy().hasHeightForWidth());
        acc_list_lbl->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        acc_list_lbl->setFont(font);

        gridLayout->addWidget(acc_list_lbl, 0, 0, 1, 1);

        acc_lw = new QListWidget(centralwidget);
        acc_lw->setObjectName(QString::fromUtf8("acc_lw"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(acc_lw->sizePolicy().hasHeightForWidth());
        acc_lw->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        acc_lw->setFont(font1);

        gridLayout->addWidget(acc_lw, 1, 0, 1, 3);

        add_pb = new QPushButton(centralwidget);
        add_pb->setObjectName(QString::fromUtf8("add_pb"));
        sizePolicy.setHeightForWidth(add_pb->sizePolicy().hasHeightForWidth());
        add_pb->setSizePolicy(sizePolicy);
        add_pb->setFont(font);

        gridLayout->addWidget(add_pb, 2, 0, 1, 1);

        del_pb = new QPushButton(centralwidget);
        del_pb->setObjectName(QString::fromUtf8("del_pb"));
        sizePolicy.setHeightForWidth(del_pb->sizePolicy().hasHeightForWidth());
        del_pb->setSizePolicy(sizePolicy);
        del_pb->setFont(font);

        gridLayout->addWidget(del_pb, 2, 1, 1, 1);

        correct_pb = new QPushButton(centralwidget);
        correct_pb->setObjectName(QString::fromUtf8("correct_pb"));
        sizePolicy.setHeightForWidth(correct_pb->sizePolicy().hasHeightForWidth());
        correct_pb->setSizePolicy(sizePolicy);
        correct_pb->setFont(font);

        gridLayout->addWidget(correct_pb, 2, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        acc_name_lbl = new QLabel(centralwidget);
        acc_name_lbl->setObjectName(QString::fromUtf8("acc_name_lbl"));
        sizePolicy.setHeightForWidth(acc_name_lbl->sizePolicy().hasHeightForWidth());
        acc_name_lbl->setSizePolicy(sizePolicy);
        acc_name_lbl->setFont(font1);

        gridLayout_2->addWidget(acc_name_lbl, 0, 0, 1, 1);

        acc_name_elbl = new QLineEdit(centralwidget);
        acc_name_elbl->setObjectName(QString::fromUtf8("acc_name_elbl"));
        acc_name_elbl->setEnabled(false);
        sizePolicy.setHeightForWidth(acc_name_elbl->sizePolicy().hasHeightForWidth());
        acc_name_elbl->setSizePolicy(sizePolicy);
        acc_name_elbl->setFont(font1);

        gridLayout_2->addWidget(acc_name_elbl, 1, 0, 1, 1);

        acc_name_pb = new QPushButton(centralwidget);
        acc_name_pb->setObjectName(QString::fromUtf8("acc_name_pb"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(acc_name_pb->sizePolicy().hasHeightForWidth());
        acc_name_pb->setSizePolicy(sizePolicy3);
        acc_name_pb->setMinimumSize(QSize(104, 26));
        acc_name_pb->setFont(font1);

        gridLayout_2->addWidget(acc_name_pb, 1, 1, 1, 1);

        login_lbl = new QLabel(centralwidget);
        login_lbl->setObjectName(QString::fromUtf8("login_lbl"));
        sizePolicy.setHeightForWidth(login_lbl->sizePolicy().hasHeightForWidth());
        login_lbl->setSizePolicy(sizePolicy);
        login_lbl->setFont(font1);

        gridLayout_2->addWidget(login_lbl, 2, 0, 1, 1);

        login_elbl = new QLineEdit(centralwidget);
        login_elbl->setObjectName(QString::fromUtf8("login_elbl"));
        login_elbl->setEnabled(false);
        sizePolicy.setHeightForWidth(login_elbl->sizePolicy().hasHeightForWidth());
        login_elbl->setSizePolicy(sizePolicy);
        login_elbl->setFont(font1);

        gridLayout_2->addWidget(login_elbl, 3, 0, 1, 1);

        login_pb = new QPushButton(centralwidget);
        login_pb->setObjectName(QString::fromUtf8("login_pb"));
        sizePolicy3.setHeightForWidth(login_pb->sizePolicy().hasHeightForWidth());
        login_pb->setSizePolicy(sizePolicy3);
        login_pb->setMinimumSize(QSize(104, 26));
        login_pb->setFont(font1);

        gridLayout_2->addWidget(login_pb, 3, 1, 1, 1);

        pass_lbl = new QLabel(centralwidget);
        pass_lbl->setObjectName(QString::fromUtf8("pass_lbl"));
        sizePolicy.setHeightForWidth(pass_lbl->sizePolicy().hasHeightForWidth());
        pass_lbl->setSizePolicy(sizePolicy);
        pass_lbl->setFont(font1);

        gridLayout_2->addWidget(pass_lbl, 4, 0, 1, 1);

        pass_elbl = new QLineEdit(centralwidget);
        pass_elbl->setObjectName(QString::fromUtf8("pass_elbl"));
        pass_elbl->setEnabled(false);
        sizePolicy.setHeightForWidth(pass_elbl->sizePolicy().hasHeightForWidth());
        pass_elbl->setSizePolicy(sizePolicy);
        pass_elbl->setFont(font1);

        gridLayout_2->addWidget(pass_elbl, 5, 0, 1, 1);

        pass_pb = new QPushButton(centralwidget);
        pass_pb->setObjectName(QString::fromUtf8("pass_pb"));
        sizePolicy3.setHeightForWidth(pass_pb->sizePolicy().hasHeightForWidth());
        pass_pb->setSizePolicy(sizePolicy3);
        pass_pb->setMinimumSize(QSize(104, 26));
        pass_pb->setFont(font1);

        gridLayout_2->addWidget(pass_pb, 5, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 725, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\320\265\320\264\320\266\320\265\321\200 \320\277\320\260\321\200\320\276\320\273\320\265\320\271", nullptr));
        acc_list_lbl->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\276\320\262:", nullptr));
        add_pb->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        del_pb->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        correct_pb->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        acc_name_lbl->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\260\320\272\320\272\320\260\321\203\320\275\321\202\320\260:", nullptr));
        acc_name_pb->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        login_lbl->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        login_pb->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pass_lbl->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        pass_pb->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
