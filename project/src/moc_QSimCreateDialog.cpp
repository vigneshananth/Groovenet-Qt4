/****************************************************************************
** Meta object code from reading C++ file 'QSimCreateDialog.h'
**
** Created: Tue Jul 24 09:03:51 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QSimCreateDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QSimCreateDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSimCreateDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x09,
      57,   17,   17,   17, 0x09,
      89,   86,   17,   17, 0x09,
     110,   17,   17,   17, 0x09,
     131,   17,   17,   17, 0x09,
     163,  155,   17,   17, 0x09,
     203,  195,   17,   17, 0x09,
     246,  195,   17,   17, 0x09,
     291,   17,   17,   17, 0x09,
     313,   17,   17,   17, 0x09,
     337,   18,   17,   17, 0x09,
     381,   17,   17,   17, 0x09,
     421,   86,   17,   17, 0x09,
     453,   17,   17,   17, 0x09,
     485,   17,   17,   17, 0x09,
     520,  155,   17,   17, 0x09,
     563,  195,   17,   17, 0x09,
     617,  195,   17,   17, 0x09,
     673,   17,   17,   17, 0x09,
     706,   17,   17,   17, 0x09,
     741,   18,   17,   17, 0x09,
     772,   17,   17,   17, 0x09,
     799,   86,   17,   17, 0x09,
     818,   17,   17,   17, 0x09,
     837,   17,   17,   17, 0x09,
     859,  155,   17,   17, 0x09,
     889,  195,   17,   17, 0x09,
     930,  195,   17,   17, 0x09,
     973,   17,   17,   17, 0x09,
     995,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QSimCreateDialog[] = {
    "QSimCreateDialog\0\0index\0"
    "slotVehiclesListHighlighted(int)\0"
    "slotVehiclesListSelChanged()\0id\0"
    "slotVehiclesAdd(int)\0slotVehiclesRemove()\0"
    "slotVehiclesDuplicate()\0strName\0"
    "slotVehicleNameChanged(QString)\0row,col\0"
    "slotVehiclePropertiesValueChanged(int,int)\0"
    "slotVehiclePropertiesCurrentChanged(int,int)\0"
    "slotVehiclesAutoGen()\0slotVehiclesRemoveAll()\0"
    "slotInfrastructureNodesListHighlighted(int)\0"
    "slotInfrastructureNodesListSelChanged()\0"
    "slotInfrastructureNodesAdd(int)\0"
    "slotInfrastructureNodesRemove()\0"
    "slotInfrastructureNodesDuplicate()\0"
    "slotInfrastructureNodeNameChanged(QString)\0"
    "slotInfrastructureNodePropertiesValueChanged(int,int)\0"
    "slotInfrastructureNodePropertiesCurrentChanged(int,int)\0"
    "slotInfrastructureNodesAutoGen()\0"
    "slotInfrastructureNodesRemoveAll()\0"
    "slotModelsListHighlighted(int)\0"
    "slotModelsListSelChanged()\0"
    "slotModelsAdd(int)\0slotModelsRemove()\0"
    "slotModelsDuplicate()\0"
    "slotModelNameChanged(QString)\0"
    "slotModelPropertiesValueChanged(int,int)\0"
    "slotModelPropertiesCurrentChanged(int,int)\0"
    "slotModelsRemoveAll()\0slotOK()\0"
};

const QMetaObject QSimCreateDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QSimCreateDialog,
      qt_meta_data_QSimCreateDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSimCreateDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSimCreateDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSimCreateDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSimCreateDialog))
        return static_cast<void*>(const_cast< QSimCreateDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QSimCreateDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotVehiclesListHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: slotVehiclesListSelChanged(); break;
        case 2: slotVehiclesAdd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: slotVehiclesRemove(); break;
        case 4: slotVehiclesDuplicate(); break;
        case 5: slotVehicleNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: slotVehiclePropertiesValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: slotVehiclePropertiesCurrentChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: slotVehiclesAutoGen(); break;
        case 9: slotVehiclesRemoveAll(); break;
        case 10: slotInfrastructureNodesListHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: slotInfrastructureNodesListSelChanged(); break;
        case 12: slotInfrastructureNodesAdd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: slotInfrastructureNodesRemove(); break;
        case 14: slotInfrastructureNodesDuplicate(); break;
        case 15: slotInfrastructureNodeNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: slotInfrastructureNodePropertiesValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: slotInfrastructureNodePropertiesCurrentChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: slotInfrastructureNodesAutoGen(); break;
        case 19: slotInfrastructureNodesRemoveAll(); break;
        case 20: slotModelsListHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: slotModelsListSelChanged(); break;
        case 22: slotModelsAdd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: slotModelsRemove(); break;
        case 24: slotModelsDuplicate(); break;
        case 25: slotModelNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: slotModelPropertiesValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: slotModelPropertiesCurrentChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 28: slotModelsRemoveAll(); break;
        case 29: slotOK(); break;
        default: ;
        }
        _id -= 30;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
