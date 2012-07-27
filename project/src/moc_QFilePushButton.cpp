/****************************************************************************
** Meta object code from reading C++ file 'QFilePushButton.h'
**
** Created: Tue Jul 24 09:03:48 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QFilePushButton.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QFilePushButton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QFilePushButton[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      31,   16,   16,   16, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_QFilePushButton[] = {
    "QFilePushButton\0\0fileChanged()\0"
    "slotChangeFile()\0"
};

const QMetaObject QFilePushButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_QFilePushButton,
      qt_meta_data_QFilePushButton, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QFilePushButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QFilePushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QFilePushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QFilePushButton))
        return static_cast<void*>(const_cast< QFilePushButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int QFilePushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: fileChanged(); break;
        case 1: slotChangeFile(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QFilePushButton::fileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
