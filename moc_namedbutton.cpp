/****************************************************************************
** Meta object code from reading C++ file 'namedbutton.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "namedbutton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'namedbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NamedButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_NamedButton[] = {
    "NamedButton\0\0MyClicked(QString)\0"
    "onMyClicked()\0"
};

void NamedButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NamedButton *_t = static_cast<NamedButton *>(_o);
        switch (_id) {
        case 0: _t->MyClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->onMyClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData NamedButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NamedButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_NamedButton,
      qt_meta_data_NamedButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NamedButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NamedButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NamedButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NamedButton))
        return static_cast<void*>(const_cast< NamedButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int NamedButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void NamedButton::MyClicked(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
