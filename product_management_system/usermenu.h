#ifndef USERMENU_H
#define USERMENU_H

#include <QMainWindow>

namespace Ui {
class UserMenu;
}

class UserMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit UserMenu(QWidget *parent = nullptr);
    ~UserMenu();

private:
    Ui::UserMenu *ui;
};

#endif // USERMENU_H
