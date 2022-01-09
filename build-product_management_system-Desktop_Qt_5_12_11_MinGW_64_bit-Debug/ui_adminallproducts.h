/********************************************************************************
** Form generated from reading UI file 'adminallproducts.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINALLPRODUCTS_H
#define UI_ADMINALLPRODUCTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminAllProducts
{
public:
    QTableView *all_product_table;
    QSplitter *splitter;
    QPushButton *LoadTableBtn;
    QPushButton *deleteBtn;
    QPushButton *pushButton;

    void setupUi(QWidget *AdminAllProducts)
    {
        if (AdminAllProducts->objectName().isEmpty())
            AdminAllProducts->setObjectName(QString::fromUtf8("AdminAllProducts"));
        AdminAllProducts->resize(664, 426);
        QFont font;
        font.setFamily(QString::fromUtf8("Poppins"));
        AdminAllProducts->setFont(font);
        AdminAllProducts->setStyleSheet(QString::fromUtf8("background-color: #00111d;"));
        all_product_table = new QTableView(AdminAllProducts);
        all_product_table->setObjectName(QString::fromUtf8("all_product_table"));
        all_product_table->setGeometry(QRect(10, 20, 641, 291));
        all_product_table->setFont(font);
        all_product_table->setStyleSheet(QString::fromUtf8("background-color:white;"));
        splitter = new QSplitter(AdminAllProducts);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(160, 350, 311, 41));
        splitter->setOrientation(Qt::Horizontal);
        LoadTableBtn = new QPushButton(splitter);
        LoadTableBtn->setObjectName(QString::fromUtf8("LoadTableBtn"));
        LoadTableBtn->setFont(font);
        LoadTableBtn->setCursor(QCursor(Qt::PointingHandCursor));
        LoadTableBtn->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: #00111d;"));
        splitter->addWidget(LoadTableBtn);
        deleteBtn = new QPushButton(splitter);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));
        deleteBtn->setFont(font);
        deleteBtn->setCursor(QCursor(Qt::PointingHandCursor));
        deleteBtn->setStyleSheet(QString::fromUtf8("background-color:red;\n"
"color: white"));
        splitter->addWidget(deleteBtn);
        pushButton = new QPushButton(AdminAllProducts);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 350, 91, 41));
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color:white;"));

        retranslateUi(AdminAllProducts);

        QMetaObject::connectSlotsByName(AdminAllProducts);
    } // setupUi

    void retranslateUi(QWidget *AdminAllProducts)
    {
        AdminAllProducts->setWindowTitle(QApplication::translate("AdminAllProducts", "Admin - All Products", nullptr));
        LoadTableBtn->setText(QApplication::translate("AdminAllProducts", "Load", nullptr));
        deleteBtn->setText(QApplication::translate("AdminAllProducts", "Delete", nullptr));
        pushButton->setText(QApplication::translate("AdminAllProducts", "System Users", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminAllProducts: public Ui_AdminAllProducts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINALLPRODUCTS_H
