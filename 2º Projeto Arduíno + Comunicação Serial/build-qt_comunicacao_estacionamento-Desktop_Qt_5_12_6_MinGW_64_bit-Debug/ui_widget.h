/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *btnConectar;
    QLabel *label_3;
    QComboBox *comboBoxvel;
    QComboBox *comboBoxport;
    QLabel *label_2;
    QLabel *label_status;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(485, 419);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 361, 41));
        btnConectar = new QPushButton(Widget);
        btnConectar->setObjectName(QString::fromUtf8("btnConectar"));
        btnConectar->setGeometry(QRect(20, 170, 75, 23));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 120, 61, 20));
        comboBoxvel = new QComboBox(Widget);
        comboBoxvel->setObjectName(QString::fromUtf8("comboBoxvel"));
        comboBoxvel->setGeometry(QRect(20, 140, 116, 20));
        comboBoxport = new QComboBox(Widget);
        comboBoxport->setObjectName(QString::fromUtf8("comboBoxport"));
        comboBoxport->setGeometry(QRect(20, 100, 176, 20));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 81, 21));
        label_status = new QLabel(Widget);
        label_status->setObjectName(QString::fromUtf8("label_status"));
        label_status->setGeometry(QRect(110, 170, 161, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\">E<span style=\" font-size:10pt;\">stacionamento Empresarial 2019.2</span></p></body></html>", nullptr));
        btnConectar->setText(QApplication::translate("Widget", "Conectar", nullptr));
        label_3->setText(QApplication::translate("Widget", "Velocidade:", nullptr));
        label_2->setText(QApplication::translate("Widget", "Porta Serial:", nullptr));
        label_status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
