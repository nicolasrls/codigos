/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
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
    QAction *actionatualizar;
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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnVaga1;
    QPushButton *btnVaga2;
    QPushButton *btnVaga3;
    QPushButton *btnVaga4;
    QPushButton *btnVaga5;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelVaga1;
    QLabel *labelVaga2;
    QLabel *labelVaga3;
    QLabel *labelVaga4;
    QLabel *labelVaga5;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelVagas1;
    QLabel *labelVagas2;
    QLabel *labelVagas3;
    QLabel *labelVagas4;
    QLabel *labelVagas5;
    QLabel *datahora;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(485, 419);
        actionatualizar = new QAction(Widget);
        actionatualizar->setObjectName(QString::fromUtf8("actionatualizar"));
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
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 90, 431, 21));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout->addWidget(label_7);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout->addWidget(label_8);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout->addWidget(label_9);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 110, 426, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnVaga1 = new QPushButton(layoutWidget1);
        btnVaga1->setObjectName(QString::fromUtf8("btnVaga1"));

        horizontalLayout_2->addWidget(btnVaga1);

        btnVaga2 = new QPushButton(layoutWidget1);
        btnVaga2->setObjectName(QString::fromUtf8("btnVaga2"));

        horizontalLayout_2->addWidget(btnVaga2);

        btnVaga3 = new QPushButton(layoutWidget1);
        btnVaga3->setObjectName(QString::fromUtf8("btnVaga3"));

        horizontalLayout_2->addWidget(btnVaga3);

        btnVaga4 = new QPushButton(layoutWidget1);
        btnVaga4->setObjectName(QString::fromUtf8("btnVaga4"));

        horizontalLayout_2->addWidget(btnVaga4);

        btnVaga5 = new QPushButton(layoutWidget1);
        btnVaga5->setObjectName(QString::fromUtf8("btnVaga5"));

        horizontalLayout_2->addWidget(btnVaga5);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 144, 421, 21));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelVaga1 = new QLabel(layoutWidget2);
        labelVaga1->setObjectName(QString::fromUtf8("labelVaga1"));
        labelVaga1->setScaledContents(true);

        horizontalLayout_3->addWidget(labelVaga1);

        labelVaga2 = new QLabel(layoutWidget2);
        labelVaga2->setObjectName(QString::fromUtf8("labelVaga2"));

        horizontalLayout_3->addWidget(labelVaga2);

        labelVaga3 = new QLabel(layoutWidget2);
        labelVaga3->setObjectName(QString::fromUtf8("labelVaga3"));

        horizontalLayout_3->addWidget(labelVaga3);

        labelVaga4 = new QLabel(layoutWidget2);
        labelVaga4->setObjectName(QString::fromUtf8("labelVaga4"));

        horizontalLayout_3->addWidget(labelVaga4);

        labelVaga5 = new QLabel(layoutWidget2);
        labelVaga5->setObjectName(QString::fromUtf8("labelVaga5"));

        horizontalLayout_3->addWidget(labelVaga5);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(120, 25, 311, 61));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelVagas1 = new QLabel(layoutWidget3);
        labelVagas1->setObjectName(QString::fromUtf8("labelVagas1"));
        labelVagas1->setStyleSheet(QString::fromUtf8("image: url(:/image/8a5ce3a0-9afb-4523-b07d-63b2c766009d_200x200.png);"));
        labelVagas1->setScaledContents(true);

        horizontalLayout_4->addWidget(labelVagas1);

        labelVagas2 = new QLabel(layoutWidget3);
        labelVagas2->setObjectName(QString::fromUtf8("labelVagas2"));
        labelVagas2->setStyleSheet(QString::fromUtf8("image: url(:/image/8a5ce3a0-9afb-4523-b07d-63b2c766009d_200x200.png);"));
        labelVagas2->setScaledContents(true);

        horizontalLayout_4->addWidget(labelVagas2);

        labelVagas3 = new QLabel(layoutWidget3);
        labelVagas3->setObjectName(QString::fromUtf8("labelVagas3"));
        labelVagas3->setStyleSheet(QString::fromUtf8("image: url(:/image/8a5ce3a0-9afb-4523-b07d-63b2c766009d_200x200.png);"));
        labelVagas3->setScaledContents(true);

        horizontalLayout_4->addWidget(labelVagas3);

        labelVagas4 = new QLabel(layoutWidget3);
        labelVagas4->setObjectName(QString::fromUtf8("labelVagas4"));
        labelVagas4->setStyleSheet(QString::fromUtf8("image: url(:/image/8a5ce3a0-9afb-4523-b07d-63b2c766009d_200x200.png);"));
        labelVagas4->setScaledContents(true);

        horizontalLayout_4->addWidget(labelVagas4);

        labelVagas5 = new QLabel(layoutWidget3);
        labelVagas5->setObjectName(QString::fromUtf8("labelVagas5"));
        labelVagas5->setStyleSheet(QString::fromUtf8("image: url(:/image/8a5ce3a0-9afb-4523-b07d-63b2c766009d_200x200.png);"));
        labelVagas5->setScaledContents(true);

        horizontalLayout_4->addWidget(labelVagas5);

        datahora = new QLabel(Widget);
        datahora->setObjectName(QString::fromUtf8("datahora"));
        datahora->setGeometry(QRect(160, 46, 141, 20));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        actionatualizar->setText(QApplication::translate("Widget", "atualizar", nullptr));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\">E<span style=\" font-size:10pt;\">stacionamento Empresarial 2019.2</span></p></body></html>", nullptr));
        btnConectar->setText(QApplication::translate("Widget", "Conectar", nullptr));
        label_3->setText(QApplication::translate("Widget", "Velocidade:", nullptr));
        comboBoxvel->setItemText(0, QApplication::translate("Widget", "115200", nullptr));

        label_2->setText(QApplication::translate("Widget", "Porta Serial:", nullptr));
        label_status->setText(QString());
        groupBox->setTitle(QApplication::translate("Widget", "Controle do estacionamento:", nullptr));
        btnLiberaCancela->setText(QApplication::translate("Widget", "Liberar Cancela", nullptr));
        label_4->setText(QApplication::translate("Widget", "Vagas dispon\303\255veis: ", nullptr));
        label_5->setText(QApplication::translate("Widget", "Vaga 1:", nullptr));
        label_6->setText(QApplication::translate("Widget", "Vaga 2:", nullptr));
        label_7->setText(QApplication::translate("Widget", "Vaga 3:", nullptr));
        label_8->setText(QApplication::translate("Widget", "Vaga 4:", nullptr));
        label_9->setText(QApplication::translate("Widget", "Vaga 5:", nullptr));
        btnVaga1->setText(QApplication::translate("Widget", "Alterar", nullptr));
        btnVaga2->setText(QApplication::translate("Widget", "Alterar", nullptr));
        btnVaga3->setText(QApplication::translate("Widget", "Alterar", nullptr));
        btnVaga4->setText(QApplication::translate("Widget", "Alterar", nullptr));
        btnVaga5->setText(QApplication::translate("Widget", "Alterar", nullptr));
        labelVaga1->setText(QString());
        labelVaga2->setText(QString());
        labelVaga3->setText(QString());
        labelVaga4->setText(QString());
        labelVaga5->setText(QString());
        labelVagas1->setText(QString());
        labelVagas2->setText(QString());
        labelVagas3->setText(QString());
        labelVagas4->setText(QString());
        labelVagas5->setText(QString());
        datahora->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
