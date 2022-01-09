/********************************************************************************
** Form generated from reading UI file 'usermenu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMENU_H
#define UI_USERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserMenu
{
public:
    QAction *actionAdd_New_Product;
    QAction *actionSearch_Products;
    QAction *actionExit;
    QAction *actionAbout_Application;
    QAction *actionHelp;
    QAction *actionAbout_QT;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *my_products;
    QTableView *my_products_table;
    QWidget *all_products;
    QTableView *all_products_table;
    QLabel *label;
    QPushButton *refreshButton;
    QMenuBar *menubar;
    QMenu *menuFIle;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserMenu)
    {
        if (UserMenu->objectName().isEmpty())
            UserMenu->setObjectName(QString::fromUtf8("UserMenu"));
        UserMenu->resize(672, 431);
        UserMenu->setCursor(QCursor(Qt::ArrowCursor));
        actionAdd_New_Product = new QAction(UserMenu);
        actionAdd_New_Product->setObjectName(QString::fromUtf8("actionAdd_New_Product"));
        QFont font;
        font.setFamily(QString::fromUtf8("Poppins"));
        actionAdd_New_Product->setFont(font);
        actionSearch_Products = new QAction(UserMenu);
        actionSearch_Products->setObjectName(QString::fromUtf8("actionSearch_Products"));
        actionExit = new QAction(UserMenu);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout_Application = new QAction(UserMenu);
        actionAbout_Application->setObjectName(QString::fromUtf8("actionAbout_Application"));
        actionHelp = new QAction(UserMenu);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionAbout_QT = new QAction(UserMenu);
        actionAbout_QT->setObjectName(QString::fromUtf8("actionAbout_QT"));
        centralwidget = new QWidget(UserMenu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(40, 70, 601, 321));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Poppins"));
        font1.setBold(false);
        font1.setWeight(50);
        tabWidget->setFont(font1);
        my_products = new QWidget();
        my_products->setObjectName(QString::fromUtf8("my_products"));
        my_products_table = new QTableView(my_products);
        my_products_table->setObjectName(QString::fromUtf8("my_products_table"));
        my_products_table->setGeometry(QRect(0, 0, 601, 281));
        my_products_table->setFont(font1);
        my_products_table->setAutoFillBackground(false);
        my_products_table->setStyleSheet(QString::fromUtf8("background-color:white;"));
        my_products_table->setSortingEnabled(true);
        my_products_table->horizontalHeader()->setCascadingSectionResizes(true);
        my_products_table->horizontalHeader()->setStretchLastSection(true);
        my_products_table->verticalHeader()->setCascadingSectionResizes(true);
        tabWidget->addTab(my_products, QString());
        all_products = new QWidget();
        all_products->setObjectName(QString::fromUtf8("all_products"));
        all_products_table = new QTableView(all_products);
        all_products_table->setObjectName(QString::fromUtf8("all_products_table"));
        all_products_table->setGeometry(QRect(0, 0, 601, 281));
        all_products_table->setFont(font1);
        all_products_table->setAutoFillBackground(false);
        all_products_table->setStyleSheet(QString::fromUtf8("background-color:white;"));
        all_products_table->setSortingEnabled(true);
        all_products_table->horizontalHeader()->setCascadingSectionResizes(true);
        all_products_table->horizontalHeader()->setStretchLastSection(true);
        all_products_table->verticalHeader()->setCascadingSectionResizes(true);
        tabWidget->addTab(all_products, QString());
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 361, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Poppins"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setGeometry(QRect(560, 20, 81, 41));
        refreshButton->setFont(font);
        refreshButton->setCursor(QCursor(Qt::PointingHandCursor));
        UserMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UserMenu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 672, 27));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Poppins"));
        font3.setBold(false);
        font3.setUnderline(false);
        font3.setWeight(50);
        font3.setStrikeOut(false);
        menubar->setFont(font3);
        menubar->setCursor(QCursor(Qt::PointingHandCursor));
        menubar->setFocusPolicy(Qt::TabFocus);
        menubar->setStyleSheet(QString::fromUtf8("background-color: #01dcff;\n"
"color: black"));
        menuFIle = new QMenu(menubar);
        menuFIle->setObjectName(QString::fromUtf8("menuFIle"));
        menuFIle->setCursor(QCursor(Qt::PointingHandCursor));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuHelp->setCursor(QCursor(Qt::PointingHandCursor));
        UserMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(UserMenu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        UserMenu->setStatusBar(statusbar);

        menubar->addAction(menuFIle->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFIle->addAction(actionAdd_New_Product);
        menuFIle->addAction(actionSearch_Products);
        menuFIle->addSeparator();
        menuFIle->addAction(actionExit);
        menuHelp->addAction(actionAbout_Application);
        menuHelp->addAction(actionHelp);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_QT);

        retranslateUi(UserMenu);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserMenu);
    } // setupUi

    void retranslateUi(QMainWindow *UserMenu)
    {
        UserMenu->setWindowTitle(QApplication::translate("UserMenu", "Product Management System", nullptr));
        actionAdd_New_Product->setText(QApplication::translate("UserMenu", "Add New Product", nullptr));
        actionSearch_Products->setText(QApplication::translate("UserMenu", "Search Products", nullptr));
        actionExit->setText(QApplication::translate("UserMenu", "Exit", nullptr));
        actionAbout_Application->setText(QApplication::translate("UserMenu", "About Application", nullptr));
        actionHelp->setText(QApplication::translate("UserMenu", "Help", nullptr));
        actionAbout_QT->setText(QApplication::translate("UserMenu", "About QT", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(my_products), QApplication::translate("UserMenu", "My Products", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(all_products), QApplication::translate("UserMenu", "All Products", nullptr));
        label->setText(QApplication::translate("UserMenu", "PRODUCT MANAGEMENT SYSTEM", nullptr));
        refreshButton->setText(QApplication::translate("UserMenu", "Refresh", nullptr));
        menuFIle->setTitle(QApplication::translate("UserMenu", "FIle", nullptr));
        menuHelp->setTitle(QApplication::translate("UserMenu", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserMenu: public Ui_UserMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMENU_H
