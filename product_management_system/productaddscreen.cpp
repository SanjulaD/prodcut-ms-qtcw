#include "login.h"
#include "productaddscreen.h"
#include "ui_productaddscreen.h"
#include <QDesktopWidget>
#include <QStyle>
#include <QMessageBox>
#include <QDebug>

ProductAddScreen::ProductAddScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductAddScreen)
{
    ui->setupUi(this);

    window()->setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, window()->size(), qApp->desktop()->availableGeometry()));
    this->setFixedSize(this->maximumSize());
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
}

ProductAddScreen::~ProductAddScreen()
{
    delete ui;
}

void ProductAddScreen::Clear()
{
    ui->p_nameEdit->clear();
    ui->p_descEdit->clear();
    ui->p_purchasePrice->clear();
    ui->p_quantutySpinBox->clear();
    ui->p_salesPrice->clear();
}

bool ProductAddScreen::CheckInputs()
{

    bool flag = true;

    if (ui->p_nameEdit->text().trimmed().isEmpty()) {
        QMessageBox::warning(this, "Warning", "Product name cannot be empty!");
        flag = false;
    } else if (ui->p_descEdit->text().trimmed().isEmpty()) {
        QMessageBox::warning(this, "Warning", "Product description cannot be empty!");
        flag = false;
    } else if (ui->p_purchasePrice->text().trimmed().isEmpty()) {
        QMessageBox::warning(this, "Warning", "Product purchase price cannot be empty!");
        flag = false;
    } else if (ui->p_salesPrice->text().trimmed().isEmpty()) {
        QMessageBox::warning(this, "Warning", "Product sales price cannot be empty!");
        flag = false;
    } else if (ui->p_quantutySpinBox->value() <= 0.0) {
        QMessageBox::warning(this, "Warning", "Product quantity cannot be empty!");
        flag = false;
    }

    return flag;
}

void ProductAddScreen::on_cancelButton_clicked()
{
    this->close();
}


void ProductAddScreen::on_productAddButton_clicked()
{
    Login conn;
    QMessageBox msgBox;

    QDateTime date = QDateTime::currentDateTime();
    QString formattedTime = date.toString("dd.MM.yyyy hh:mm:ss");
    QByteArray formattedTimeMsg = formattedTime.toLocal8Bit();

    QString unique_Id = QUuid::createUuid().toString();
    unique_Id = unique_Id.remove('{').remove('}');

    QString product_name = ui->p_nameEdit->text().trimmed();
    QString product_description = ui->p_descEdit->text().trimmed();
    QString product_purchase_price = ui->p_purchasePrice->text().trimmed();
    QString product_sales_price = ui->p_salesPrice->text().trimmed();
    int product_quantity = ui->p_quantutySpinBox->value();

    if(this->CheckInputs()){
        if(conn.connOpen()){

        QSqlQuery query;

        query.exec("SELECT id FROM users WHERE is_logged = 'true'");
            if (query.next()) {
                int userId = query.value(0).toInt();
                query.prepare(
                   "INSERT INTO "
                   "products "
                   "(p_id, p_name, p_description, p_quantity, p_purchase_price, p_sales_price, added_date, user_id) VALUES "
                   "(:p_id, :p_name, :p_description, :p_quantity, :p_purchase_price, :p_sales_price, :added_date, :user_id)"
                );

                query.bindValue(":p_id", unique_Id);
                query.bindValue(":p_name", product_name);
                query.bindValue(":p_description", product_description);
                query.bindValue(":p_quantity", product_quantity);
                query.bindValue(":p_purchase_price", product_purchase_price);
                query.bindValue(":p_sales_price", product_sales_price);
                query.bindValue(":added_date", formattedTimeMsg);
                query.bindValue(":user_id", userId);

                if(query.exec()){
                    if(query.isActive()){
                        this->Clear();
                        msgBox.information(this, "Success", "Product Added Successfully");
                        qDebug() << "Database query OK.";
                        Clear();
                        return;
                    }
                } else {
                    msgBox.warning(this, "Warning", "Error Occur");
                    qDebug() << query.lastError();
                    return;
                }
            }
        } else {
            msgBox.warning(this, "Warning", "Database Connection Error");
            qDebug() << "Database connection closed.";
            return;
        }
    }
}

