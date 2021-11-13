#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);

    QSqlDatabase m_db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = QDir::currentPath();
    dbPath =  dbPath + QString("/database.db");
    qDebug() << dbPath;
    m_db.setDatabaseName(dbPath);
    m_db.open();

    if (!m_db.open())
    {
        qDebug() << "Error: connection with database fail";
        ui -> label -> setText("Not Connected");
    }
    else
    {
        qDebug() << "Database: connection ok";
        ui -> label -> setText("Connected");
    }

}

Login::~Login()
{
    delete ui;
}

