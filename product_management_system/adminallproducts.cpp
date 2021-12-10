#include "adminallproducts.h"
#include "ui_adminallproducts.h"
#include "adminallusers.h"
#include "login.h"
#include <QMessageBox>

AdminAllProducts::AdminAllProducts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminAllProducts)
{
    ui->setupUi(this);

    on_LoadTableBtn_clicked();
}

AdminAllProducts::~AdminAllProducts()
{
    delete ui;
}

void AdminAllProducts::on_all_product_activated(const QModelIndex &index)
{

    QString valueName = ui->all_product_table->model()->data(index).toString();

    Login conn;
    conn.connOpen();

    QSqlQuery query;

    query.exec("SELECT * FROM products WHERE p_id = '" + valueName +"' or p_name = '" + valueName +"' or p_description = '" + valueName +"' or p_quantity = '" + valueName +"' or p_sales_price = '" + valueName +"' ");
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


void AdminAllProducts::on_LoadTableBtn_clicked()
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

            ui->all_product_table->setModel(queryModel);
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


void AdminAllProducts::on_pushButton_clicked()
{
    AdminAllUsers *u = new AdminAllUsers(this);
    u->setModal(true);
    u->show();
}


void AdminAllProducts::on_deleteBtn_clicked()
{
    QMessageBox msgBox;

    Login conn;
    conn.connOpen();

    QSqlQuery query;

    query.prepare(
       "DELETE from products WHERE p_id = :p_id"
    );
    query.bindValue(":p_id", clickedId);

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

