/********************************************************************************
** Form generated from reading UI file 'fm_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_PRINCIPAL_H
#define UI_FM_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_principal
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_adicionar;
    QPushButton *btn_pesquisar;

    void setupUi(QDialog *fm_principal)
    {
        if (fm_principal->objectName().isEmpty())
            fm_principal->setObjectName(QString::fromUtf8("fm_principal"));
        fm_principal->resize(336, 82);
        widget = new QWidget(fm_principal);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 30, 267, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_adicionar = new QPushButton(widget);
        btn_adicionar->setObjectName(QString::fromUtf8("btn_adicionar"));

        horizontalLayout->addWidget(btn_adicionar);

        btn_pesquisar = new QPushButton(widget);
        btn_pesquisar->setObjectName(QString::fromUtf8("btn_pesquisar"));

        horizontalLayout->addWidget(btn_pesquisar);


        retranslateUi(fm_principal);

        QMetaObject::connectSlotsByName(fm_principal);
    } // setupUi

    void retranslateUi(QDialog *fm_principal)
    {
        fm_principal->setWindowTitle(QCoreApplication::translate("fm_principal", "Dialog", nullptr));
        btn_adicionar->setText(QCoreApplication::translate("fm_principal", "Adicionar contato", nullptr));
        btn_pesquisar->setText(QCoreApplication::translate("fm_principal", "Pesquisar contato", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_principal: public Ui_fm_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_PRINCIPAL_H
