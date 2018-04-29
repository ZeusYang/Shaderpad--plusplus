/****************************************************************************
** Meta object code from reading C++ file 'themedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Shaderpad/themedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'themedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThemeDialog_t {
    QByteArrayData data[19];
    char stringdata0[337];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThemeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThemeDialog_t qt_meta_stringdata_ThemeDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ThemeDialog"
QT_MOC_LITERAL(1, 12, 12), // "ThemeChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "theme"
QT_MOC_LITERAL(4, 32, 5), // "alpha"
QT_MOC_LITERAL(5, 38, 4), // "font"
QT_MOC_LITERAL(6, 43, 25), // "on_pushButtonSure_clicked"
QT_MOC_LITERAL(7, 69, 18), // "sendSignalsChanged"
QT_MOC_LITERAL(8, 88, 36), // "on_comboBoxTheme_currentIndex..."
QT_MOC_LITERAL(9, 125, 5), // "index"
QT_MOC_LITERAL(10, 131, 37), // "on_horizontalSliderAlpha_valu..."
QT_MOC_LITERAL(11, 169, 5), // "value"
QT_MOC_LITERAL(12, 175, 34), // "on_ComboBoxFont_currentFontCh..."
QT_MOC_LITERAL(13, 210, 1), // "f"
QT_MOC_LITERAL(14, 212, 39), // "on_comboBoxFontSize_currentIn..."
QT_MOC_LITERAL(15, 252, 27), // "on_pushButtonCancel_clicked"
QT_MOC_LITERAL(16, 280, 26), // "on_pushButtonApply_clicked"
QT_MOC_LITERAL(17, 307, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(18, 332, 4) // "arg1"

    },
    "ThemeDialog\0ThemeChanged\0\0theme\0alpha\0"
    "font\0on_pushButtonSure_clicked\0"
    "sendSignalsChanged\0"
    "on_comboBoxTheme_currentIndexChanged\0"
    "index\0on_horizontalSliderAlpha_valueChanged\0"
    "value\0on_ComboBoxFont_currentFontChanged\0"
    "f\0on_comboBoxFontSize_currentIndexChanged\0"
    "on_pushButtonCancel_clicked\0"
    "on_pushButtonApply_clicked\0"
    "on_checkBox_stateChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThemeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   71,    2, 0x08 /* Private */,
       7,    0,   72,    2, 0x08 /* Private */,
       8,    1,   73,    2, 0x08 /* Private */,
      10,    1,   76,    2, 0x08 /* Private */,
      12,    1,   79,    2, 0x08 /* Private */,
      14,    1,   82,    2, 0x08 /* Private */,
      15,    0,   85,    2, 0x08 /* Private */,
      16,    0,   86,    2, 0x08 /* Private */,
      17,    1,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Float, QMetaType::QFont,    3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::QFont,   13,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   18,

       0        // eod
};

void ThemeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ThemeDialog *_t = static_cast<ThemeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ThemeChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< QFont(*)>(_a[3]))); break;
        case 1: _t->on_pushButtonSure_clicked(); break;
        case 2: _t->sendSignalsChanged(); break;
        case 3: _t->on_comboBoxTheme_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_horizontalSliderAlpha_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_ComboBoxFont_currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 6: _t->on_comboBoxFontSize_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_pushButtonCancel_clicked(); break;
        case 8: _t->on_pushButtonApply_clicked(); break;
        case 9: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ThemeDialog::*_t)(QString , float , QFont );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThemeDialog::ThemeChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ThemeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ThemeDialog.data,
      qt_meta_data_ThemeDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ThemeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThemeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThemeDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ThemeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void ThemeDialog::ThemeChanged(QString _t1, float _t2, QFont _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
