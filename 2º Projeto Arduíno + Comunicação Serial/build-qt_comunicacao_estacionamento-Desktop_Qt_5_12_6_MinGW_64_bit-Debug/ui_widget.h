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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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
    QGroupBox *groupBox;
    QPushButton *btnLiberaCancela;
    QLabel *label_4;
    QLabel *labelVagas;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnVaga1;
    QPushButton *btnVaga2;
    QPushButton *btnVaga3;
    QPushButton *btnVaga4;
    QPushButton *btnVaga5;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelVaga1;
    QLabel *labelVaga2;
    QLabel *labelVaga3;
    QLabel *labelVaga4;
    QLabel *labelVaga5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(485, 419);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 20, 361, 41));
        btnConectar = new QPushButton(Widget);
        btnConectar->setObjectName(QString::fromUtf8("btnConectar"));
        btnConectar->setGeometry(QRect(20, 170, 75, 23));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 120, 61, 20));
        comboBoxvel = new QComboBox(Widget);
        comboBoxvel->addItem(QString());
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
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 230, 441, 171));
        btnLiberaCancela = new QPushButton(groupBox);
        btnLiberaCancela->setObjectName(QString::fromUtf8("btnLiberaCancela"));
        btnLiberaCancela->setGeometry(QRect(10, 30, 101, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 60, 101, 21));
        labelVagas = new QLabel(groupBox);
        labelVagas->setObjectName(QString::fromUtf8("labelVagas"));
        labelVagas->setGeometry(QRect(110, 60, 241, 21));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 90, 431, 21));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 110, 426, 31));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnVaga1 = new QPushButton(widget1);
        btnVaga1->setObjectName(QString::fromUtf8("btnVaga1"));

        horizontalLayout_2->addWidget(btnVaga1);

        btnVaga2 = new QPushButton(widget1);
        btnVaga2->setObjectName(QString::fromUtf8("btnVaga2"));

        horizontalLayout_2->addWidget(btnVaga2);

        btnVaga3 = new QPushButton(widget1);
        btnVaga3->setObjectName(QString::fromUtf8("btnVaga3"));

        horizontalLayout_2->addWidget(btnVaga3);

        btnVaga4 = new QPushButton(widget1);
        btnVaga4->setObjectName(QString::fromUtf8("btnVaga4"));

        horizontalLayout_2->addWidget(btnVaga4);

        btnVaga5 = new QPushButton(widget1);
        btnVaga5->setObjectName(QString::fromUtf8("btnVaga5"));

        horizontalLayout_2->addWidget(btnVaga5);

        widget2 = new QWidget(groupBox);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(30, 144, 421, 21));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelVaga1 = new QLabel(widget2);
        labelVaga1->setObjectName(QString::fromUtf8("labelVaga1"));

        horizontalLayout_3->addWidget(labelVaga1);

        labelVaga2 = new QLabel(widget2);
        labelVaga2->setObjectName(QString::fromUtf8("labelVaga2"));

        horizontalLayout_3->addWidget(labelVaga2);

        labelVaga3 = new QLabel(widget2);
        labelVaga3->setObjectName(QString::fromUtf8("labelVaga3"));

        horizontalLayout_3->addWidget(labelVaga3);

        labelVaga4 = new QLabel(widget2);
        labelVaga4->setObjectName(QString::fromUtf8("labelVaga4"));

        horizontalLayout_3->addWidget(labelVaga4);

        labelVaga5 = new QLabel(widget2);
        labelVaga5->setObjectName(QString::fromUtf8("labelVaga5"));

        horizontalLayout_3->addWidget(labelVaga5);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\">E<span style=\" font-size:10pt;\">stacionamento Empresarial 2019.2</span></p></body></html>", nullptr));
        btnConectar->setText(QApplication::translate("Widget", "Conectar", nullptr));
        label_3->setText(QApplication::translate("Widget", "Velocidade:", nullptr));
        comboBoxvel->setItemText(0, QApplication::translate("Widget", "115200", nullptr));

        label_2->setText(QApplication::translate("Widget", "Porta Serial:", nullptr));
        label_status->setText(QString());
        groupBox->setTitle(QApplication::translate("Widget", "Controle do estacionamento:", nullptr));
        btnLiberaCancela->setText(QApplication::translate("Widget", "Liberar Cancela", nullptr));
        label_4->setText(QApplication::translate("Widget", "Vagas dispon\303\255veis: ", nullptr));
        labelVagas->setText(QString());
        label_5->setText(QApplication::translate("Widget", "Vaga 1:", nullptr));
        label_6->setText(QApplication::translate("Widget", "Vaga 2:", nullptr));
        label_7->setText(QApplication::translate("Widget", "Vaga 3:", nullptr));
        label_8->setText(QApplication::translate("Widget", "Vaga 4:", nullptr));
        label_9->setText(QApplication::translate("Widget", "Vaga 5:", nullptr));
        btnVaga1->setText(QApplication::translate("Widget", "Ocupar/Liberar", nullptr));
        btnVaga2->setText(QApplication::translate("Widget", "Ocupar/Liberar", nullptr));
        btnVaga3->setText(QApplication::translate("Widget", "Ocupar/Liberar", nullptr));
        btnVaga4->setText(QApplication::translate("Widget", "Ocupar/Liberar", nullptr));
        btnVaga5->setText(QApplication::translate("Widget", "Ocupar/Liberar", nullptr));
        labelVaga1->setText(QString());
        labelVaga2->setText(QString());
        labelVaga3->setText(QString());
        labelVaga4->setText(QString());
        labelVaga5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
