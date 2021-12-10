#ifndef ADMINALLPRODUCTS_H
#define ADMINALLPRODUCTS_H

#include <QWidget>
#include <qdialog.h>

namespace Ui {
class AdminAllProducts;
}

class AdminAllProducts : public QDialog
{
    Q_OBJECT

public:
    QString clickedId;

public:
    explicit AdminAllProducts(QWidget *parent = nullptr);
    ~AdminAllProducts();

private slots:
    void on_all_product_activated(const QModelIndex &index);

    void on_LoadTableBtn_clicked();

    void on_pushButton_clicked();

private:
    Ui::AdminAllProducts *ui;
};

#endif // ADMINALLPRODUCTS_H
