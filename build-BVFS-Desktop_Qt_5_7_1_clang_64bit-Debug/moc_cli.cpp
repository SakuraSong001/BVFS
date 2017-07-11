/****************************************************************************
** Meta object code from reading C++ file 'cli.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BVFS/cli.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cli.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CLI_t {
    QByteArrayData data[21];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CLI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CLI_t qt_meta_stringdata_CLI = {
    {
QT_MOC_LITERAL(0, 0, 3), // "CLI"
QT_MOC_LITERAL(1, 4, 13), // "sendLoginInfo"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 9), // "sendOrder"
QT_MOC_LITERAL(4, 29, 14), // "sendVimContent"
QT_MOC_LITERAL(5, 44, 17), // "sendRefreshAction"
QT_MOC_LITERAL(6, 62, 18), // "sendUserAddContent"
QT_MOC_LITERAL(7, 81, 11), // "receiveShow"
QT_MOC_LITERAL(8, 93, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(9, 119, 18), // "receiveLoginStatus"
QT_MOC_LITERAL(10, 138, 12), // "receiveRoute"
QT_MOC_LITERAL(11, 151, 16), // "receiveCatReturn"
QT_MOC_LITERAL(12, 168, 15), // "receiveLsReturn"
QT_MOC_LITERAL(13, 184, 15), // "receiveLlReturn"
QT_MOC_LITERAL(14, 200, 16), // "receivePwdReturn"
QT_MOC_LITERAL(15, 217, 16), // "receiveVimAction"
QT_MOC_LITERAL(16, 234, 17), // "receiveHelpReturn"
QT_MOC_LITERAL(17, 252, 16), // "receiveClsAction"
QT_MOC_LITERAL(18, 269, 19), // "receiveLogoutAction"
QT_MOC_LITERAL(19, 289, 20), // "receiveUserAddAction"
QT_MOC_LITERAL(20, 310, 20) // "receiveUserAddStatus"

    },
    "CLI\0sendLoginInfo\0\0sendOrder\0"
    "sendVimContent\0sendRefreshAction\0"
    "sendUserAddContent\0receiveShow\0"
    "on_lineEdit_returnPressed\0receiveLoginStatus\0"
    "receiveRoute\0receiveCatReturn\0"
    "receiveLsReturn\0receiveLlReturn\0"
    "receivePwdReturn\0receiveVimAction\0"
    "receiveHelpReturn\0receiveClsAction\0"
    "receiveLogoutAction\0receiveUserAddAction\0"
    "receiveUserAddStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CLI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  109,    2, 0x06 /* Public */,
       3,    1,  114,    2, 0x06 /* Public */,
       4,    2,  117,    2, 0x06 /* Public */,
       5,    0,  122,    2, 0x06 /* Public */,
       6,    2,  123,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  128,    2, 0x08 /* Private */,
       8,    0,  129,    2, 0x08 /* Private */,
       9,    1,  130,    2, 0x08 /* Private */,
      10,    1,  133,    2, 0x08 /* Private */,
      11,    1,  136,    2, 0x08 /* Private */,
      12,    1,  139,    2, 0x08 /* Private */,
      13,    1,  142,    2, 0x08 /* Private */,
      14,    1,  145,    2, 0x08 /* Private */,
      15,    1,  148,    2, 0x08 /* Private */,
      16,    1,  151,    2, 0x08 /* Private */,
      17,    0,  154,    2, 0x08 /* Private */,
      18,    0,  155,    2, 0x08 /* Private */,
      19,    0,  156,    2, 0x08 /* Private */,
      20,    1,  157,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void CLI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CLI *_t = static_cast<CLI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendLoginInfo((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->sendOrder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendVimContent((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->sendRefreshAction(); break;
        case 4: _t->sendUserAddContent((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->receiveShow(); break;
        case 6: _t->on_lineEdit_returnPressed(); break;
        case 7: _t->receiveLoginStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->receiveRoute((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->receiveCatReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->receiveLsReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->receiveLlReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->receivePwdReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->receiveVimAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->receiveHelpReturn((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->receiveClsAction(); break;
        case 16: _t->receiveLogoutAction(); break;
        case 17: _t->receiveUserAddAction(); break;
        case 18: _t->receiveUserAddStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CLI::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CLI::sendLoginInfo)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CLI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CLI::sendOrder)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CLI::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CLI::sendVimContent)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CLI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CLI::sendRefreshAction)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CLI::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CLI::sendUserAddContent)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject CLI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CLI.data,
      qt_meta_data_CLI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CLI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CLI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CLI.stringdata0))
        return static_cast<void*>(const_cast< CLI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CLI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void CLI::sendLoginInfo(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CLI::sendOrder(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CLI::sendVimContent(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CLI::sendRefreshAction()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void CLI::sendUserAddContent(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
