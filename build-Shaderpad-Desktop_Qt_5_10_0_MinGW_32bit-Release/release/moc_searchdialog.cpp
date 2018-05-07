/****************************************************************************
** Meta object code from reading C++ file 'searchdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Shaderpad/searchdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchDialog_t {
    QByteArrayData data[22];
    char stringdata0[341];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchDialog_t qt_meta_stringdata_SearchDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SearchDialog"
QT_MOC_LITERAL(1, 13, 16), // "searchFindSignal"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 6), // "target"
QT_MOC_LITERAL(4, 38, 24), // "QTextDocument::FindFlags"
QT_MOC_LITERAL(5, 63, 7), // "options"
QT_MOC_LITERAL(6, 71, 6), // "regExp"
QT_MOC_LITERAL(7, 78, 19), // "searchReplaceSignal"
QT_MOC_LITERAL(8, 98, 2), // "to"
QT_MOC_LITERAL(9, 101, 4), // "from"
QT_MOC_LITERAL(10, 106, 22), // "searchReplaceAllSignal"
QT_MOC_LITERAL(11, 129, 7), // "caseSen"
QT_MOC_LITERAL(12, 137, 5), // "whole"
QT_MOC_LITERAL(13, 143, 17), // "searchCountSignal"
QT_MOC_LITERAL(14, 161, 7), // "QLabel*"
QT_MOC_LITERAL(15, 169, 7), // "display"
QT_MOC_LITERAL(16, 177, 25), // "on_pushButtonNext_clicked"
QT_MOC_LITERAL(17, 203, 28), // "on_pushButtonReplace_clicked"
QT_MOC_LITERAL(18, 232, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(19, 256, 26), // "on_pushButtonCount_clicked"
QT_MOC_LITERAL(20, 283, 25), // "on_pushButtonSure_clicked"
QT_MOC_LITERAL(21, 309, 31) // "on_pushButtonReplaceAll_clicked"

    },
    "SearchDialog\0searchFindSignal\0\0target\0"
    "QTextDocument::FindFlags\0options\0"
    "regExp\0searchReplaceSignal\0to\0from\0"
    "searchReplaceAllSignal\0caseSen\0whole\0"
    "searchCountSignal\0QLabel*\0display\0"
    "on_pushButtonNext_clicked\0"
    "on_pushButtonReplace_clicked\0"
    "on_pushButton_3_clicked\0"
    "on_pushButtonCount_clicked\0"
    "on_pushButtonSure_clicked\0"
    "on_pushButtonReplaceAll_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   64,    2, 0x06 /* Public */,
       7,    4,   71,    2, 0x06 /* Public */,
      10,    4,   80,    2, 0x06 /* Public */,
      13,    4,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,   98,    2, 0x08 /* Private */,
      17,    0,   99,    2, 0x08 /* Private */,
      18,    0,  100,    2, 0x08 /* Private */,
      19,    0,  101,    2, 0x08 /* Private */,
      20,    0,  102,    2, 0x08 /* Private */,
      21,    0,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, QMetaType::Bool,    3,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 4, QMetaType::Bool,    8,    9,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::Bool,    8,    9,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 14,    9,   11,   12,   15,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SearchDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SearchDialog *_t = static_cast<SearchDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchFindSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 1: _t->searchReplaceSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QTextDocument::FindFlags(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 2: _t->searchReplaceAllSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 3: _t->searchCountSignal((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< QLabel*(*)>(_a[4]))); break;
        case 4: _t->on_pushButtonNext_clicked(); break;
        case 5: _t->on_pushButtonReplace_clicked(); break;
        case 6: _t->on_pushButton_3_clicked(); break;
        case 7: _t->on_pushButtonCount_clicked(); break;
        case 8: _t->on_pushButtonSure_clicked(); break;
        case 9: _t->on_pushButtonReplaceAll_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (SearchDialog::*_t)(QString , QTextDocument::FindFlags , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchDialog::searchFindSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SearchDialog::*_t)(QString , QString , QTextDocument::FindFlags , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchDialog::searchReplaceSignal)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SearchDialog::*_t)(QString , QString , bool , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchDialog::searchReplaceAllSignal)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SearchDialog::*_t)(QString , bool , bool , QLabel * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchDialog::searchCountSignal)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject SearchDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SearchDialog.data,
      qt_meta_data_SearchDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SearchDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SearchDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void SearchDialog::searchFindSignal(QString _t1, QTextDocument::FindFlags _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SearchDialog::searchReplaceSignal(QString _t1, QString _t2, QTextDocument::FindFlags _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SearchDialog::searchReplaceAllSignal(QString _t1, QString _t2, bool _t3, bool _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SearchDialog::searchCountSignal(QString _t1, bool _t2, bool _t3, QLabel * _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
