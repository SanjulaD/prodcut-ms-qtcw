#include "productaddscreen.h"
#include "ui_productaddscreen.h"

ProductAddScreen::ProductAddScreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductAddScreen)
{
    ui->setupUi(this);
}

ProductAddScreen::~ProductAddScreen()
{
    delete ui;
}

void ProductAddScreen::on_cancelButton_clicked()
{
    this->close();
}

