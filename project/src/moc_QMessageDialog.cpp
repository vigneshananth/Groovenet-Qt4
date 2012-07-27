/****************************************************************************
** Meta object code from reading C++ file 'QMessageDialog.h'
**
** Created: Tue Jul 24 09:03:55 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QMessageDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QMessageDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QMessageDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   16,   15,   15, 0x09,
      49,   43,   15,   15, 0x09,
      84,   15,   15,   15, 0x09,
     111,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QMessageDialog[] = {
    "QMessageDialog\0\0id\0slotMsgTypeChanged(int)\0"
    "index\0slotBoundingRegionTypeChanged(int)\0"
    "slotBoundingRegionConfig()\0accept()\0"
};

const QMetaObject QMessageDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QMessageDialog,
      qt_meta_data_QMessageDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QMessageDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QMessageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QMessageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QMessageDialog))
        return static_cast<void*>(const_cast< QMessageDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QMessageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotMsgTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: slotBoundingRegionTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: slotBoundingRegionConfig(); break;
        case 3: accept(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
