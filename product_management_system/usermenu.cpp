#include "usermenu.h"
#include "ui_usermenu.h"

UserMenu::UserMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserMenu)
{
    ui->setupUi(this);

    this->setFixedSize(this->maximumSize());
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
}

UserMenu::~UserMenu()
{
    delete ui;
}
