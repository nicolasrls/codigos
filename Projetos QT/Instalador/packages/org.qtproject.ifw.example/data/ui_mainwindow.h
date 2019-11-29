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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbrir;
    QAction *actionSalvar;
    QAction *actionSair;
    QAction *actionExcluir;
    QAction *actionLimpar_Tabela;
    QAction *actionAtualizar_Tabela;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_8;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *inputObjeto;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *valorobj;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *destinoObj;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QComboBox *estadoatual;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDateEdit *edicaodata;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *inputCi;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelpeso;
    QLineEdit *pesoobj;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QPushButton *btncadastrar;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelimg;
    QLabel *label_6;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *tabela;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *ordmenorcodigo;
    QPushButton *ordpeso;
    QPushButton *ordmaiorvalor;
    QPushButton *limpartab;
    QWidget *tab_3;
    QFrame *frame;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QMenuBar *menubar;
    QMenu *menuSCOP;
    QMenu *menuEditar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1073, 574);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName(QString::fromUtf8("actionAbrir"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/editar_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbrir->setIcon(icon);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QString::fromUtf8("actionSalvar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icones/salvar_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSalvar->setIcon(icon1);
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionExcluir = new QAction(MainWindow);
        actionExcluir->setObjectName(QString::fromUtf8("actionExcluir"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("excluir_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExcluir->setIcon(icon2);
        actionLimpar_Tabela = new QAction(MainWindow);
        actionLimpar_Tabela->setObjectName(QString::fromUtf8("actionLimpar_Tabela"));
        actionAtualizar_Tabela = new QAction(MainWindow);
        actionAtualizar_Tabela->setObjectName(QString::fromUtf8("actionAtualizar_Tabela"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 1071, 551));
        tabWidget->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
""));
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setTabBarAutoHide(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(400, 420, 231, 39));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 270, 832, 113));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        inputObjeto = new QLineEdit(layoutWidget);
        inputObjeto->setObjectName(QString::fromUtf8("inputObjeto"));
        inputObjeto->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(inputObjeto);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        valorobj = new QLineEdit(layoutWidget);
        valorobj->setObjectName(QString::fromUtf8("valorobj"));

        horizontalLayout_3->addWidget(valorobj);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        destinoObj = new QLineEdit(layoutWidget);
        destinoObj->setObjectName(QString::fromUtf8("destinoObj"));

        horizontalLayout_5->addWidget(destinoObj);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_8->addWidget(label_5);

        estadoatual = new QComboBox(layoutWidget);
        estadoatual->addItem(QString());
        estadoatual->addItem(QString());
        estadoatual->addItem(QString());
        estadoatual->addItem(QString());
        estadoatual->addItem(QString());
        estadoatual->addItem(QString());
        estadoatual->setObjectName(QString::fromUtf8("estadoatual"));

        horizontalLayout_8->addWidget(estadoatual);


        verticalLayout_2->addLayout(horizontalLayout_8);


        horizontalLayout_9->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        edicaodata = new QDateEdit(layoutWidget);
        edicaodata->setObjectName(QString::fromUtf8("edicaodata"));

        horizontalLayout_4->addWidget(edicaodata);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        inputCi = new QLineEdit(layoutWidget);
        inputCi->setObjectName(QString::fromUtf8("inputCi"));

        horizontalLayout_2->addWidget(inputCi);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labelpeso = new QLabel(layoutWidget);
        labelpeso->setObjectName(QString::fromUtf8("labelpeso"));

        horizontalLayout_6->addWidget(labelpeso);

        pesoobj = new QLineEdit(layoutWidget);
        pesoobj->setObjectName(QString::fromUtf8("pesoobj"));

        horizontalLayout_6->addWidget(pesoobj);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        btncadastrar = new QPushButton(layoutWidget);
        btncadastrar->setObjectName(QString::fromUtf8("btncadastrar"));

        horizontalLayout_7->addWidget(btncadastrar);

        horizontalSpacer_2 = new QSpacerItem(88, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout_9->addLayout(verticalLayout_3);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(200, 60, 611, 121));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        labelimg = new QLabel(layoutWidget1);
        labelimg->setObjectName(QString::fromUtf8("labelimg"));
        labelimg->setStyleSheet(QString::fromUtf8("image: url(:/icones/scopimg.png);"));
        labelimg->setScaledContents(true);

        horizontalLayout_10->addWidget(labelimg);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_6->setFont(font);
        label_6->setAutoFillBackground(false);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);\n"
"background-color: rgb(0,0,0);"));

        horizontalLayout_10->addWidget(label_6);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout = new QVBoxLayout(tab_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabela = new QTableWidget(tab_2);
        if (tabela->columnCount() < 7)
            tabela->setColumnCount(7);
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font1);
        tabela->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font2;
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font2);
        tabela->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font1);
        tabela->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font3);
        tabela->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font1);
        tabela->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QFont font4;
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font4);
        tabela->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font1);
        tabela->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tabela->setObjectName(QString::fromUtf8("tabela"));
        tabela->setEnabled(true);
        tabela->setMinimumSize(QSize(837, 470));
        tabela->setStyleSheet(QString::fromUtf8(""));
        tabela->setShowGrid(true);
        tabela->setCornerButtonEnabled(true);
        tabela->horizontalHeader()->setMinimumSectionSize(30);
        tabela->horizontalHeader()->setHighlightSections(true);
        tabela->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tabela);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        ordmenorcodigo = new QPushButton(tab_2);
        ordmenorcodigo->setObjectName(QString::fromUtf8("ordmenorcodigo"));

        horizontalLayout_11->addWidget(ordmenorcodigo);

        ordpeso = new QPushButton(tab_2);
        ordpeso->setObjectName(QString::fromUtf8("ordpeso"));

        horizontalLayout_11->addWidget(ordpeso);

        ordmaiorvalor = new QPushButton(tab_2);
        ordmaiorvalor->setObjectName(QString::fromUtf8("ordmaiorvalor"));

        horizontalLayout_11->addWidget(ordmaiorvalor);

        limpartab = new QPushButton(tab_2);
        limpartab->setObjectName(QString::fromUtf8("limpartab"));

        horizontalLayout_11->addWidget(limpartab);


        verticalLayout->addLayout(horizontalLayout_11);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        frame = new QFrame(tab_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(90, 60, 591, 381));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 10, 121, 21));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 30, 421, 61));
        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 90, 141, 21));
        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 120, 551, 71));
        label_13 = new QLabel(frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(50, 200, 471, 151));
        label_13->setStyleSheet(QString::fromUtf8("image: url(:/icones/IMAGENS TUTORIAL/logo ifpb 2.png);"));
        label_13->setScaledContents(true);
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1073, 21));
        menuSCOP = new QMenu(menubar);
        menuSCOP->setObjectName(QString::fromUtf8("menuSCOP"));
        menuEditar = new QMenu(menubar);
        menuEditar->setObjectName(QString::fromUtf8("menuEditar"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuSCOP->menuAction());
        menubar->addAction(menuEditar->menuAction());
        menuSCOP->addAction(actionAbrir);
        menuSCOP->addAction(actionSalvar);
        menuSCOP->addSeparator();
        menuSCOP->addAction(actionSair);
        menuEditar->addAction(actionExcluir);
        menuEditar->addAction(actionLimpar_Tabela);
        menuEditar->addAction(actionAtualizar_Tabela);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SCOP - SISTEMA DE CADASTRO DE OBJETOS POSTAIS", nullptr));
        actionAbrir->setText(QApplication::translate("MainWindow", "Abrir", nullptr));
#ifndef QT_NO_SHORTCUT
        actionAbrir->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSalvar->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSair->setText(QApplication::translate("MainWindow", "Sair", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSair->setShortcut(QApplication::translate("MainWindow", "Esc", nullptr));
#endif // QT_NO_SHORTCUT
        actionExcluir->setText(QApplication::translate("MainWindow", "Excluir", nullptr));
#ifndef QT_NO_SHORTCUT
        actionExcluir->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_NO_SHORTCUT
        actionLimpar_Tabela->setText(QApplication::translate("MainWindow", "Limpar Tabela", nullptr));
        actionAtualizar_Tabela->setText(QApplication::translate("MainWindow", "Atualizar Tabela", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Desenvolvido por: N\303\255colas Ribeiro(Eng. El\303\251trica).", nullptr));
        label->setText(QApplication::translate("MainWindow", "Objeto:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Valor do Objeto a ser postado(R$):", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Destino", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Estado Atual do objeto:", nullptr));
        estadoatual->setItemText(0, QApplication::translate("MainWindow", "----SELECIONE-----", nullptr));
        estadoatual->setItemText(1, QApplication::translate("MainWindow", "Em vistoria", nullptr));
        estadoatual->setItemText(2, QApplication::translate("MainWindow", "Pronto para envio", nullptr));
        estadoatual->setItemText(3, QApplication::translate("MainWindow", "Aguardando recebimento", nullptr));
        estadoatual->setItemText(4, QApplication::translate("MainWindow", "Enviado", nullptr));
        estadoatual->setItemText(5, QApplication::translate("MainWindow", "Entregue", nullptr));

        label_4->setText(QApplication::translate("MainWindow", "Data de postagem:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "C\303\263digo de identifica\303\247\303\243o(C.I): ", nullptr));
        labelpeso->setText(QApplication::translate("MainWindow", "Peso do objeto(kg):", nullptr));
        btncadastrar->setText(QApplication::translate("MainWindow", "Cadastrar", nullptr));
        labelimg->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "SCOP - Cadastro de Objetos Para Envio", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "SCOP - Cadastro", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tabela->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Objeto", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tabela->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "C.I", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tabela->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Valor(R$)", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tabela->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Data de Postagem", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tabela->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Estado", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tabela->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "Destino", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tabela->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "Peso", nullptr));
        ordmenorcodigo->setText(QApplication::translate("MainWindow", "Ordenar por Menor Codigo", nullptr));
        ordpeso->setText(QApplication::translate("MainWindow", "Ordenar por Menor Peso", nullptr));
        ordmaiorvalor->setText(QApplication::translate("MainWindow", "Ordenar por Maior Valor", nullptr));
        limpartab->setText(QApplication::translate("MainWindow", "Limpar Tabela", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "SCOP - Visualiza\303\247\303\243o", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; color:#ff0000;\">Sobre o programa:</span></p></body></html>", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; font-weight:600; font-style:italic; color:#232323;\">Programa desenvolvido na inten\303\247\303\243o de ajudar empresas de log\303\255stica </span></p><p><span style=\" font-size:9pt; font-weight:600; font-style:italic; color:#232323;\">que est\303\243o em busca de um software \303\241gil e produtivo. </span></p></body></html>", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:9pt; color:#ff0000;\">Sobre o desenvolvedor:</span></p></body></html>", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"justify\"><span style=\" font-size:9pt; font-weight:600; font-style:italic; color:#232323;\">Aluno do curso Engenharia El\303\251trica, 2\302\272 per\303\255odo, na disciplina de T\303\251cnicas de Programa\303\247\303\243o </span></p><p align=\"justify\"><span style=\" font-size:9pt; font-weight:600; font-style:italic; color:#232323;\">2019.2, programador b\303\241sico nas linguagens C, C++ </span></p><p align=\"justify\"><span style=\" font-size:9pt; font-weight:600; font-style:italic; color:#232323;\">e nas descritivas HTML e CSS</span></p></body></html>", nullptr));
        label_13->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "SCOP - Sobre", nullptr));
        menuSCOP->setTitle(QApplication::translate("MainWindow", "Menu", nullptr));
        menuEditar->setTitle(QApplication::translate("MainWindow", "Editar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
