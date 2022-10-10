/********************************************************************************
** Form generated from reading UI file 'addwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWINDOW_H
#define UI_ADDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddWindow
{
public:
    QGridLayout *gridLayout;
    QLabel *enter_name_lbl;
    QLineEdit *name_elbl;
    QLabel *login_lbl;
    QLineEdit *login_elbl;
    QLabel *pass_lbl;
    QLineEdit *pass_elbl;
    QPushButton *add_pb;
    QPushButton *cancel_pb;

    void setupUi(QDialog *AddWindow)
    {
        if (AddWindow->objectName().isEmpty())
            AddWindow->setObjectName(QString::fromUtf8("AddWindow"));
        AddWindow->resize(309, 350);
        gridLayout = new QGridLayout(AddWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        enter_name_lbl = new QLabel(AddWindow);
        enter_name_lbl->setObjectName(QString::fromUtf8("enter_name_lbl"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(enter_name_lbl->sizePolicy().hasHeightForWidth());
        enter_name_lbl->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        enter_name_lbl->setFont(font);

        gridLayout->addWidget(enter_name_lbl, 0, 0, 1, 2);

        name_elbl = new QLineEdit(AddWindow);
        name_elbl->setObjectName(QString::fromUtf8("name_elbl"));
        name_elbl->setFont(font);

        gridLayout->addWidget(name_elbl, 1, 0, 1, 2);

        login_lbl = new QLabel(AddWindow);
        login_lbl->setObjectName(QString::fromUtf8("login_lbl"));
        sizePolicy.setHeightForWidth(login_lbl->sizePolicy().hasHeightForWidth());
        login_lbl->setSizePolicy(sizePolicy);
        login_lbl->setFont(font);

        gridLayout->addWidget(login_lbl, 2, 0, 1, 2);

        login_elbl = new QLineEdit(AddWindow);
        login_elbl->setObjectName(QString::fromUtf8("login_elbl"));
        login_elbl->setFont(font);

        gridLayout->addWidget(login_elbl, 3, 0, 1, 2);

        pass_lbl = new QLabel(AddWindow);
        pass_lbl->setObjectName(QString::fromUtf8("pass_lbl"));
        sizePolicy.setHeightForWidth(pass_lbl->sizePolicy().hasHeightForWidth());
        pass_lbl->setSizePolicy(sizePolicy);
        pass_lbl->setFont(font);

        gridLayout->addWidget(pass_lbl, 4, 0, 1, 2);

        pass_elbl = new QLineEdit(AddWindow);
        pass_elbl->setObjectName(QString::fromUtf8("pass_elbl"));
        pass_elbl->setFont(font);

        gridLayout->addWidget(pass_elbl, 5, 0, 1, 2);

        add_pb = new QPushButton(AddWindow);
        add_pb->setObjectName(QString::fromUtf8("add_pb"));
        add_pb->setFont(font);

        gridLayout->addWidget(add_pb, 6, 0, 1, 1);

        cancel_pb = new QPushButton(AddWindow);
        cancel_pb->setObjectName(QString::fromUtf8("cancel_pb"));
        cancel_pb->setFont(font);

        gridLayout->addWidget(cancel_pb, 6, 1, 1, 1);


        retranslateUi(AddWindow);

        QMetaObject::connectSlotsByName(AddWindow);
    } // setupUi

    void retranslateUi(QDialog *AddWindow)
    {
        AddWindow->setWindowTitle(QCoreApplication::translate("AddWindow", "Dialog", nullptr));
        enter_name_lbl->setText(QCoreApplication::translate("AddWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265:", nullptr));
        login_lbl->setText(QCoreApplication::translate("AddWindow", "\320\233\320\276\320\263\320\270\320\275:", nullptr));
        pass_lbl->setText(QCoreApplication::translate("AddWindow", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        add_pb->setText(QCoreApplication::translate("AddWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        cancel_pb->setText(QCoreApplication::translate("AddWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddWindow: public Ui_AddWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWINDOW_H
