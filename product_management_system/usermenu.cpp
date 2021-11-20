#include "usermenu.h"
#include "ui_usermenu.h"
#include "login.h"
#include <QDesktopWidget>
#include <QMessageBox>
#include <QTextStream>
#include <QDebug>

UserMenu::UserMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::UserMenu)
{
    ui->setupUi(this);

    window()->setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter, window()->size(), qApp->desktop()->availableGeometry()));
    this->statusBar()->setSizeGripEnabled(false);
    this->setFixedSize(this->maximumSize());
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
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

}

