/****************************************************************************
** Meta object code from reading C++ file 'model.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpriteEditor/model.h"
#include <QtGui/qtextcursor.h>
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
    const uint offsetsAndSize[52];
    char stringdata0[399];
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
QT_MOC_LITERAL(105, 23), // "updateCurrentFrameLabel"
QT_MOC_LITERAL(129, 14), // "pauseAnimation"
QT_MOC_LITERAL(144, 12), // "enableDelete"
QT_MOC_LITERAL(157, 14), // "startAnimation"
QT_MOC_LITERAL(172, 7), // "canDraw"
QT_MOC_LITERAL(180, 8), // "addFrame"
QT_MOC_LITERAL(189, 9), // "nextFrame"
QT_MOC_LITERAL(199, 9), // "prevFrame"
QT_MOC_LITERAL(209, 25), // "receiveUpdatedCanvasFrame"
QT_MOC_LITERAL(235, 11), // "deleteFrame"
QT_MOC_LITERAL(247, 18), // "incrementAnimation"
QT_MOC_LITERAL(266, 16), // "setPlayPauseBool"
QT_MOC_LITERAL(283, 16), // "frameRateChanged"
QT_MOC_LITERAL(300, 24), // "incrementCanvasAnimation"
QT_MOC_LITERAL(325, 18), // "setCanvasPlayPause"
QT_MOC_LITERAL(344, 18), // "deleteFrameRunning"
QT_MOC_LITERAL(363, 25), // "startAnimationAfterDelete"
QT_MOC_LITERAL(389, 9) // "copyFrame"

    },
    "Model\0sendNextFrame\0\0QImage&\0image\0"
    "sendPreviousFrame\0sendNextAnimationFrame\0"
    "sendNextCanvasAnimationFrame\0"
    "updateCurrentFrameLabel\0pauseAnimation\0"
    "enableDelete\0startAnimation\0canDraw\0"
    "addFrame\0nextFrame\0prevFrame\0"
    "receiveUpdatedCanvasFrame\0deleteFrame\0"
    "incrementAnimation\0setPlayPauseBool\0"
    "frameRateChanged\0incrementCanvasAnimation\0"
    "setCanvasPlayPause\0deleteFrameRunning\0"
    "startAnimationAfterDelete\0copyFrame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Model[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  146,    2, 0x06,    1 /* Public */,
       5,    1,  149,    2, 0x06,    3 /* Public */,
       6,    1,  152,    2, 0x06,    5 /* Public */,
       7,    1,  155,    2, 0x06,    7 /* Public */,
       8,    2,  158,    2, 0x06,    9 /* Public */,
       9,    0,  163,    2, 0x06,   12 /* Public */,
      10,    1,  164,    2, 0x06,   13 /* Public */,
      11,    0,  167,    2, 0x06,   15 /* Public */,
      12,    1,  168,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,  171,    2, 0x0a,   18 /* Public */,
      14,    0,  172,    2, 0x0a,   19 /* Public */,
      15,    0,  173,    2, 0x0a,   20 /* Public */,
      16,    1,  174,    2, 0x0a,   21 /* Public */,
      17,    0,  177,    2, 0x0a,   23 /* Public */,
      18,    0,  178,    2, 0x0a,   24 /* Public */,
      19,    1,  179,    2, 0x0a,   25 /* Public */,
      20,    1,  182,    2, 0x0a,   27 /* Public */,
      21,    0,  185,    2, 0x0a,   29 /* Public */,
      22,    1,  186,    2, 0x0a,   30 /* Public */,
      23,    0,  189,    2, 0x0a,   32 /* Public */,
      24,    0,  190,    2, 0x0a,   33 /* Public */,
      25,    0,  191,    2, 0x0a,   34 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

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
        case 4: _t->updateCurrentFrameLabel((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->pauseAnimation(); break;
        case 6: _t->enableDelete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->startAnimation(); break;
        case 8: _t->canDraw((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->addFrame(); break;
        case 10: _t->nextFrame(); break;
        case 11: _t->prevFrame(); break;
        case 12: _t->receiveUpdatedCanvasFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 13: _t->deleteFrame(); break;
        case 14: _t->incrementAnimation(); break;
        case 15: _t->setPlayPauseBool((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->frameRateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->incrementCanvasAnimation(); break;
        case 18: _t->setCanvasPlayPause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 19: _t->deleteFrameRunning(); break;
        case 20: _t->startAnimationAfterDelete(); break;
        case 21: _t->copyFrame(); break;
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
        {
            using _t = void (Model::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::updateCurrentFrameLabel)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::pauseAnimation)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Model::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::enableDelete)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Model::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::startAnimation)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Model::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Model::canDraw)) {
                *result = 8;
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
, QtPrivate::TypeAndForceComplete<Model, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 22;
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

// SIGNAL 4
void Model::updateCurrentFrameLabel(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Model::pauseAnimation()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Model::enableDelete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Model::startAnimation()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Model::canDraw(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
