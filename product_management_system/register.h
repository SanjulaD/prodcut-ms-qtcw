#ifndef REGISTER_H
#define REGISTER_H

#include "login.h"
#include <QDialog>

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

private:
    void Clear();
    bool CheckInputs();

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_register_button_clicked();

    void on_login_page_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
