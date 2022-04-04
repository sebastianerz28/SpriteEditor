/****************************************************************************
** Meta object code from reading C++ file 'fullscreenpreview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SpriteEditor/fullscreenpreview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fullscreenpreview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FullscreenPreview_t {
    const uint offsetsAndSize[14];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_FullscreenPreview_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_FullscreenPreview_t qt_meta_stringdata_FullscreenPreview = {
    {
QT_MOC_LITERAL(0, 17), // "FullscreenPreview"
QT_MOC_LITERAL(18, 12), // "updatedImage"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 16), // "enableMainWindow"
QT_MOC_LITERAL(49, 12), // "receiveFrame"
QT_MOC_LITERAL(62, 7), // "QImage&"
QT_MOC_LITERAL(70, 6) // "reject"

    },
    "FullscreenPreview\0updatedImage\0\0"
    "enableMainWindow\0receiveFrame\0QImage&\0"
    "reject"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FullscreenPreview[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    1,   39,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   42,    2, 0x0a,    4 /* Public */,
       6,    0,   45,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,

       0        // eod
};

void FullscreenPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FullscreenPreview *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updatedImage(); break;
        case 1: _t->enableMainWindow((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->receiveFrame((*reinterpret_cast< std::add_pointer_t<QImage&>>(_a[1]))); break;
        case 3: _t->reject(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FullscreenPreview::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FullscreenPreview::updatedImage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FullscreenPreview::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FullscreenPreview::enableMainWindow)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject FullscreenPreview::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_FullscreenPreview.offsetsAndSize,
    qt_meta_data_FullscreenPreview,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_FullscreenPreview_t
, QtPrivate::TypeAndForceComplete<FullscreenPreview, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QImage &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *FullscreenPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FullscreenPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FullscreenPreview.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int FullscreenPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FullscreenPreview::updatedImage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FullscreenPreview::enableMainWindow(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
