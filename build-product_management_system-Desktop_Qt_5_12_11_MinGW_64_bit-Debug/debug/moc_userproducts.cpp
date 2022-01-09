/****************************************************************************
** Meta object code from reading C++ file 'userproducts.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../product_management_system/userproducts.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userproducts.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserProducts_t {
    QByteArrayData data[8];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserProducts_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserProducts_t qt_meta_stringdata_UserProducts = {
    {
QT_MOC_LITERAL(0, 0, 12), // "UserProducts"
QT_MOC_LITERAL(1, 13, 23), // "on_LoadTableBtn_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 33), // "on_product_update_table_activ..."
QT_MOC_LITERAL(4, 72, 11), // "QModelIndex"
QT_MOC_LITERAL(5, 84, 5), // "index"
QT_MOC_LITERAL(6, 90, 20), // "on_updateBtn_clicked"
QT_MOC_LITERAL(7, 111, 20) // "on_deleteBtn_clicked"

    },
    "UserProducts\0on_LoadTableBtn_clicked\0"
    "\0on_product_update_table_activated\0"
    "QModelIndex\0index\0on_updateBtn_clicked\0"
    "on_deleteBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserProducts[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       6,    0,   38,    2, 0x08 /* Private */,
       7,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UserProducts::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserProducts *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_LoadTableBtn_clicked(); break;
        case 1: _t->on_product_update_table_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->on_updateBtn_clicked(); break;
        case 3: _t->on_deleteBtn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserProducts::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_UserProducts.data,
    qt_meta_data_UserProducts,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserProducts::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserProducts::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserProducts.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int UserProducts::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
