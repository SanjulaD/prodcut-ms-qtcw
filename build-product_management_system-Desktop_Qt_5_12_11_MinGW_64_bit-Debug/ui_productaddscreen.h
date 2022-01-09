/********************************************************************************
** Form generated from reading UI file 'productaddscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTADDSCREEN_H
#define UI_PRODUCTADDSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductAddScreen
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *p_nameEdit;
    QLineEdit *p_descEdit;
    QSpinBox *p_quantutySpinBox;
    QLineEdit *p_purchasePrice;
    QLineEdit *p_salesPrice;
    QSplitter *splitter;
    QPushButton *productAddButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *ProductAddScreen)
    {
        if (ProductAddScreen->objectName().isEmpty())
            ProductAddScreen->setObjectName(QString::fromUtf8("ProductAddScreen"));
        ProductAddScreen->resize(357, 465);
        label = new QLabel(ProductAddScreen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 10, 132, 37));
        QFont font;
        font.setFamily(QString::fromUtf8("Poppins"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(ProductAddScreen);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 39, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Poppins"));
        font1.setPointSize(10);
        label_2->setFont(font1);
        label_3 = new QLabel(ProductAddScreen);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 140, 73, 23));
        label_3->setFont(font1);
        label_4 = new QLabel(ProductAddScreen);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 200, 55, 23));
        label_4->setFont(font1);
        label_5 = new QLabel(ProductAddScreen);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 260, 96, 23));
        label_5->setFont(font1);
        label_6 = new QLabel(ProductAddScreen);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 320, 63, 23));
        label_6->setFont(font1);
        p_nameEdit = new QLineEdit(ProductAddScreen);
        p_nameEdit->setObjectName(QString::fromUtf8("p_nameEdit"));
        p_nameEdit->setGeometry(QRect(160, 70, 171, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Poppins"));
        font2.setPointSize(11);
        p_nameEdit->setFont(font2);
        p_nameEdit->setCursor(QCursor(Qt::ArrowCursor));
        p_descEdit = new QLineEdit(ProductAddScreen);
        p_descEdit->setObjectName(QString::fromUtf8("p_descEdit"));
        p_descEdit->setGeometry(QRect(160, 130, 171, 51));
        p_descEdit->setFont(font2);
        p_descEdit->setCursor(QCursor(Qt::ArrowCursor));
        p_quantutySpinBox = new QSpinBox(ProductAddScreen);
        p_quantutySpinBox->setObjectName(QString::fromUtf8("p_quantutySpinBox"));
        p_quantutySpinBox->setGeometry(QRect(160, 190, 171, 51));
        p_quantutySpinBox->setFont(font2);
        p_quantutySpinBox->setCursor(QCursor(Qt::ArrowCursor));
        p_quantutySpinBox->setStyleSheet(QString::fromUtf8("color: white"));
        p_purchasePrice = new QLineEdit(ProductAddScreen);
        p_purchasePrice->setObjectName(QString::fromUtf8("p_purchasePrice"));
        p_purchasePrice->setGeometry(QRect(160, 250, 171, 51));
        p_purchasePrice->setFont(font2);
        p_purchasePrice->setCursor(QCursor(Qt::ArrowCursor));
        p_salesPrice = new QLineEdit(ProductAddScreen);
        p_salesPrice->setObjectName(QString::fromUtf8("p_salesPrice"));
        p_salesPrice->setGeometry(QRect(160, 310, 171, 51));
        p_salesPrice->setFont(font2);
        p_salesPrice->setCursor(QCursor(Qt::ArrowCursor));
        splitter = new QSplitter(ProductAddScreen);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(80, 390, 201, 51));
        splitter->setOrientation(Qt::Horizontal);
        productAddButton = new QPushButton(splitter);
        productAddButton->setObjectName(QString::fromUtf8("productAddButton"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Poppins"));
        productAddButton->setFont(font3);
        productAddButton->setCursor(QCursor(Qt::PointingHandCursor));
        splitter->addWidget(productAddButton);
        cancelButton = new QPushButton(splitter);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setFont(font3);
        cancelButton->setCursor(QCursor(Qt::PointingHandCursor));
        splitter->addWidget(cancelButton);

        retranslateUi(ProductAddScreen);

        QMetaObject::connectSlotsByName(ProductAddScreen);
    } // setupUi

    void retranslateUi(QWidget *ProductAddScreen)
    {
        ProductAddScreen->setWindowTitle(QApplication::translate("ProductAddScreen", "Product Add", nullptr));
        label->setText(QApplication::translate("ProductAddScreen", "Add Product", nullptr));
        label_2->setText(QApplication::translate("ProductAddScreen", "Name", nullptr));
        label_3->setText(QApplication::translate("ProductAddScreen", "Description", nullptr));
        label_4->setText(QApplication::translate("ProductAddScreen", "Quantity", nullptr));
        label_5->setText(QApplication::translate("ProductAddScreen", "Purchase Price", nullptr));
        label_6->setText(QApplication::translate("ProductAddScreen", "Sale Price", nullptr));
        productAddButton->setText(QApplication::translate("ProductAddScreen", "ADD", nullptr));
        cancelButton->setText(QApplication::translate("ProductAddScreen", "CANCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductAddScreen: public Ui_ProductAddScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTADDSCREEN_H
