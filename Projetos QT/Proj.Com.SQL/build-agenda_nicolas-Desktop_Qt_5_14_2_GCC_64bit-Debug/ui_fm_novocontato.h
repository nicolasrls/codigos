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

QT_BEGIN_NAMESPACE

class Ui_fm_novocontato
{
public:

    void setupUi(QDialog *fm_novocontato)
    {
        if (fm_novocontato->objectName().isEmpty())
            fm_novocontato->setObjectName(QString::fromUtf8("fm_novocontato"));
        fm_novocontato->resize(643, 354);

        retranslateUi(fm_novocontato);

        QMetaObject::connectSlotsByName(fm_novocontato);
    } // setupUi

    void retranslateUi(QDialog *fm_novocontato)
    {
        fm_novocontato->setWindowTitle(QCoreApplication::translate("fm_novocontato", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fm_novocontato: public Ui_fm_novocontato {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FM_NOVOCONTATO_H
