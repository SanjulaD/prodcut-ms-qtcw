/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QCheckBox *checkBox;
    QPushButton *register_page;
    QPushButton *loginButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *passwordLineEdit;
    QLineEdit *userLineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(362, 488);
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(220, 280, 101, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Poppins"));
        font.setPointSize(8);
        checkBox->setFont(font);
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        checkBox->setCheckable(true);
        register_page = new QPushButton(centralwidget);
        register_page->setObjectName(QString::fromUtf8("register_page"));
        register_page->setGeometry(QRect(200, 400, 121, 41));
        register_page->setFont(font);
        register_page->setCursor(QCursor(Qt::PointingHandCursor));
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(40, 320, 281, 51));
        loginButton->setFont(font);
        loginButton->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 181, 71));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Poppins"));
        font1.setPointSize(36);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 100, 211, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Poppins"));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        passwordLineEdit = new QLineEdit(centralwidget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(41, 207, 281, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Poppins"));
        font3.setPointSize(12);
        passwordLineEdit->setFont(font3);
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        userLineEdit = new QLineEdit(centralwidget);
        userLineEdit->setObjectName(QString::fromUtf8("userLineEdit"));
        userLineEdit->setGeometry(QRect(41, 150, 281, 51));
        userLineEdit->setFont(font3);
        Login->setCentralWidget(centralwidget);
        label->raise();
        register_page->raise();
        passwordLineEdit->raise();
        label_2->raise();
        loginButton->raise();
        userLineEdit->raise();
        checkBox->raise();
        menubar = new QMenuBar(Login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 362, 20));
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Login->setStatusBar(statusbar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", nullptr));
        checkBox->setText(QApplication::translate("Login", "Remember Me", nullptr));
        register_page->setText(QApplication::translate("Login", "Register Here", nullptr));
        loginButton->setText(QApplication::translate("Login", "Login", nullptr));
        label->setText(QApplication::translate("Login", "Sign In", nullptr));
        label_2->setText(QApplication::translate("Login", "Sign in with username and password", nullptr));
        userLineEdit->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
