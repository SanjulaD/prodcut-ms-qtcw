#include "usermenu.h"
#include "ui_usermenu.h"
#include "login.h"
#include <QDesktopWidget>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>
#include <QCloseEvent>

UserMenu::UserMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserMenu)
{
    ui->setupUi(this);

    window()->setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, window()->size(), qApp->desktop()->availableGeometry()));
    this->statusBar()->setSizeGripEnabled(false);
    this->setFixedSize(this->maximumSize());
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);

    on_refreshButton_clicked();

}

UserMenu::~UserMenu()
{
    delete ui;
}

void UserMenu::on_actionExit_triggered()
{
     try{
           QMessageBox::StandardButton mboxSelect = QMessageBox::question( this, "Exit", "Do you want to exit?", QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes, QMessageBox::Yes);

           if (mboxSelect != QMessageBox::Yes) {
               return;
           } else
               QApplication::quit();
       }catch(...) {
           QApplication::exit(1);
       }
}


void UserMenu::on_actionAbout_QT_triggered()
{
    refresh_all_products_table();
}


void UserMenu::on_refreshButton_clicked()
{
    refresh_all_products_table();
    refresh_my_products_table();
}

void UserMenu::closeEvent (QCloseEvent *event)
{
    QMessageBox::StandardButton mboxSelect = QMessageBox::question( this, "Product Management System", "Are you sure you want to exit?", QMessageBox::Cancel | QMessageBox::No | QMessageBox::Yes, QMessageBox::Yes);

    if (mboxSelect != QMessageBox::Yes) {
        event->ignore();
    } else {
        event->accept();
        quitApp();
    }
}

void UserMenu::quitApp(){
    try {
        remove_loggedIn_user();
        QApplication::quit();
    } catch (...) {
        qDebug() << "Error occured";
        QApplication::exit(1);
    }
}

void UserMenu::remove_loggedIn_user()
{
    QMessageBox msgBox;

    Login conn;

    QString new_value = "true";
    QString old_value = "false";

    conn.connOpen();

    QSqlQuery query;

    query.prepare(
       "UPDATE "
       "users "
       "SET is_logged = :is_logged_old_value "
       "WHERE is_logged = :is_logged_new_value "
    );

    query.bindValue(":is_logged_old_value", old_value);
    query.bindValue(":is_logged_new_value", new_value);

    if (query.exec()) {
        qDebug() << "remove details";
    } else {
        qDebug() << query.lastError();
    }
}

void UserMenu::refresh_all_products_table()
{
    Login conn;
    conn.connOpen();

    QSqlQueryModel * queryModel = new QSqlQueryModel();

    QSqlQuery query;

    query.prepare(
       "SELECT p_id, p_name, p_description, p_quantity, p_sales_price, added_date FROM "
       "products"
    );

    if (query.exec()){
        if(query.isActive()){
            qDebug() << "LoadProducts OK";
            queryModel->setQuery(query);

            queryModel->setHeaderData(0, Qt::Horizontal, "ID");
            queryModel->setHeaderData(1, Qt::Horizontal, "Product Name");
            queryModel->setHeaderData(2, Qt::Horizontal, "Description");
            queryModel->setHeaderData(3, Qt::Horizontal, "Quantity");
            queryModel->setHeaderData(4, Qt::Horizontal, "Sale Price");
            queryModel->setHeaderData(5, Qt::Horizontal, "Add Date");

            ui->all_products_table->setModel(queryModel);
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

void UserMenu::refresh_my_products_table()
{
    Login conn;
    conn.connOpen();

    QString loggeddValue = "true";

    QSqlQueryModel * queryModel = new QSqlQueryModel();

    QSqlQuery query;

    query.prepare(
       "SELECT * FROM "
       "products p "
       "INNER JOIN "
       "users e"
       "ON"
       "p.user_id = u.id "
    );

     query.bindValue(":logValue", loggeddValue);

    if (query.exec()){
        if(query.isActive()){
            qDebug() << "LoadProducts OK";
            queryModel->setQuery(query);

            queryModel->setHeaderData(0, Qt::Horizontal, "ID");
            queryModel->setHeaderData(1, Qt::Horizontal, "Product Name");
            queryModel->setHeaderData(2, Qt::Horizontal, "Description");
            queryModel->setHeaderData(3, Qt::Horizontal, "Quantity");
            queryModel->setHeaderData(4, Qt::Horizontal, "Sale Price");
            queryModel->setHeaderData(5, Qt::Horizontal, "Add Date");

            ui->my_products_table->setModel(queryModel);
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

