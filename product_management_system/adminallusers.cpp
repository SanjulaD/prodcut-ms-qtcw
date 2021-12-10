#include "adminallusers.h"
#include "ui_adminallusers.h"
#include "login.h"
#include <QMessageBox>

AdminAllUsers::AdminAllUsers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminAllUsers)
{
    ui->setupUi(this);

    on_LoadTableBtn_clicked();
}

AdminAllUsers::~AdminAllUsers()
{
    delete ui;
}

void AdminAllUsers::on_all_users_table_activated(const QModelIndex &index)
{
    QString valueName = ui->all_users_table->model()->data(index).toString();

    Login conn;
    conn.connOpen();

    QSqlQuery query;

    query.exec("SELECT * FROM users WHERE username = '" + valueName +"' or firstname = '" + valueName +"' or lastname = '" + valueName +"' or phonenumber = '" + valueName +"' or email = '" + valueName +"' or role = '" + valueName +"' ");
    if(query.exec()){
        while(query.next()){
            clickedId = query.value(0).toString();
            qDebug() << "---------------- Text to LoadProducts OK ---------------------";
            return;
            conn.connClose();
        }
    } else {
        qDebug() << "--------------- Text productsError ************* " << query.lastError();
        return;
    }
}


void AdminAllUsers::on_LoadTableBtn_clicked()
{
    Login conn;
    conn.connOpen();

    QSqlQueryModel * queryModel = new QSqlQueryModel();

    QSqlQuery query;

    query.prepare(
       "SELECT username, firstname, lastname, phonenumber, email, role FROM "
       "users"
    );

    if (query.exec()){
        if(query.isActive()){
            qDebug() << "Load Users OK";
            queryModel->setQuery(query);

            queryModel->setHeaderData(0, Qt::Horizontal, "Username");
            queryModel->setHeaderData(1, Qt::Horizontal, "First Name");
            queryModel->setHeaderData(2, Qt::Horizontal, "Last Name");
            queryModel->setHeaderData(3, Qt::Horizontal, "Phonenumber");
            queryModel->setHeaderData(4, Qt::Horizontal, "Email");
            queryModel->setHeaderData(5, Qt::Horizontal, "Role");

            ui->all_users_table->setModel(queryModel);
        } else {
            QMessageBox::critical(this, "ERROR", "Cannot run the query!");
            qDebug() << query.lastError();
            return;
        }
    } else {
        QMessageBox::warning(this, "Warning", "An error occurred while receiving information!");
        qDebug() << query.lastError();
        return;
    }

    conn.connClose();
}


void AdminAllUsers::on_deleteBtn_clicked()
{
    QMessageBox msgBox;

    Login conn;
    conn.connOpen();

    QSqlQuery query;

    query.prepare(
       "DELETE from users WHERE id = :id"
    );
    query.bindValue(":id", clickedId);

    if (query.exec()) {
        msgBox.information(this, "Success", "Delete Successfully");
        on_LoadTableBtn_clicked();
    }
    else {
        qDebug() << "******************Error Update************.";
        return;
    }

    conn.connClose();
}

