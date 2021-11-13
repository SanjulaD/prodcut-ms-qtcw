#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_loginButton_clicked();

private:
    Ui::Login *ui;
    QSqlDatabase my_db;
};
#endif // LOGIN_H
