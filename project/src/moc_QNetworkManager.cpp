/****************************************************************************
** Meta object code from reading C++ file 'QNetworkManager.h'
**
** Created: Tue Jul 24 09:03:45 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QNetworkManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QNetworkManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QNetworkManager[] = {

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
      17,   16,   16,   16, 0x09,
      35,   16,   16,   16, 0x09,
      54,   16,   16,   16, 0x09,
      77,   74,   16,   16, 0x09,
     108,  100,   16,   16, 0x09,
     139,   74,   16,   16, 0x09,
     162,   16,   16,   16, 0x09,
     191,  185,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QNetworkManager[] = {
    "QNetworkManager\0\0slotNetworkInit()\0"
    "slotNetworkClose()\0slotNetworkServer()\0"
    "id\0slotNetworkServer(int)\0strText\0"
    "slotClientTextChanged(QString)\0"
    "slotClientConnect(int)\0slotClientDisconnect()\0"
    "index\0slotClientListHighlighted(int)\0"
};

const QMetaObject QNetworkManager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QNetworkManager,
      qt_meta_data_QNetworkManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QNetworkManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QNetworkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QNetworkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkManager))
        return static_cast<void*>(const_cast< QNetworkManager*>(this));
    return QWidget::qt_metacast(_clname);
}

int QNetworkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slotNetworkInit(); break;
        case 1: slotNetworkClose(); break;
        case 2: slotNetworkServer(); break;
        case 3: slotNetworkServer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: slotClientTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: slotClientConnect((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: slotClientDisconnect(); break;
        case 7: slotClientListHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
