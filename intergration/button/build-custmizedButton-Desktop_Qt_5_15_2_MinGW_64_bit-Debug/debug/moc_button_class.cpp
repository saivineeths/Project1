/****************************************************************************
** Meta object code from reading C++ file 'button_class.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../custmizedButton_7Dec2022/button_class.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'button_class.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Button_Class_t {
    QByteArrayData data[10];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Button_Class_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Button_Class_t qt_meta_stringdata_Button_Class = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Button_Class"
QT_MOC_LITERAL(1, 13, 27), // "base_Button_handelerChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 27), // "text_Button_handelerChanged"
QT_MOC_LITERAL(4, 70, 27), // "image_Button_handlerChanged"
QT_MOC_LITERAL(5, 98, 32), // "text_image_Buttom_handlerChanged"
QT_MOC_LITERAL(6, 131, 20), // "base_Button_handeler"
QT_MOC_LITERAL(7, 152, 20), // "text_Button_handeler"
QT_MOC_LITERAL(8, 173, 20), // "image_Button_handler"
QT_MOC_LITERAL(9, 194, 25) // "text_image_Buttom_handler"

    },
    "Button_Class\0base_Button_handelerChanged\0"
    "\0text_Button_handelerChanged\0"
    "image_Button_handlerChanged\0"
    "text_image_Buttom_handlerChanged\0"
    "base_Button_handeler\0text_Button_handeler\0"
    "image_Button_handler\0text_image_Buttom_handler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Button_Class[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00495103,
       7, QMetaType::Bool, 0x00495103,
       8, QMetaType::Bool, 0x00495103,
       9, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Button_Class::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Button_Class *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->base_Button_handelerChanged(); break;
        case 1: _t->text_Button_handelerChanged(); break;
        case 2: _t->image_Button_handlerChanged(); break;
        case 3: _t->text_image_Buttom_handlerChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Button_Class::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Button_Class::base_Button_handelerChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Button_Class::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Button_Class::text_Button_handelerChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Button_Class::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Button_Class::image_Button_handlerChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Button_Class::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Button_Class::text_image_Buttom_handlerChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Button_Class *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->base_Button_handeler(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->text_Button_handeler(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->image_Button_handler(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->text_image_Buttom_handler(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Button_Class *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBase_Button_handeler(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setText_Button_handeler(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setImage_Button_handler(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setText_image_Buttom_handler(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Button_Class::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Button_Class.data,
    qt_meta_data_Button_Class,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Button_Class::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Button_Class::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Button_Class.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Button_Class::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Button_Class::base_Button_handelerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Button_Class::text_Button_handelerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Button_Class::image_Button_handlerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Button_Class::text_image_Buttom_handlerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
