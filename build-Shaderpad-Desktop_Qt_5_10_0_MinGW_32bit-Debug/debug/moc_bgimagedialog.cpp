/****************************************************************************
** Meta object code from reading C++ file 'bgimagedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Shaderpad/bgimagedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bgimagedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BgImageDialog_t {
    QByteArrayData data[9];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BgImageDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BgImageDialog_t qt_meta_stringdata_BgImageDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BgImageDialog"
QT_MOC_LITERAL(1, 14, 12), // "ImageChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 6), // "target"
QT_MOC_LITERAL(4, 35, 36), // "on_comboBoxSelect_currentText..."
QT_MOC_LITERAL(5, 72, 4), // "arg1"
QT_MOC_LITERAL(6, 77, 25), // "on_pushButtonSure_clicked"
QT_MOC_LITERAL(7, 103, 27), // "on_pushButtonCancel_clicked"
QT_MOC_LITERAL(8, 131, 26) // "on_pushButtonApply_clicked"

    },
    "BgImageDialog\0ImageChanged\0\0target\0"
    "on_comboBoxSelect_currentTextChanged\0"
    "arg1\0on_pushButtonSure_clicked\0"
    "on_pushButtonCancel_clicked\0"
    "on_pushButtonApply_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BgImageDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   42,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BgImageDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BgImageDialog *_t = static_cast<BgImageDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ImageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_comboBoxSelect_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_pushButtonSure_clicked(); break;
        case 3: _t->on_pushButtonCancel_clicked(); break;
        case 4: _t->on_pushButtonApply_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BgImageDialog::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BgImageDialog::ImageChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BgImageDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BgImageDialog.data,
      qt_meta_data_BgImageDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BgImageDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BgImageDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BgImageDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int BgImageDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void BgImageDialog::ImageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
