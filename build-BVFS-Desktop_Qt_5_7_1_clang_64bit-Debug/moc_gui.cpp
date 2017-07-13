/****************************************************************************
** Meta object code from reading C++ file 'gui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BVFS/gui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GUI_t {
    QByteArrayData data[19];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GUI_t qt_meta_stringdata_GUI = {
    {
QT_MOC_LITERAL(0, 0, 3), // "GUI"
QT_MOC_LITERAL(1, 4, 17), // "sendEnterFileName"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "sendReturnAction"
QT_MOC_LITERAL(4, 40, 18), // "sendFileEditAction"
QT_MOC_LITERAL(5, 59, 22), // "sendNewDirectoryAction"
QT_MOC_LITERAL(6, 82, 17), // "sendNewFileAction"
QT_MOC_LITERAL(7, 100, 11), // "receiveShow"
QT_MOC_LITERAL(8, 112, 12), // "receiveRoute"
QT_MOC_LITERAL(9, 125, 15), // "receiveFileName"
QT_MOC_LITERAL(10, 141, 16), // "receiveEnterFile"
QT_MOC_LITERAL(11, 158, 16), // "receiveFrontName"
QT_MOC_LITERAL(12, 175, 15), // "on_back_clicked"
QT_MOC_LITERAL(13, 191, 12), // "newDirectory"
QT_MOC_LITERAL(14, 204, 7), // "newFile"
QT_MOC_LITERAL(15, 212, 9), // "ADDChange"
QT_MOC_LITERAL(16, 222, 9), // "XMLChange"
QT_MOC_LITERAL(17, 232, 16), // "on_file2_clicked"
QT_MOC_LITERAL(18, 249, 18) // "on_forward_clicked"

    },
    "GUI\0sendEnterFileName\0\0sendReturnAction\0"
    "sendFileEditAction\0sendNewDirectoryAction\0"
    "sendNewFileAction\0receiveShow\0"
    "receiveRoute\0receiveFileName\0"
    "receiveEnterFile\0receiveFrontName\0"
    "on_back_clicked\0newDirectory\0newFile\0"
    "ADDChange\0XMLChange\0on_file2_clicked\0"
    "on_forward_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       3,    0,  102,    2, 0x06 /* Public */,
       4,    1,  103,    2, 0x06 /* Public */,
       5,    1,  106,    2, 0x06 /* Public */,
       6,    1,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,  112,    2, 0x08 /* Private */,
       8,    1,  113,    2, 0x08 /* Private */,
       9,    1,  116,    2, 0x08 /* Private */,
      10,    1,  119,    2, 0x08 /* Private */,
      11,    1,  122,    2, 0x08 /* Private */,
      12,    0,  125,    2, 0x08 /* Private */,
      13,    0,  126,    2, 0x08 /* Private */,
      14,    0,  127,    2, 0x08 /* Private */,
      15,    0,  128,    2, 0x08 /* Private */,
      16,    0,  129,    2, 0x08 /* Private */,
      17,    0,  130,    2, 0x08 /* Private */,
      18,    0,  131,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GUI *_t = static_cast<GUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendEnterFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendReturnAction(); break;
        case 2: _t->sendFileEditAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->sendNewDirectoryAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->sendNewFileAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->receiveShow(); break;
        case 6: _t->receiveRoute((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->receiveFileName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->receiveEnterFile((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->receiveFrontName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->on_back_clicked(); break;
        case 11: _t->newDirectory(); break;
        case 12: _t->newFile(); break;
        case 13: _t->ADDChange(); break;
        case 14: _t->XMLChange(); break;
        case 15: _t->on_file2_clicked(); break;
        case 16: _t->on_forward_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GUI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GUI::sendEnterFileName)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (GUI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GUI::sendReturnAction)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (GUI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GUI::sendFileEditAction)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (GUI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GUI::sendNewDirectoryAction)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (GUI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GUI::sendNewFileAction)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject GUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GUI.data,
      qt_meta_data_GUI,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GUI::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GUI.stringdata0))
        return static_cast<void*>(const_cast< GUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void GUI::sendEnterFileName(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GUI::sendReturnAction()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void GUI::sendFileEditAction(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GUI::sendNewDirectoryAction(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GUI::sendNewFileAction(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
