/****************************************************************************
** Meta object code from reading C++ file 'frminputnew.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SmartCabinet/inputnew/frminputnew.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'frminputnew.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_frmInputNew_t {
    QByteArrayData data[16];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_frmInputNew_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_frmInputNew_t qt_meta_stringdata_frmInputNew = {
    {
QT_MOC_LITERAL(0, 0, 11), // "frmInputNew"
QT_MOC_LITERAL(1, 12, 12), // "focusChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "QWidget*"
QT_MOC_LITERAL(4, 35, 9), // "oldWidget"
QT_MOC_LITERAL(5, 45, 9), // "nowWidget"
QT_MOC_LITERAL(6, 55, 11), // "changeStyle"
QT_MOC_LITERAL(7, 67, 19), // "mainBackgroundColor"
QT_MOC_LITERAL(8, 87, 13), // "mainTextColor"
QT_MOC_LITERAL(9, 101, 18), // "btnBackgroundColor"
QT_MOC_LITERAL(10, 120, 12), // "btnHoveColor"
QT_MOC_LITERAL(11, 133, 16), // "btnHoveTextColor"
QT_MOC_LITERAL(12, 150, 12), // "labHoveColor"
QT_MOC_LITERAL(13, 163, 16), // "labHoveTextColor"
QT_MOC_LITERAL(14, 180, 10), // "btnClicked"
QT_MOC_LITERAL(15, 191, 9) // "reClicked"

    },
    "frmInputNew\0focusChanged\0\0QWidget*\0"
    "oldWidget\0nowWidget\0changeStyle\0"
    "mainBackgroundColor\0mainTextColor\0"
    "btnBackgroundColor\0btnHoveColor\0"
    "btnHoveTextColor\0labHoveColor\0"
    "labHoveTextColor\0btnClicked\0reClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_frmInputNew[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x08 /* Private */,
       6,    7,   39,    2, 0x08 /* Private */,
      14,    0,   54,    2, 0x08 /* Private */,
      15,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,    9,   10,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void frmInputNew::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        frmInputNew *_t = static_cast<frmInputNew *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->focusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        case 1: _t->changeStyle((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 2: _t->btnClicked(); break;
        case 3: _t->reClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject frmInputNew::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_frmInputNew.data,
      qt_meta_data_frmInputNew,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *frmInputNew::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *frmInputNew::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_frmInputNew.stringdata0))
        return static_cast<void*>(const_cast< frmInputNew*>(this));
    return QWidget::qt_metacast(_clname);
}

int frmInputNew::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
