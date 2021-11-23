#ifndef USERPRODUCTS_H
#define USERPRODUCTS_H

#include <QWidget>
#include <qdialog.h>

namespace Ui {
class UserProducts;
}

class UserProducts : public QDialog
{
    Q_OBJECT

public:
    explicit UserProducts(QWidget *parent = nullptr);
    ~UserProducts();

private slots:
    void on_LoadTableBtn_clicked();

    void on_product_update_table_activated(const QModelIndex &index);

private:
    Ui::UserProducts *ui;
};

#endif // USERPRODUCTS_H
