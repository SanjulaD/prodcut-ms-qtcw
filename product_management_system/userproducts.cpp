#include "userproducts.h"
#include "ui_userproducts.h"
#include "login.h"

UserProducts::UserProducts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserProducts)
{
    ui->setupUi(this);

    on_LoadTableBtn_clicked();
}

UserProducts::~UserProducts()
{
    delete ui;
}

void UserProducts::on_LoadTableBtn_clicked()
{
    Login conn;
    QSqlQueryModel * queryModel = new QSqlQueryModel();
    conn.connOpen();

    QSqlQuery query;

    query.exec("SELECT id FROM users WHERE is_logged = 'true'");
    if (query.next()) {
        int userId = query.value(0).toInt();
        query.prepare(
           "SELECT p_id, p_name, p_description, p_quantity,p_purchase_price, p_sales_price, added_date FROM products WHERE user_id = :user_id ORDER BY added_date"
        );
        query.bindValue(":user_id", userId);

        if(query.exec()){
            if(query.isActive()){
                qDebug() << "---------------- My LoadProducts OK ---------------------";
                queryModel->setQuery(query);

                queryModel->setHeaderData(0, Qt::Horizontal, "ID");
                queryModel->setHeaderData(1, Qt::Horizontal, "Product Name");
                queryModel->setHeaderData(2, Qt::Horizontal, "Description");
                queryModel->setHeaderData(3, Qt::Horizontal, "Quantity");
                queryModel->setHeaderData(4, Qt::Horizontal, "Purhcase Price");
                queryModel->setHeaderData(5, Qt::Horizontal, "Sale Price");
                queryModel->setHeaderData(6, Qt::Horizontal, "Add Date");

                ui->product_update_table->setModel(queryModel);
                return;
            }
        } else {
            qDebug() << "--------------- My productsError ************* " << query.lastError();
            return;
        }
    } else {
        qDebug() << "Database connection closed.";
        return;
    }

    conn.connClose();
}


void UserProducts::on_product_update_table_activated(const QModelIndex &index)
{
    QString valueName = ui->product_update_table->model()->data(index).toString();

    Login conn;

    conn.connOpen();

    QSqlQuery query;

    query.exec("SELECT * FROM products WHERE p_id = '" + valueName +"' or p_name = '" + valueName +"' or p_description = '" + valueName +"' or p_quantity = '" + valueName +"' or p_sales_price = '" + valueName +"' ");
    if(query.exec()){
        while(query.next()){
            qDebug() << "---------------- Text to LoadProducts OK ---------------------";
            ui->name_lineEdit->setText(query.value(1).toString());
            ui->desc_lineEdit->setText(query.value(2).toString());
            ui->price_lineEdit->setText(query.value(5).toString());
            ui->quantity_lineEdit->setText(query.value(3).toString());
            return;
        }
    } else {
        qDebug() << "--------------- Text productsError ************* " << query.lastError();
        return;
    }

    conn.connClose();
}

