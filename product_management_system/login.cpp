#include "login.h"
#include "ui_login.h"
#include "register.h"
#include "usermenu.h"
#include <QDir>
#include <QDesktopWidget>
#include <QTextStream>
#include <QMessageBox>
#include <QSqlQuery>
#include <QLabel>
#include <QApplication>
#include <QSqlError>
#include <QDebug>
#include <QCloseEvent>

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    window()->setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, window()->size(), qApp->desktop() -> availableGeometry()));

    this->setFixedSize(this->width(), this->height());
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    ui -> userLineEdit -> setPlaceholderText("username");
    ui -> passwordLineEdit -> setPlaceholderText("password");

    if (!connOpen())
    {
        QTextStream(stdout) << "Connect Failed!";
    }
    else
    {
        QTextStream(stdout) << "Login Connect OK!";
    }

}

Login::~Login()
{
    delete ui;
}


void Login::on_loginButton_clicked()
{
    QString roleName;
    QMessageBox msgBox;

    QString username, password;

    username = ui -> userLineEdit -> text().trimmed();;
    password = ui -> passwordLineEdit -> text().trimmed();

    if (username.isEmpty()) {
        msgBox.warning(this, "Warning", "Username field cannot be empty");
        return;
     } else if (password.isEmpty()) {
        msgBox.warning(this, "Warning", "Password field cannot be empty!");
        return;
     }

    if (!connOpen()) {
        QTextStream(stdout) << "Failed to open the database!";
        return;
    } else {
        QTextStream(stdout) << "Connect Database Success!";
    }

    connOpen();
    QSqlQuery query;

    query.prepare(
       "SELECT * FROM "
       "users "
       "WHERE "
       "username = :username AND password = :password"
    );

    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec()) {
            int count = 0;
            while (query.next()) {
                count++;
            }
            if (count == 1) {
                if(query.first()) {
                    roleName = query.value(8).toString();
                    if (roleName == "admin") {
                        msgBox.information(this, "Success", "Admin Login success");
                    }
                    if (roleName == "user") {
                        msgBox.information(this, "Success", "Login success");
                        UserMenu *r = new UserMenu(this);
                        this->close();
                        r->show();
                    }
                }
                connClose();
            }
            if (count > 1) {
                msgBox.warning(this, "Warning", "Duplicate username and password");
            }
            if (count < 1) {
                msgBox.warning(this, "Warning", "username and password not valid");
            }
    } else {
        qDebug() << query.lastError();
    }
}

void Login::on_register_page_clicked()
{
    Register *r = new Register(this);
    r->setModal(true);
    this->close();
    r->show();
}

