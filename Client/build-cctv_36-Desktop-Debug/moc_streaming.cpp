/****************************************************************************
** Meta object code from reading C++ file 'streaming.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../cctv_36/inc/controller/streaming.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streaming.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Streaming_t {
    QByteArrayData data[19];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Streaming_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Streaming_t qt_meta_stringdata_Streaming = {
    {
QT_MOC_LITERAL(0, 0, 9), // "Streaming"
QT_MOC_LITERAL(1, 10, 14), // "updateDateTime"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "startFFmpeg"
QT_MOC_LITERAL(4, 38, 10), // "stopFFmpeg"
QT_MOC_LITERAL(5, 49, 12), // "captureFrame"
QT_MOC_LITERAL(6, 62, 13), // "processOutput"
QT_MOC_LITERAL(7, 76, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(8, 99, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(9, 121, 13), // "carEntryState"
QT_MOC_LITERAL(10, 135, 5), // "state"
QT_MOC_LITERAL(11, 141, 15), // "updateGateState"
QT_MOC_LITERAL(12, 157, 14), // "setButtonStyle"
QT_MOC_LITERAL(13, 172, 12), // "QPushButton*"
QT_MOC_LITERAL(14, 185, 6), // "button"
QT_MOC_LITERAL(15, 192, 8), // "isActive"
QT_MOC_LITERAL(16, 201, 20), // "on_plateDataReceived"
QT_MOC_LITERAL(17, 222, 6), // "buffer"
QT_MOC_LITERAL(18, 229, 16) // "update_InfoLabel"

    },
    "Streaming\0updateDateTime\0\0startFFmpeg\0"
    "stopFFmpeg\0captureFrame\0processOutput\0"
    "on_startButton_clicked\0on_stopButton_clicked\0"
    "carEntryState\0state\0updateGateState\0"
    "setButtonStyle\0QPushButton*\0button\0"
    "isActive\0on_plateDataReceived\0buffer\0"
    "update_InfoLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Streaming[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    1,   81,    2, 0x08 /* Private */,
      11,    1,   84,    2, 0x08 /* Private */,
      12,    2,   87,    2, 0x08 /* Private */,
      16,    1,   92,    2, 0x08 /* Private */,
      18,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, 0x80000000 | 13, QMetaType::Bool,   14,   15,
    QMetaType::Void, QMetaType::QByteArray,   17,
    QMetaType::Void,

       0        // eod
};

void Streaming::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Streaming *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateDateTime(); break;
        case 1: _t->startFFmpeg(); break;
        case 2: _t->stopFFmpeg(); break;
        case 3: _t->captureFrame(); break;
        case 4: _t->processOutput(); break;
        case 5: _t->on_startButton_clicked(); break;
        case 6: _t->on_stopButton_clicked(); break;
        case 7: _t->carEntryState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->updateGateState((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setButtonStyle((*reinterpret_cast< QPushButton*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 10: _t->on_plateDataReceived((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 11: _t->update_InfoLabel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPushButton* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Streaming::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Streaming.data,
    qt_meta_data_Streaming,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Streaming::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Streaming::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Streaming.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Streaming::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
