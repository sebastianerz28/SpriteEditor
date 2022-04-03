/****************************************************************************
** Meta object code from reading C++ file 'model.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpriteEditor/model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Model_t {
    const uint offsetsAndSize[36];
    char stringdata0[269];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Model_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Model_t qt_meta_stringdata_Model = {
    {
QT_MOC_LITERAL(0, 5), // "Model"
QT_MOC_LITERAL(6, 13), // "sendNextFrame"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 7), // "QImage&"
QT_MOC_LITERAL(29, 5), // "image"
QT_MOC_LITERAL(35, 17), // "sendPreviousFrame"
QT_MOC_LITERAL(53, 22), // "sendNextAnimationFrame"
QT_MOC_LITERAL(76, 28), // "sendNextCanvasAnimationFrame"
QT_MOC_LITERAL(105, 8), // "addFrame"
QT_MOC_LITERAL(114, 9), // "nextFrame"
QT_MOC_LITERAL(124, 9), // "prevFrame"
QT_MOC_LITERAL(134, 25), // "receiveUpdatedCanvasFrame"
QT_MOC_LITERAL(160, 11), // "deleteFrame"
QT_MOC_LITERAL(172, 18), // "incrementAnimation"
QT_MOC_LITERAL(191, 16), // "setPlayPauseBool"
QT_MOC_LITERAL(208, 16), // "frameRateChanged"
QT_MOC_LITERAL(225, 24), // "incrementCanvasAnimation"
QT_MOC_LITERAL(250, 18) // "setCanvasPlayPause"

    },
    "Model\0sendNextFrame\0\0QImage&\0image\0"
    "sendPreviousFrame\0sendNextAnimationFrame\0"
    "sendNextCanvasAnimationFrame\0addFrame\0"
    "nextFrame\0prevFrame\0receiveUpdatedCanvasFrame\0"
    "deleteFrame\0incrementAnimation\0"
    "setPlayPauseBool\0frameRateChanged\0"
    "incrementCanvasAnimation\0setCanvasPlayPause"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Model[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   98,    2, 0x06,    1 /* Public */,
       5,    1,  101,    2, 0x06,    3 /* Public */,
       6,    1,  104,    2, 0x06,    5 /* Public */,
       7,    1,  107,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,  110,    2, 0x0a,    9 /* Public */,
       9,    0,  111,    2, 0x0a,   10 /* Public */,
      10,    0,  112,    2, 0x0a,   11 /* Public */,
      11,    1,  113,    2, 0x0a,   12 /* Public */,
      12,    0,  116,    2, 0x0a,   14 /* Public */,
      13,    0,  117,    2, 0x0a,   15 /* Public */,
      14,    1,  118,    2, 0x0a,   16 /* Public */,
      15,    1,  121,    2, 0x0a,   18 /* Public */,
      16,    0,  124,    2, 0x0a,   20 /* Public */,
      17,    1,  125,    2, 0x0a,   21 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Model *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendNextFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->sendPreviousFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 2: _t->sendNextAnimationFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 3: _t->sendNextCanvasAnimationFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 4: _t->addFrame(); break;
        case 5: _t->nextFrame(); break;
        case 6: _t->prevFrame(); break;
        case 7: _t->receiveUpdatedCanvasFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 8: _t->deleteFrame(); break;
        case 9: _t->incrementAnimation(); break;
        case 10: _t->setPlayPauseBool((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->frameRateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->incrementCanvasAnimation(); break;
        case 13: _t->setCanvasPlayPause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Model::*)(QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::sendNextFrame)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Model::*)(QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::sendPreviousFrame)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Model::*)(QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::sendNextAnimationFrame)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Model::*)(QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::sendNextCanvasAnimationFrame)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Model::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Model.offsetsAndSize,
    qt_meta_data_Model,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Model_t
, QtPrivate::TypeAndForceComplete<Model, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *Model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Model::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Model.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Model::sendNextFrame(QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Model::sendPreviousFrame(QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Model::sendNextAnimationFrame(QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Model::sendNextCanvasAnimationFrame(QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
