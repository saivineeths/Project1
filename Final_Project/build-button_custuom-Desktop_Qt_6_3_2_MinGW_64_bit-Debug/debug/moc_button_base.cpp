/****************************************************************************
** Meta object code from reading C++ file 'button_base.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../button_custuom/button_base.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'button_base.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_button_base_t {
    uint offsetsAndSizes[28];
    char stringdata0[12];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[27];
    char stringdata5[32];
    char stringdata6[19];
    char stringdata7[19];
    char stringdata8[19];
    char stringdata9[24];
    char stringdata10[20];
    char stringdata11[20];
    char stringdata12[20];
    char stringdata13[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_button_base_t::offsetsAndSizes) + ofs), len 
static const qt_meta_stringdata_button_base_t qt_meta_stringdata_button_base = {
    {
        QT_MOC_LITERAL(0, 11),  // "button_base"
        QT_MOC_LITERAL(12, 26),  // "base_Button_enablerChanged"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 26),  // "text_Button_enablerChanged"
        QT_MOC_LITERAL(67, 26),  // "iocn_Button_enablerChanged"
        QT_MOC_LITERAL(94, 31),  // "text_Icon_Button_enablerChanged"
        QT_MOC_LITERAL(126, 18),  // "base_Button_Change"
        QT_MOC_LITERAL(145, 18),  // "text_Button_Change"
        QT_MOC_LITERAL(164, 18),  // "icon_Button_Change"
        QT_MOC_LITERAL(183, 23),  // "icon_Text_Button_Change"
        QT_MOC_LITERAL(207, 19),  // "base_Button_enabler"
        QT_MOC_LITERAL(227, 19),  // "text_Button_enabler"
        QT_MOC_LITERAL(247, 19),  // "iocn_Button_enabler"
        QT_MOC_LITERAL(267, 24)   // "text_Icon_Button_enabler"
    },
    "button_base",
    "base_Button_enablerChanged",
    "",
    "text_Button_enablerChanged",
    "iocn_Button_enablerChanged",
    "text_Icon_Button_enablerChanged",
    "base_Button_Change",
    "text_Button_Change",
    "icon_Button_Change",
    "icon_Text_Button_Change",
    "base_Button_enabler",
    "text_Button_enabler",
    "iocn_Button_enabler",
    "text_Icon_Button_enabler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_button_base[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    5 /* Public */,
       3,    0,   63,    2, 0x06,    6 /* Public */,
       4,    0,   64,    2, 0x06,    7 /* Public */,
       5,    0,   65,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   66,    2, 0x0a,    9 /* Public */,
       7,    0,   67,    2, 0x0a,   10 /* Public */,
       8,    0,   68,    2, 0x0a,   11 /* Public */,
       9,    0,   69,    2, 0x0a,   12 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, QMetaType::Bool, 0x00015103, uint(0), 0,
      11, QMetaType::Bool, 0x00015103, uint(1), 0,
      12, QMetaType::Bool, 0x00015103, uint(2), 0,
      13, QMetaType::Bool, 0x00015103, uint(3), 0,

       0        // eod
};

void button_base::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<button_base *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->base_Button_enablerChanged(); break;
        case 1: _t->text_Button_enablerChanged(); break;
        case 2: _t->iocn_Button_enablerChanged(); break;
        case 3: _t->text_Icon_Button_enablerChanged(); break;
        case 4: _t->base_Button_Change(); break;
        case 5: _t->text_Button_Change(); break;
        case 6: _t->icon_Button_Change(); break;
        case 7: _t->icon_Text_Button_Change(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (button_base::*)();
            if (_t _q_method = &button_base::base_Button_enablerChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (button_base::*)();
            if (_t _q_method = &button_base::text_Button_enablerChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (button_base::*)();
            if (_t _q_method = &button_base::iocn_Button_enablerChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (button_base::*)();
            if (_t _q_method = &button_base::text_Icon_Button_enablerChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<button_base *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->base_Button_enabler(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->text_Button_enabler(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->iocn_Button_enabler(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->text_Icon_Button_enabler(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<button_base *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBase_Button_enabler(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setText_Button_enabler(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setIocn_Button_enabler(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setText_Icon_Button_enabler(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

const QMetaObject button_base::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_button_base.offsetsAndSizes,
    qt_meta_data_button_base,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_button_base_t
, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<button_base, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *button_base::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *button_base::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_button_base.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int button_base::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void button_base::base_Button_enablerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void button_base::text_Button_enablerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void button_base::iocn_Button_enablerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void button_base::text_Icon_Button_enablerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
