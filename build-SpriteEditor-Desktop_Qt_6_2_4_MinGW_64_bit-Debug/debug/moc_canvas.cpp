/****************************************************************************
** Meta object code from reading C++ file 'canvas.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpriteEditor/canvas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Canvas_t {
    const uint offsetsAndSize[38];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Canvas_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Canvas_t qt_meta_stringdata_Canvas = {
    {
QT_MOC_LITERAL(0, 6), // "Canvas"
QT_MOC_LITERAL(7, 19), // "firstHistoryChanged"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 20), // "secondHistoryChanged"
QT_MOC_LITERAL(49, 19), // "thirdHistoryChanged"
QT_MOC_LITERAL(69, 20), // "fourthHistoryChanged"
QT_MOC_LITERAL(90, 15), // "newCurrentColor"
QT_MOC_LITERAL(106, 17), // "updateModelFrames"
QT_MOC_LITERAL(124, 7), // "QImage&"
QT_MOC_LITERAL(132, 16), // "nextFrameChanged"
QT_MOC_LITERAL(149, 16), // "prevFrameChanged"
QT_MOC_LITERAL(166, 16), // "brushSizeChanged"
QT_MOC_LITERAL(183, 13), // "eraseSelected"
QT_MOC_LITERAL(197, 13), // "brushSelected"
QT_MOC_LITERAL(211, 19), // "colorDialogSelected"
QT_MOC_LITERAL(231, 19), // "firstHistorySelcted"
QT_MOC_LITERAL(251, 20), // "secondHistorySelcted"
QT_MOC_LITERAL(272, 19), // "thirdHistorySelcted"
QT_MOC_LITERAL(292, 20) // "fourthHistorySelcted"

    },
    "Canvas\0firstHistoryChanged\0\0"
    "secondHistoryChanged\0thirdHistoryChanged\0"
    "fourthHistoryChanged\0newCurrentColor\0"
    "updateModelFrames\0QImage&\0nextFrameChanged\0"
    "prevFrameChanged\0brushSizeChanged\0"
    "eraseSelected\0brushSelected\0"
    "colorDialogSelected\0firstHistorySelcted\0"
    "secondHistorySelcted\0thirdHistorySelcted\0"
    "fourthHistorySelcted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Canvas[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x06,    1 /* Public */,
       3,    1,  113,    2, 0x06,    3 /* Public */,
       4,    1,  116,    2, 0x06,    5 /* Public */,
       5,    1,  119,    2, 0x06,    7 /* Public */,
       6,    1,  122,    2, 0x06,    9 /* Public */,
       7,    1,  125,    2, 0x06,   11 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,  128,    2, 0x0a,   13 /* Public */,
      10,    1,  131,    2, 0x0a,   15 /* Public */,
      11,    1,  134,    2, 0x0a,   17 /* Public */,
      12,    0,  137,    2, 0x0a,   19 /* Public */,
      13,    0,  138,    2, 0x0a,   20 /* Public */,
      14,    0,  139,    2, 0x0a,   21 /* Public */,
      15,    0,  140,    2, 0x0a,   22 /* Public */,
      16,    0,  141,    2, 0x0a,   23 /* Public */,
      17,    0,  142,    2, 0x0a,   24 /* Public */,
      18,    0,  143,    2, 0x0a,   25 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Canvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Canvas *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->firstHistoryChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->secondHistoryChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->thirdHistoryChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->fourthHistoryChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->newCurrentColor((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->updateModelFrames((*reinterpret_cast< std::add_pointer_t<QImage&>>(_a[1]))); break;
        case 6: _t->nextFrameChanged((*reinterpret_cast< std::add_pointer_t<QImage&>>(_a[1]))); break;
        case 7: _t->prevFrameChanged((*reinterpret_cast< std::add_pointer_t<QImage&>>(_a[1]))); break;
        case 8: _t->brushSizeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->eraseSelected(); break;
        case 10: _t->brushSelected(); break;
        case 11: _t->colorDialogSelected(); break;
        case 12: _t->firstHistorySelcted(); break;
        case 13: _t->secondHistorySelcted(); break;
        case 14: _t->thirdHistorySelcted(); break;
        case 15: _t->fourthHistorySelcted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Canvas::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::firstHistoryChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Canvas::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::secondHistoryChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Canvas::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::thirdHistoryChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Canvas::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::fourthHistoryChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Canvas::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::newCurrentColor)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Canvas::*)(QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Canvas::updateModelFrames)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject Canvas::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Canvas.offsetsAndSize,
    qt_meta_data_Canvas,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Canvas_t
, QtPrivate::TypeAndForceComplete<Canvas, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Canvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Canvas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Canvas.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Canvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void Canvas::firstHistoryChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Canvas::secondHistoryChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Canvas::thirdHistoryChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Canvas::fourthHistoryChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Canvas::newCurrentColor(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Canvas::updateModelFrames(QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
