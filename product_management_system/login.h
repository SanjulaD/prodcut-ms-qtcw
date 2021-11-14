#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QDir>
#include <QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase my_db;

    void connClose() {
        my_db.close();
        my_db.removeDatabase(QSqlDatabase::defaultConnection);
    }

    bool connOpen() {
        my_db = QSqlDatabase::addDatabase("QSQLITE");
        QString dbPath = QDir::currentPath();
        dbPath =  dbPath + QString("/database.db");
        my_db.setDatabaseName(dbPath);

        if (!my_db.open())
        {
            QTextStream(stdout) << "Connect Failed!";
            return false;
        }
        else
        {
            QTextStream(stdout) << "Database Connect OK!";
            return true;
        }
    }

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_loginButton_clicked();

    void on_register_page_clicked();

private:
    Ui::Login *ui;
};
#endif // LOGIN_H
