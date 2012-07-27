/****************************************************************************
** Meta object code from reading C++ file 'QSimRunDialog.h'
**
** Created: Tue Jul 24 09:03:50 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QSimRunDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QSimRunDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QSimRunDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   15,   14,   14, 0x09,
      48,   42,   14,   14, 0x09,
      74,   71,   14,   14, 0x09,
     108,  100,   14,   14, 0x09,
     137,   15,   14,   14, 0x09,
     161,  100,   14,   14, 0x09,
     197,  191,   14,   14, 0x09,
     225,   14,   14,   14, 0x09,
     242,   14,   14,   14, 0x09,
     260,   14,   14,   14, 0x09,
     280,   71,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QSimRunDialog[] = {
    "QSimRunDialog\0\0id\0slotSimulationType(int)\0"
    "value\0slotTrialsChanged(int)\0on\0"
    "slotDurationToggled(bool)\0strText\0"
    "slotDurationChanged(QString)\0"
    "slotSimulationTime(int)\0"
    "slotIncrementChanged(QString)\0index\0"
    "slotMessageHighlighted(int)\0"
    "slotAddMessage()\0slotEditMessage()\0"
    "slotRemoveMessage()\0slotProfileToggled(bool)\0"
};

const QMetaObject QSimRunDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QSimRunDialog,
      qt_meta_data_QSimRunDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QSimRunDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QSimRunDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QSimRunDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QSimRunDialog))
        return static_cast<void*>(const_cast< QSimRunDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QSimRunDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotSimulationType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: slotTrialsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: slotDurationToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: slotDurationChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: slotSimulationTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: slotIncrementChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: slotMessageHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: slotAddMessage(); break;
        case 8: slotEditMessage(); break;
        case 9: slotRemoveMessage(); break;
        case 10: slotProfileToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
