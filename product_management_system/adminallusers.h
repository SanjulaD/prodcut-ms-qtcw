#ifndef ADMINALLUSERS_H
#define ADMINALLUSERS_H

#include <QWidget>
#include <qdialog.h>

namespace Ui {
class AdminAllUsers;
}

class AdminAllUsers : public QDialog
{
    Q_OBJECT

public:
    QString clickedId;

public:
    explicit AdminAllUsers(QWidget *parent = nullptr);
    ~AdminAllUsers();

private slots:
    void on_all_users_table_activated(const QModelIndex &index);

    void on_LoadTableBtn_clicked();

    void on_deleteBtn_clicked();

private:
    Ui::AdminAllUsers *ui;
};

#endif // ADMINALLUSERS_H
