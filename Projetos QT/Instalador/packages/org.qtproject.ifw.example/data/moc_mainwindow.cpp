/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../codigos/Projetos QT/SCOP/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[370];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 15), // "inserirNaTabela"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "Cadastro"
QT_MOC_LITERAL(4, 37, 1), // "a"
QT_MOC_LITERAL(5, 39, 5), // "linha"
QT_MOC_LITERAL(6, 45, 23), // "on_btncadastrar_clicked"
QT_MOC_LITERAL(7, 69, 25), // "on_ordmenorcodigo_clicked"
QT_MOC_LITERAL(8, 95, 24), // "on_ordmaiorvalor_clicked"
QT_MOC_LITERAL(9, 120, 18), // "on_ordpeso_clicked"
QT_MOC_LITERAL(10, 139, 24), // "on_actionAbrir_triggered"
QT_MOC_LITERAL(11, 164, 25), // "on_actionSalvar_triggered"
QT_MOC_LITERAL(12, 190, 23), // "on_actionSair_triggered"
QT_MOC_LITERAL(13, 214, 27), // "on_tabela_cellDoubleClicked"
QT_MOC_LITERAL(14, 242, 3), // "row"
QT_MOC_LITERAL(15, 246, 6), // "column"
QT_MOC_LITERAL(16, 253, 26), // "on_actionExcluir_triggered"
QT_MOC_LITERAL(17, 280, 32), // "on_actionLimpar_Tabela_triggered"
QT_MOC_LITERAL(18, 313, 20), // "on_limpartab_clicked"
QT_MOC_LITERAL(19, 334, 35) // "on_actionAtualizar_Tabela_tri..."

    },
    "MainWindow\0inserirNaTabela\0\0Cadastro\0"
    "a\0linha\0on_btncadastrar_clicked\0"
    "on_ordmenorcodigo_clicked\0"
    "on_ordmaiorvalor_clicked\0on_ordpeso_clicked\0"
    "on_actionAbrir_triggered\0"
    "on_actionSalvar_triggered\0"
    "on_actionSair_triggered\0"
    "on_tabela_cellDoubleClicked\0row\0column\0"
    "on_actionExcluir_triggered\0"
    "on_actionLimpar_Tabela_triggered\0"
    "on_limpartab_clicked\0"
    "on_actionAtualizar_Tabela_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x08 /* Private */,
       6,    0,   84,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    2,   91,    2, 0x08 /* Private */,
      16,    0,   96,    2, 0x08 /* Private */,
      17,    0,   97,    2, 0x08 /* Private */,
      18,    0,   98,    2, 0x08 /* Private */,
      19,    0,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->inserirNaTabela((*reinterpret_cast< Cadastro(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->on_btncadastrar_clicked(); break;
        case 2: _t->on_ordmenorcodigo_clicked(); break;
        case 3: _t->on_ordmaiorvalor_clicked(); break;
        case 4: _t->on_ordpeso_clicked(); break;
        case 5: _t->on_actionAbrir_triggered(); break;
        case 6: _t->on_actionSalvar_triggered(); break;
        case 7: _t->on_actionSair_triggered(); break;
        case 8: _t->on_tabela_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->on_actionExcluir_triggered(); break;
        case 10: _t->on_actionLimpar_Tabela_triggered(); break;
        case 11: _t->on_limpartab_clicked(); break;
        case 12: _t->on_actionAtualizar_Tabela_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
