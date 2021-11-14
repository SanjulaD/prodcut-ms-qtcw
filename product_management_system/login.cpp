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
    QString username, password;

    username = ui -> userLineEdit -> text();
    password = ui -> passwordLineEdit -> text();

    if (!my_db.isOpen()) {
        qDebug() << "Error: connection with database fail";
        return;
    } else {
        qDebug() << "Connected login";
    }

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
        if(query.isActive()){
            int count = 0;
            while (query.next()) {
                count++;
            }
            if (count == 1) {
                ui -> label -> setText("username and password is correct");
            }
            if (count > 1) {
                ui -> label -> setText("Duplicate username and password");
            }
            if (count < 1) {
                ui -> label -> setText("username and password not valid");
            }
        } else {
            qDebug() << query.lastError();
        }
    } else {
        ui->label->setText("Not working query");
        qDebug() << query.lastError();
    }
}

