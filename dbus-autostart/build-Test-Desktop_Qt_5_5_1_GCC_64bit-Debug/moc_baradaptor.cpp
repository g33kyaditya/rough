/****************************************************************************
** Meta object code from reading C++ file 'baradaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Test/baradaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'baradaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BarAdaptor_t {
    QByteArrayData data[8];
    char stringdata0[347];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BarAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BarAdaptor_t qt_meta_stringdata_BarAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BarAdaptor"
QT_MOC_LITERAL(1, 11, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 27, 15), // "org.kde.foo.bar"
QT_MOC_LITERAL(3, 43, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 63, 268), // "  <interface name=\"org.kde.f..."
QT_MOC_LITERAL(5, 311, 6), // "update"
QT_MOC_LITERAL(6, 318, 0), // ""
QT_MOC_LITERAL(7, 319, 6) // "getMap"

    },
    "BarAdaptor\0D-Bus Interface\0org.kde.foo.bar\0"
    "D-Bus Introspection\0"
    "  <interface name=\"org.kde.foo.bar\">\n    <signal name=\"update\"/>\n"
    "    <method name=\"getMap\">\n      <arg direction=\"out\" type=\"a{sv"
    "}\"/>\n      <annotation value=\"QVariantMap\" name=\"org.qtproject.Qt"
    "DBus.QtTypeName.Out0\"/>\n    </method>\n  </interface>\n\0"
    "update\0\0getMap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BarAdaptor[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       2,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    0,   28,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   29,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::QVariantMap,

       0        // eod
};

void BarAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BarAdaptor *_t = static_cast<BarAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: { QVariantMap _r = _t->getMap();
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BarAdaptor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BarAdaptor::update)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject BarAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_BarAdaptor.data,
      qt_meta_data_BarAdaptor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BarAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BarAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BarAdaptor.stringdata0))
        return static_cast<void*>(const_cast< BarAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int BarAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BarAdaptor::update()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
