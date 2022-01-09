/********************************************************************************
** Form generated from reading UI file 'adminallusers.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINALLUSERS_H
#define UI_ADMINALLUSERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminAllUsers
{
public:
    QTableView *all_users_table;
    QPushButton *LoadTableBtn;
    QPushButton *deleteBtn;
    QPushButton *pushButton;

    void setupUi(QWidget *AdminAllUsers)
    {
        if (AdminAllUsers->objectName().isEmpty())
            AdminAllUsers->setObjectName(QString::fromUtf8("AdminAllUsers"));
        AdminAllUsers->resize(689, 412);
        all_users_table = new QTableView(AdminAllUsers);
        all_users_table->setObjectName(QString::fromUtf8("all_users_table"));
        all_users_table->setGeometry(QRect(30, 30, 631, 271));
        all_users_table->setStyleSheet(QString::fromUtf8("background-color:white;"));
        LoadTableBtn = new QPushButton(AdminAllUsers);
        LoadTableBtn->setObjectName(QString::fromUtf8("LoadTableBtn"));
        LoadTableBtn->setGeometry(QRect(182, 340, 154, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Poppins"));
        LoadTableBtn->setFont(font);
        LoadTableBtn->setCursor(QCursor(Qt::PointingHandCursor));
        LoadTableBtn->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: #00111d;"));
        deleteBtn = new QPushButton(AdminAllUsers);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));
        deleteBtn->setGeometry(QRect(340, 340, 153, 41));
        deleteBtn->setFont(font);
        deleteBtn->setCursor(QCursor(Qt::PointingHandCursor));
        deleteBtn->setStyleSheet(QString::fromUtf8("background-color:red;\n"
"color: white"));
        pushButton = new QPushButton(AdminAllUsers);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(770, 720, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color:white;"));

        retranslateUi(AdminAllUsers);

        QMetaObject::connectSlotsByName(AdminAllUsers);
    } // setupUi

    void retranslateUi(QWidget *AdminAllUsers)
    {
        AdminAllUsers->setWindowTitle(QApplication::translate("AdminAllUsers", "Admin - All Users", nullptr));
        LoadTableBtn->setText(QApplication::translate("AdminAllUsers", "Load", nullptr));
        deleteBtn->setText(QApplication::translate("AdminAllUsers", "Delete", nullptr));
        pushButton->setText(QApplication::translate("AdminAllUsers", "System Users", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminAllUsers: public Ui_AdminAllUsers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINALLUSERS_H
