/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QLineEdit *firstname_line;
    QLineEdit *lastname_line;
    QLineEdit *username_line;
    QLineEdit *email_line;
    QLineEdit *confirm_Password_line;
    QLineEdit *password_line;
    QPushButton *register_button;
    QLineEdit *phonenumber_line;
    QLabel *label_2;
    QPushButton *login_page;
    QLabel *label;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(527, 603);
        firstname_line = new QLineEdit(Register);
        firstname_line->setObjectName(QString::fromUtf8("firstname_line"));
        firstname_line->setGeometry(QRect(50, 90, 211, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Poppins"));
        font.setPointSize(12);
        firstname_line->setFont(font);
        lastname_line = new QLineEdit(Register);
        lastname_line->setObjectName(QString::fromUtf8("lastname_line"));
        lastname_line->setGeometry(QRect(280, 90, 201, 51));
        lastname_line->setFont(font);
        username_line = new QLineEdit(Register);
        username_line->setObjectName(QString::fromUtf8("username_line"));
        username_line->setGeometry(QRect(50, 160, 431, 51));
        username_line->setFont(font);
        email_line = new QLineEdit(Register);
        email_line->setObjectName(QString::fromUtf8("email_line"));
        email_line->setGeometry(QRect(50, 310, 431, 51));
        email_line->setFont(font);
        confirm_Password_line = new QLineEdit(Register);
        confirm_Password_line->setObjectName(QString::fromUtf8("confirm_Password_line"));
        confirm_Password_line->setGeometry(QRect(280, 390, 201, 51));
        confirm_Password_line->setFont(font);
        confirm_Password_line->setEchoMode(QLineEdit::Password);
        password_line = new QLineEdit(Register);
        password_line->setObjectName(QString::fromUtf8("password_line"));
        password_line->setGeometry(QRect(50, 390, 211, 51));
        password_line->setFont(font);
        password_line->setEchoMode(QLineEdit::Password);
        register_button = new QPushButton(Register);
        register_button->setObjectName(QString::fromUtf8("register_button"));
        register_button->setGeometry(QRect(50, 460, 431, 51));
        register_button->setFont(font);
        register_button->setCursor(QCursor(Qt::PointingHandCursor));
        phonenumber_line = new QLineEdit(Register);
        phonenumber_line->setObjectName(QString::fromUtf8("phonenumber_line"));
        phonenumber_line->setGeometry(QRect(50, 230, 431, 51));
        phonenumber_line->setFont(font);
        label_2 = new QLabel(Register);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 550, 161, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Poppins"));
        label_2->setFont(font1);
        login_page = new QPushButton(Register);
        login_page->setObjectName(QString::fromUtf8("login_page"));
        login_page->setGeometry(QRect(390, 540, 91, 41));
        login_page->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(Register);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 20, 161, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Poppins"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Register", nullptr));
        register_button->setText(QApplication::translate("Register", "Signup", nullptr));
        label_2->setText(QApplication::translate("Register", "Already have an account ?", nullptr));
        login_page->setText(QApplication::translate("Register", "Login", nullptr));
        label->setText(QApplication::translate("Register", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
