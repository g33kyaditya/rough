#ifndef ADAPTOR_H
#define ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "test.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.kde.kdenow.test
 */
class Adaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.foo.bar")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.kde.kdenow.test\">\n"
"    <method name=\"getMap\">\n"
"      <arg direction=\"out\" type=\"a{sv}\"/>\n"
"      <annotation value=\"QVariantMap\" name=\"org.qtproject.QtDBus.QtTypeName.Out0\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    Adaptor(Test *parent);
    virtual ~Adaptor();

    inline Test *parent() const
    { return static_cast<Test *>(QObject::parent()); }

public: // PROPERTIES
public Q_SLOTS: // METHODS
    QVariantMap getMap();
Q_SIGNALS: // SIGNALS
};

#endif
