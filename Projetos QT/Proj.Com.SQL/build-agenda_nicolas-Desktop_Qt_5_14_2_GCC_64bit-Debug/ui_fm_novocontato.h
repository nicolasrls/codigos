/********************************************************************************
** Form generated from reading UI file 'fm_novocontato.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FM_NOVOCONTATO_H
#define UI_FM_NOVOCONTATO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fm_novocontato
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *txt_nome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *txt_telefone;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *txt_email;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_gravar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *fm_novocontato)
    {
        if (fm_novocontato->objectName().isEmpty())
            fm_novocontato->setObjectName(QString::fromUtf8("fm_novocontato"));
        fm_novocontato->resize(257, 237);
        widget = new QWidget(fm_novocontato);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 10, 241, 221));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        txt_nome = new QLineEdit(widget);
        txt_nome->setObjectName(QString::fromUtf8("txt_nome"));

        horizontalLayout_2->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        txt_telefone = new QLineEdit(widget);
        txt_telefone->setObjectName(QString::fromUtf8("txt_telefone"));

        horizontalLayout_3->addWidget(txt_telefone);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        txt_email = new QLineEdit(widget);
        txt_email->setObjectName(QString::fromUtf8("txt_email"));

        horizontalLayout_4->addWidget(txt_email);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_gravar = new QPushButton(widget);
        btn_gravar->setObjectName(QString::fromUtf8("btn_gravar"));

        horizontalLayout->addWidget(btn_gravar);

        btn_cancelar = new QPushButton(widget);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));

        horizontalLayout->addWidget(btn_cancelar);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(fm_novocontato);

        QMetaObject::connectSlotsByName(fm_novocontato);
    } // setupUi

    void retranslateUi(QDialog *fm_novocontato)
    {
        fm_novocontato->setWindowTitle(QCoreApplication::translate("fm_novocontato", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("fm_novocontato", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("fm_novocontato", "Telefone", nullptr));
        label_3->setText(QCoreApplication::translate("fm_novocontato", "Email", nullptr));
        btn_gravar->setText(QCoreApplication::translate("fm_novocontato", "Gravar", nullptr));
        btn_cancelar->setText(QCoreApplication::translate("fm_novocontato", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_novocontato: public Ui_fm_novocontato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_NOVOCONTATO_H
