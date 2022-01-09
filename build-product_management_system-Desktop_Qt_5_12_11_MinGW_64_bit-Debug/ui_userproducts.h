/********************************************************************************
** Form generated from reading UI file 'userproducts.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPRODUCTS_H
#define UI_USERPRODUCTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserProducts
{
public:
    QLineEdit *name_lineEdit;
    QLineEdit *desc_lineEdit;
    QLineEdit *price_lineEdit;
    QLineEdit *quantity_lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QTableView *product_update_table;
    QSplitter *splitter;
    QPushButton *LoadTableBtn;
    QPushButton *updateBtn;
    QPushButton *deleteBtn;

    void setupUi(QWidget *UserProducts)
    {
        if (UserProducts->objectName().isEmpty())
            UserProducts->setObjectName(QString::fromUtf8("UserProducts"));
        UserProducts->resize(820, 423);
        QFont font;
        font.setFamily(QString::fromUtf8("Poppins"));
        UserProducts->setFont(font);
        name_lineEdit = new QLineEdit(UserProducts);
        name_lineEdit->setObjectName(QString::fromUtf8("name_lineEdit"));
        name_lineEdit->setGeometry(QRect(120, 250, 221, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Poppins"));
        font1.setPointSize(10);
        name_lineEdit->setFont(font1);
        desc_lineEdit = new QLineEdit(UserProducts);
        desc_lineEdit->setObjectName(QString::fromUtf8("desc_lineEdit"));
        desc_lineEdit->setGeometry(QRect(120, 300, 221, 91));
        desc_lineEdit->setFont(font1);
        price_lineEdit = new QLineEdit(UserProducts);
        price_lineEdit->setObjectName(QString::fromUtf8("price_lineEdit"));
        price_lineEdit->setGeometry(QRect(450, 300, 221, 41));
        price_lineEdit->setFont(font1);
        quantity_lineEdit = new QLineEdit(UserProducts);
        quantity_lineEdit->setObjectName(QString::fromUtf8("quantity_lineEdit"));
        quantity_lineEdit->setGeometry(QRect(450, 250, 221, 41));
        quantity_lineEdit->setFont(font1);
        label = new QLabel(UserProducts);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 250, 39, 23));
        label->setFont(font1);
        label_2 = new QLabel(UserProducts);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 300, 73, 23));
        label_2->setFont(font1);
        label_3 = new QLabel(UserProducts);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(360, 250, 55, 23));
        label_3->setFont(font1);
        label_4 = new QLabel(UserProducts);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 300, 63, 23));
        label_4->setFont(font1);
        product_update_table = new QTableView(UserProducts);
        product_update_table->setObjectName(QString::fromUtf8("product_update_table"));
        product_update_table->setGeometry(QRect(10, 10, 791, 221));
        product_update_table->setFont(font);
        product_update_table->setStyleSheet(QString::fromUtf8("background-color:white;"));
        splitter = new QSplitter(UserProducts);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(360, 360, 311, 41));
        splitter->setOrientation(Qt::Horizontal);
        LoadTableBtn = new QPushButton(splitter);
        LoadTableBtn->setObjectName(QString::fromUtf8("LoadTableBtn"));
        LoadTableBtn->setFont(font);
        LoadTableBtn->setCursor(QCursor(Qt::PointingHandCursor));
        splitter->addWidget(LoadTableBtn);
        updateBtn = new QPushButton(splitter);
        updateBtn->setObjectName(QString::fromUtf8("updateBtn"));
        updateBtn->setFont(font);
        updateBtn->setCursor(QCursor(Qt::PointingHandCursor));
        splitter->addWidget(updateBtn);
        deleteBtn = new QPushButton(splitter);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));
        deleteBtn->setFont(font);
        deleteBtn->setCursor(QCursor(Qt::PointingHandCursor));
        deleteBtn->setStyleSheet(QString::fromUtf8("background-color:red;\n"
"color: white"));
        splitter->addWidget(deleteBtn);

        retranslateUi(UserProducts);

        QMetaObject::connectSlotsByName(UserProducts);
    } // setupUi

    void retranslateUi(QWidget *UserProducts)
    {
        UserProducts->setWindowTitle(QApplication::translate("UserProducts", "Search Products", nullptr));
        label->setText(QApplication::translate("UserProducts", "Name", nullptr));
        label_2->setText(QApplication::translate("UserProducts", "Description", nullptr));
        label_3->setText(QApplication::translate("UserProducts", "Quantity", nullptr));
        label_4->setText(QApplication::translate("UserProducts", "Sale Price", nullptr));
        LoadTableBtn->setText(QApplication::translate("UserProducts", "Load", nullptr));
        updateBtn->setText(QApplication::translate("UserProducts", "Update", nullptr));
        deleteBtn->setText(QApplication::translate("UserProducts", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserProducts: public Ui_UserProducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPRODUCTS_H
