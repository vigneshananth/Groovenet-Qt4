/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created: Tue Jul 24 09:03:43 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x09,
      24,   11,   11,   11, 0x09,
      37,   11,   11,   11, 0x09,
      50,   11,   11,   11, 0x09,
      63,   11,   11,   11, 0x09,
      78,   11,   11,   11, 0x09,
      91,   11,   11,   11, 0x09,
     102,   11,   11,   11, 0x09,
     115,   11,   11,   11, 0x09,
     127,   11,   11,   11, 0x09,
     139,   11,   11,   11, 0x09,
     151,   11,   11,   11, 0x09,
     164,   11,   11,   11, 0x09,
     181,  178,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0OnFileNew()\0OnFileEdit()\0"
    "OnFileOpen()\0OnFileSave()\0OnFileConfig()\0"
    "OnFileExit()\0OnSimRun()\0OnSimPause()\0"
    "OnSimSkip()\0OnSimStop()\0OnNetInit()\0"
    "OnNetClose()\0OnNetServer()\0id\0"
    "OnNetServer(int)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &Q3MainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return Q3MainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Q3MainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: OnFileNew(); break;
        case 1: OnFileEdit(); break;
        case 2: OnFileOpen(); break;
        case 3: OnFileSave(); break;
        case 4: OnFileConfig(); break;
        case 5: OnFileExit(); break;
        case 6: OnSimRun(); break;
        case 7: OnSimPause(); break;
        case 8: OnSimSkip(); break;
        case 9: OnSimStop(); break;
        case 10: OnNetInit(); break;
        case 11: OnNetClose(); break;
        case 12: OnNetServer(); break;
        case 13: OnNetServer((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
