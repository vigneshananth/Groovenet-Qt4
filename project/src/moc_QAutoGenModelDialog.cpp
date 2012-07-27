/****************************************************************************
** Meta object code from reading C++ file 'QAutoGenModelDialog.h'
**
** Created: Tue Jul 24 09:03:54 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QAutoGenModelDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QAutoGenModelDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAutoGenModelDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   21,   20,   20, 0x09,
      65,   21,   20,   20, 0x09,
     103,   20,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QAutoGenModelDialog[] = {
    "QAutoGenModelDialog\0\0row,col\0"
    "slotPropertiesValueChanged(int,int)\0"
    "slotPropertiesCurrentChanged(int,int)\0"
    "accept()\0"
};

const QMetaObject QAutoGenModelDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QAutoGenModelDialog,
      qt_meta_data_QAutoGenModelDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QAutoGenModelDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QAutoGenModelDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QAutoGenModelDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAutoGenModelDialog))
        return static_cast<void*>(const_cast< QAutoGenModelDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QAutoGenModelDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotPropertiesValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: slotPropertiesCurrentChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: accept(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
