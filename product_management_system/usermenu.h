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

private:
    Ui::UserMenu *ui;
};

#endif // USERMENU_H
