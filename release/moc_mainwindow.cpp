/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../junqi/mainwindow.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[42];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 10), // "piece_move"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 2), // "ps"
QT_MOC_LITERAL(26, 15), // "ClickableLabel*"
QT_MOC_LITERAL(42, 3), // "lbl"
QT_MOC_LITERAL(46, 14), // "piece_move_Opp"
QT_MOC_LITERAL(61, 11), // "updatetimer"
QT_MOC_LITERAL(73, 5), // "start"
QT_MOC_LITERAL(79, 12), // "start_client"
QT_MOC_LITERAL(92, 4), // "seed"
QT_MOC_LITERAL(97, 7), // "forfeit"
QT_MOC_LITERAL(105, 8), // "default_"
QT_MOC_LITERAL(114, 2), // "ds"
QT_MOC_LITERAL(117, 10), // "initServer"
QT_MOC_LITERAL(128, 16), // "acceptConnection"
QT_MOC_LITERAL(145, 11), // "connectHost"
QT_MOC_LITERAL(157, 9), // "recvInput"
QT_MOC_LITERAL(167, 9), // "sendInput"
QT_MOC_LITERAL(177, 3), // "msg"
QT_MOC_LITERAL(181, 11) // "disconnect_"

    },
    "MainWindow\0piece_move\0\0ps\0ClickableLabel*\0"
    "lbl\0piece_move_Opp\0updatetimer\0start\0"
    "start_client\0seed\0forfeit\0default_\0"
    "ds\0initServer\0acceptConnection\0"
    "connectHost\0recvInput\0sendInput\0msg\0"
    "disconnect_"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   92,    2, 0x0a,    0 /* Public */,
       6,    2,   97,    2, 0x0a,    3 /* Public */,
       7,    0,  102,    2, 0x0a,    6 /* Public */,
       8,    0,  103,    2, 0x0a,    7 /* Public */,
       9,    1,  104,    2, 0x0a,    8 /* Public */,
      11,    0,  107,    2, 0x0a,   10 /* Public */,
      12,    1,  108,    2, 0x0a,   11 /* Public */,
      14,    0,  111,    2, 0x0a,   13 /* Public */,
      15,    0,  112,    2, 0x0a,   14 /* Public */,
      16,    0,  113,    2, 0x0a,   15 /* Public */,
      17,    0,  114,    2, 0x0a,   16 /* Public */,
      18,    1,  115,    2, 0x0a,   17 /* Public */,
      20,    0,  118,    2, 0x0a,   19 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->piece_move((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< ClickableLabel*(*)>(_a[2]))); break;
        case 1: _t->piece_move_Opp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< ClickableLabel*(*)>(_a[2]))); break;
        case 2: _t->updatetimer(); break;
        case 3: _t->start(); break;
        case 4: _t->start_client((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->forfeit(); break;
        case 6: _t->default_((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->initServer(); break;
        case 8: _t->acceptConnection(); break;
        case 9: _t->connectHost(); break;
        case 10: _t->recvInput(); break;
        case 11: _t->sendInput((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->disconnect_(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ClickableLabel* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ClickableLabel* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<ClickableLabel *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<ClickableLabel *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
