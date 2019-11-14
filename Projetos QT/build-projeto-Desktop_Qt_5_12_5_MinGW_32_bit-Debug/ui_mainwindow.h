/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalvar;
    QAction *actionCarregar;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tabela;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *inputNome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *inputMat;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *inputMedia;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *inputCurso;
    QPushButton *btnCadastro;
    QPushButton *btn_ordernarNome;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QLabel *maiorNota;
    QGroupBox *groupBox_2;
    QLabel *menorNota;
    QGroupBox *groupBox_3;
    QLabel *media;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(612, 583);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        actionCarregar = new QAction(MainWindow);
        actionCarregar->setObjectName(QString::fromUtf8("actionCarregar"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 591, 491));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabela = new QTableWidget(tab);
        if (tabela->columnCount() < 5)
            tabela->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tabela->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tabela->setObjectName(QString::fromUtf8("tabela"));
        tabela->setGeometry(QRect(10, 200, 561, 151));
        tabela->horizontalHeader()->setStretchLastSection(true);
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 561, 176));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        inputNome = new QLineEdit(layoutWidget);
        inputNome->setObjectName(QString::fromUtf8("inputNome"));

        horizontalLayout->addWidget(inputNome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        inputMat = new QLineEdit(layoutWidget);
        inputMat->setObjectName(QString::fromUtf8("inputMat"));

        horizontalLayout_2->addWidget(inputMat);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        inputMedia = new QLineEdit(layoutWidget);
        inputMedia->setObjectName(QString::fromUtf8("inputMedia"));

        horizontalLayout_3->addWidget(inputMedia);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        inputCurso = new QComboBox(layoutWidget);
        inputCurso->addItem(QString());
        inputCurso->addItem(QString());
        inputCurso->addItem(QString());
        inputCurso->addItem(QString());
        inputCurso->setObjectName(QString::fromUtf8("inputCurso"));

        horizontalLayout_4->addWidget(inputCurso);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        btnCadastro = new QPushButton(layoutWidget);
        btnCadastro->setObjectName(QString::fromUtf8("btnCadastro"));
        btnCadastro->setStyleSheet(QString::fromUtf8("background-color:rgb(114, 159, 207)"));

        verticalLayout_2->addWidget(btnCadastro);

        btn_ordernarNome = new QPushButton(tab);
        btn_ordernarNome->setObjectName(QString::fromUtf8("btn_ordernarNome"));
        btn_ordernarNome->setGeometry(QRect(10, 360, 151, 28));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 551, 91));
        maiorNota = new QLabel(groupBox);
        maiorNota->setObjectName(QString::fromUtf8("maiorNota"));
        maiorNota->setGeometry(QRect(220, 30, 111, 61));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 120, 551, 101));
        menorNota = new QLabel(groupBox_2);
        menorNota->setObjectName(QString::fromUtf8("menorNota"));
        menorNota->setGeometry(QRect(191, 29, 111, 61));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 259, 551, 111));
        media = new QLabel(groupBox_3);
        media->setObjectName(QString::fromUtf8("media"));
        media->setGeometry(QRect(190, 30, 101, 71));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 612, 25));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionCarregar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
        actionCarregar->setText(QApplication::translate("MainWindow", "Carregar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabela->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabela->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Matr\303\255cula", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabela->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Curso", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabela->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "M\303\251dia", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tabela->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Status", nullptr));
        label->setText(QApplication::translate("MainWindow", "Nome:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Matr\303\255cula:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "M\303\251dia:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Curso:", nullptr));
        inputCurso->setItemText(0, QString());
        inputCurso->setItemText(1, QApplication::translate("MainWindow", "Engenharia El\303\251trica", nullptr));
        inputCurso->setItemText(2, QApplication::translate("MainWindow", "Administra\303\247\303\243o", nullptr));
        inputCurso->setItemText(3, QApplication::translate("MainWindow", "Sistema para Internet", nullptr));

        btnCadastro->setText(QApplication::translate("MainWindow", "Cadastrar", nullptr));
        btn_ordernarNome->setText(QApplication::translate("MainWindow", "Ordenar por nome", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Cadastro", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Maior Nota", nullptr));
        maiorNota->setText(QString());
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Menor Nota", nullptr));
        menorNota->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "M\303\251dia", nullptr));
        media->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Dados", nullptr));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
