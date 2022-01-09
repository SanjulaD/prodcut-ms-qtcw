#ifndef USERMENU_H
#define USERMENU_H

#include <QMainWindow>
#include "login.h"

namespace Ui {
class UserMenu;
}

class UserMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserMenu(QWidget *parent = nullptr);
    ~UserMenu();

private slots:
    void on_actionExit_triggered();

    void on_actionAbout_QT_triggered();

    void on_refreshButton_clicked();

    void quitApp();

    void remove_loggedIn_user();

    void refresh_all_products_table();

    void refresh_my_products_table();

    void on_actionAdd_New_Product_triggered();

    void on_actionSearch_Products_triggered();

    void on_actionAbout_Application_triggered();

private:
    Ui::UserMenu *ui;

    void closeEvent (QCloseEvent *event);
};

#endif // USERMENU_H
