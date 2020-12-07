/****************************************************************************
** Meta object code from reading C++ file 'specificbutton.h'
**
** Created: Wed Oct 21 20:52:30 2020
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "specificbutton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'specificbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpecificButton[] = {

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
      25,   15,   16,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SpecificButton[] = {
    "SpecificButton\0\0QString*\0name_clicked()\0"
    "is_clicked()\0"
};

void SpecificButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SpecificButton *_t = static_cast<SpecificButton *>(_o);
        switch (_id) {
        case 0: { QString* _r = _t->name_clicked();
            if (_a[0]) *reinterpret_cast< QString**>(_a[0]) = _r; }  break;
        case 1: _t->is_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SpecificButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SpecificButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_SpecificButton,
      qt_meta_data_SpecificButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpecificButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpecificButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpecificButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpecificButton))
        return static_cast<void*>(const_cast< SpecificButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int SpecificButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QString * SpecificButton::name_clicked()
{
    QString* _t0;
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_END_MOC_NAMESPACE
