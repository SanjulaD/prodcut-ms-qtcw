#include "register.h"
#include "ui_register.h"
#include <QStyle>
#include "login.h"
#include <QDesktopWidget>
#include <QTextStream>
#include <QMessageBox>
#include <QRegExp>
#include <QDateTime>
#include <QUUid>

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);

    window()->setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, window()->size(), qApp->desktop()->availableGeometry()));
    this->setFixedSize(this->maximumSize());
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);

    Login conn;
    if (!conn.connOpen())
    {
        QTextStream(stdout) << "Connect Failed!";
    }
    else
    {
        QTextStream(stdout) << "Register Connect OK!";
    }

    ui -> username_line -> setPlaceholderText("username");
    ui -> firstname_line -> setPlaceholderText("firstname");
    ui -> lastname_line -> setPlaceholderText("lastname");
    ui -> email_line -> setPlaceholderText("email");
    ui -> phonenumber_line -> setPlaceholderText("phonenumber");
    ui -> password_line -> setPlaceholderText("password");
    ui -> confirm_Password_line -> setPlaceholderText("confirm password");
}

Register::~Register()
{
    this->setFixedSize(this->width(),this->height());
    delete ui;
}

void Register::Clear()
{
    ui->username_line->clear();
    ui->firstname_line->clear();
    ui->lastname_line->clear();
    ui->email_line->clear();
    ui->phonenumber_line->clear();
    ui->password_line->clear();
    ui->confirm_Password_line->clear();
}

bool Register::CheckInputs()
{
    QMessageBox msgBox;

    QString username = ui->username_line->text().trimmed();
    QString firstname = ui->firstname_line->text().trimmed();
    QString lastnme = ui->lastname_line->text().trimmed();
    QString email = ui->email_line->text().trimmed();
    QString phonenumber = ui->phonenumber_line->text().trimmed();
    QString password = ui->password_line->text().trimmed();
    QString confirm_password = ui->confirm_Password_line->text().trimmed();

    bool flag = true;

    QRegExp regexMail("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b");
    regexMail.setCaseSensitivity(Qt::CaseInsensitive);
    regexMail.setPatternSyntax(QRegExp::RegExp);

    QRegExp regexPhone("^[0-9]{10}$");
    regexPhone.setCaseSensitivity(Qt::CaseInsensitive);
    regexPhone.setPatternSyntax(QRegExp::RegExp);

    if (username.isEmpty()) {
        msgBox.warning(this, "Warning", "Username field cannot be empty!");
        flag = false;
    } else if (firstname.isEmpty()) {
        msgBox.warning(this, "Warning", "First Name field cannot be empty!");
        flag = false;
    } else if (lastnme.isEmpty()) {
        msgBox.warning(this, "Warning", "Last Name field cannot be empty!");
        flag = false;
    } else if (password.isEmpty()) {
        msgBox.warning(this, "Warning", "Password field cannot be empty!");
        flag = false;
    } else if (confirm_password.isEmpty()) {
        msgBox.warning(this, "Warning", "Password field cannot be empty!");
        flag = false;
    } else if (QString::compare(password, confirm_password, Qt::CaseSensitive) != 0) {
        msgBox.warning(this, "Warning", "Password not same!");
        flag = false;
    } else if (email.isEmpty()) {
        msgBox.warning(this, "Warning", "Email field cannot be empty!");
        flag = false;
    } else if (!regexMail.exactMatch(email)) {
        msgBox.warning(this, "Warning", "Please provide valid email!");
        flag = false;
    } else if (phonenumber.isEmpty()) {
        msgBox.warning(this, "Warning", "Phone number field cannot be empty!");
        flag = false;
    } else if (!regexPhone.exactMatch(phonenumber)) {
        msgBox.warning(this, "Warning", "Please provide valid phone number!");
        flag = false;
    }

    return flag;
}

void Register::on_register_button_clicked()
{
    Login conn;
    Login *l = new Login(this);
    QMessageBox msgBox;

    QString userRole = "user";

    QDateTime date = QDateTime::currentDateTime();
    QString formattedTime = date.toString("dd.MM.yyyy hh:mm:ss");
    QByteArray formattedTimeMsg = formattedTime.toLocal8Bit();

    QString unique_Id = QUuid::createUuid().toString();
    unique_Id = unique_Id.remove('{').remove('}');

    if(this->CheckInputs()){
            if(conn.connOpen()){

                QSqlQuery query;

                query.prepare(
                   "INSERT INTO "
                   "users "
                   "(id, username, password, firstname, lastname, phonenumber, email, reg_date, role) "
                   "VALUES "
                   "(:id, :username, :password, :firstname, :lastname, :phonenumber, :email, :reg_date, :role)"
                );

                query.bindValue(":id", unique_Id);
                query.bindValue(":username", ui->username_line->text().trimmed());
                query.bindValue(":password", ui->password_line->text().trimmed());
                query.bindValue(":firstname", ui->firstname_line->text().trimmed());
                query.bindValue(":lastname", ui->lastname_line->text().trimmed());
                query.bindValue(":phonenumber", ui->phonenumber_line->text().trimmed());
                query.bindValue(":email", ui->email_line->text().trimmed());
                query.bindValue(":reg_date", formattedTimeMsg);
                query.bindValue(":role", userRole);

                if(query.exec()){
                    if(query.isActive()){
                        this->Clear();
                        msgBox.information(this, "Success", "Registered Successfully");
                        qDebug() << "Database query OK.";
                        this->close();
                        l->show();
                        return;
                    }
                } else {
                    msgBox.warning(this, "Warning", "Error Occur");
                    qDebug() << query.lastError();
                    return;
                }
            } else {
                msgBox.warning(this, "Warning", "Database Connection Error");
                qDebug() << "Database connection closed.";
                return;
            }
        }
}

void Register::on_login_page_clicked()
{
    Login *l = new Login(this);
    this->close();
    l->show();
}

