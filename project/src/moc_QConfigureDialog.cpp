/****************************************************************************
** Meta object code from reading C++ file 'QConfigureDialog.h'
**
** Created: Tue Jul 24 09:03:46 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QConfigureDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QConfigureDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QConfigureDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x09,
      27,   17,   17,   17, 0x09,
      39,   17,   17,   17, 0x09,
      61,   53,   17,   17, 0x09,
     114,   90,   17,   17, 0x09,
     157,   90,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QConfigureDialog[] = {
    "QConfigureDialog\0\0slotOK()\0slotApply()\0"
    "slotDefault()\0row,col\0"
    "slotSettingsChanged(int,int)\0"
    "row,col,button,mousePos\0"
    "slotTableDoubleClicked(int,int,int,QPoint)\0"
    "slotTableClicked(int,int,int,QPoint)\0"
};

const QMetaObject QConfigureDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QConfigureDialog,
      qt_meta_data_QConfigureDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QConfigureDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QConfigureDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QConfigureDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QConfigureDialog))
        return static_cast<void*>(const_cast< QConfigureDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QConfigureDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotOK(); break;
        case 1: slotApply(); break;
        case 2: slotDefault(); break;
        case 3: slotSettingsChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: slotTableDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QPoint(*)>(_a[4]))); break;
        case 5: slotTableClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QPoint(*)>(_a[4]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
