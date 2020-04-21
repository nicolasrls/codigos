/********************************************************************************
** Form generated from reading UI file 'janelalogin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELALOGIN_H
#define UI_JANELALOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JanelaLogin
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *userEdit;
    QLabel *label_3;
    QLineEdit *passEdit;
    QPushButton *btn_Entrar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *JanelaLogin)
    {
        if (JanelaLogin->objectName().isEmpty())
            JanelaLogin->setObjectName(QString::fromUtf8("JanelaLogin"));
        JanelaLogin->resize(401, 232);
        centralwidget = new QWidget(JanelaLogin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 160, 331, 16));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 10, 144, 135));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        userEdit = new QLineEdit(layoutWidget);
        userEdit->setObjectName(QString::fromUtf8("userEdit"));

        verticalLayout->addWidget(userEdit);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        passEdit = new QLineEdit(layoutWidget);
        passEdit->setObjectName(QString::fromUtf8("passEdit"));
        passEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passEdit);

        btn_Entrar = new QPushButton(layoutWidget);
        btn_Entrar->setObjectName(QString::fromUtf8("btn_Entrar"));

        verticalLayout->addWidget(btn_Entrar);

        JanelaLogin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JanelaLogin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 401, 22));
        JanelaLogin->setMenuBar(menubar);
        statusbar = new QStatusBar(JanelaLogin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        JanelaLogin->setStatusBar(statusbar);

        retranslateUi(JanelaLogin);

        QMetaObject::connectSlotsByName(JanelaLogin);
    } // setupUi

    void retranslateUi(QMainWindow *JanelaLogin)
    {
        JanelaLogin->setWindowTitle(QCoreApplication::translate("JanelaLogin", "JanelaLogin", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("JanelaLogin", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("JanelaLogin", "Senha:", nullptr));
        btn_Entrar->setText(QCoreApplication::translate("JanelaLogin", "ENTRAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaLogin: public Ui_JanelaLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELALOGIN_H
