/****************************************************************************
** Meta object code from reading C++ file 'QTableVisualizer.h'
**
** Created: Tue Jul 24 09:03:44 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QTableVisualizer.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QTableVisualizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDraggingTable[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QDraggingTable[] = {
    "QDraggingTable\0"
};

const QMetaObject QDraggingTable::staticMetaObject = {
    { &Q3Table::staticMetaObject, qt_meta_stringdata_QDraggingTable,
      qt_meta_data_QDraggingTable, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDraggingTable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDraggingTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDraggingTable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDraggingTable))
        return static_cast<void*>(const_cast< QDraggingTable*>(this));
    return Q3Table::qt_metacast(_clname);
}

int QDraggingTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3Table::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QTableVisualizer[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   18,   17,   17, 0x09,
      78,   54,   17,   17, 0x09,
     110,   54,   17,   17, 0x09,
     148,   54,   17,   17, 0x09,
     180,   17,   17,   17, 0x09,
     203,   18,   17,   17, 0x09,
     241,  229,   17,   17, 0x09,
     284,  282,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QTableVisualizer[] = {
    "QTableVisualizer\0\0row,col\0"
    "slotCurrentChanged(int,int)\0"
    "row,col,button,mousePos\0"
    "slotClicked(int,int,int,QPoint)\0"
    "slotDoubleClicked(int,int,int,QPoint)\0"
    "slotPressed(int,int,int,QPoint)\0"
    "slotSelectionChanged()\0slotValueChanged(int,int)\0"
    "row,col,pos\0slotContextMenuRequested(int,int,QPoint)\0"
    "e\0slotDropped(QDropEvent*)\0"
};

const QMetaObject QTableVisualizer::staticMetaObject = {
    { &QVisualizer::staticMetaObject, qt_meta_stringdata_QTableVisualizer,
      qt_meta_data_QTableVisualizer, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QTableVisualizer::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QTableVisualizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QTableVisualizer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QTableVisualizer))
        return static_cast<void*>(const_cast< QTableVisualizer*>(this));
    return QVisualizer::qt_metacast(_clname);
}

int QTableVisualizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVisualizer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotCurrentChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: slotClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QPoint(*)>(_a[4]))); break;
        case 2: slotDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QPoint(*)>(_a[4]))); break;
        case 3: slotPressed((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QPoint(*)>(_a[4]))); break;
        case 4: slotSelectionChanged(); break;
        case 5: slotValueChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: slotContextMenuRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3]))); break;
        case 7: slotDropped((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
