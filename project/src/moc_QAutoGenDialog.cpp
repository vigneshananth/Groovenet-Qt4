/****************************************************************************
** Meta object code from reading C++ file 'QAutoGenDialog.h'
**
** Created: Tue Jul 24 09:03:53 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QAutoGenDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QAutoGenDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAutoGenDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x09,
      52,   16,   15,   15, 0x09,
      80,   16,   15,   15, 0x09,
     109,   15,   15,   15, 0x09,
     143,  135,   15,   15, 0x09,
     179,  135,   15,   15, 0x09,
     217,   15,   15,   15, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QAutoGenDialog[] = {
    "QAutoGenDialog\0\0index\0"
    "slotVehicleTypeActivated(int)\0"
    "slotParameterActivated(int)\0"
    "slotRegionTypeActivated(int)\0"
    "slotMapSelectionChanged()\0row,col\0"
    "slotPropertiesValueChanged(int,int)\0"
    "slotPropertiesCurrentChanged(int,int)\0"
    "accept()\0"
};

const QMetaObject QAutoGenDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QAutoGenDialog,
      qt_meta_data_QAutoGenDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QAutoGenDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QAutoGenDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QAutoGenDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAutoGenDialog))
        return static_cast<void*>(const_cast< QAutoGenDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QAutoGenDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotVehicleTypeActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: slotParameterActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: slotRegionTypeActivated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: slotMapSelectionChanged(); break;
        case 4: slotPropertiesValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: slotPropertiesCurrentChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: accept(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
