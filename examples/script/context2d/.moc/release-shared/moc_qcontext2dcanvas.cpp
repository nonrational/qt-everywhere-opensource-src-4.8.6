/****************************************************************************
** Meta object code from reading C++ file 'qcontext2dcanvas.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qcontext2dcanvas.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcontext2dcanvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QContext2DCanvas[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      35,   31,   18,   17, 0x0a,
      68,   55,   17,   17, 0x0a,
     109,   84,   17,   17, 0x0a,
     159,  153,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QContext2DCanvas[] = {
    "QContext2DCanvas\0\0QScriptValue\0str\0"
    "getContext(QString)\0width,height\0"
    "resize(int,int)\0type,listener,useCapture\0"
    "addEventListener(QString,QScriptValue,bool)\0"
    "image\0contentsChanged(QImage)\0"
};

void QContext2DCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QContext2DCanvas *_t = static_cast<QContext2DCanvas *>(_o);
        switch (_id) {
        case 0: { QScriptValue _r = _t->getContext((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QScriptValue*>(_a[0]) = _r; }  break;
        case 1: _t->resize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->addEventListener((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QScriptValue(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->contentsChanged((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QContext2DCanvas::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QContext2DCanvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QContext2DCanvas,
      qt_meta_data_QContext2DCanvas, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QContext2DCanvas::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QContext2DCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QContext2DCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QContext2DCanvas))
        return static_cast<void*>(const_cast< QContext2DCanvas*>(this));
    return QWidget::qt_metacast(_clname);
}

int QContext2DCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
