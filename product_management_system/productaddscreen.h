#ifndef PRODUCTADDSCREEN_H
#define PRODUCTADDSCREEN_H

#include <QWidget>
#include <qdialog.h>

namespace Ui {
class ProductAddScreen;
}

class ProductAddScreen : public QDialog
{
    Q_OBJECT

public:
    explicit ProductAddScreen(QWidget *parent = nullptr);
    ~ProductAddScreen();

private slots:
    void on_cancelButton_clicked();

private:
    Ui::ProductAddScreen *ui;
};

#endif // PRODUCTADDSCREEN_H
