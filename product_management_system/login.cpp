#include "login.h"
#include "ui_login.h"
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

    my_db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = QDir::currentPath();
    dbPath =  dbPath + QString("/database.db");
    qDebug() << dbPath;
    my_db.setDatabaseName(dbPath);
    my_db.open();

    if (!my_db.open())
    {
        QTextStream(stdout) << "Connect Failed!";
    }
    else
    {
        QTextStream(stdout) << "Connect OK!";
    }

}

Login::~Login()
{
    delete ui;
}


void Login::on_loginButton_clicked()
{
    QSqlQuery query;
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

    if (!my_db.isOpen()) {
        qDebug() << "Error: connection with database fail";
        return;
    } else {
        qDebug() << "Connected login";
    }

    query.prepare(
       "SELECT * FROM "
       "users "
       "WHERE "
       "username = :username AND password = :password"
    );

    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec()) {
        if(query.isActive()){
            int count = 0;
            while (query.next()) {
                count++;
            }
            if (count == 1) {
                if(query.first()) {
                    roleName = query.value(8).toString();
                    if (roleName == "admin") {
                        msgBox.information(this, "Success", "admin success");
                    }
                    if (roleName == "user") {
                        msgBox.information(this, "Success", "user success");
                    }
                }
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
    } else {
        qDebug() << query.lastError();
    }
}

