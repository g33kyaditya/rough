#include "test.h"
#include <QDebug>
#include "adaptor.h"
#include <QtDBus/QDBusConnection>

Test::Test(QObject *parent) : QObject(parent)
{
    new Adaptor(this);
    QDBusConnection dbus = QDBusConnection::sessionBus();
    dbus.registerObject("/FooBar", this);
    dbus.registerService("org.foo.bar");
}

QVariantMap Test::getMap()
{
    return m_map;
}

void Test::setMap()
{
    m_map.insert("Foo", "Bar");
    m_map.insert("Blah", "aksda");
    m_map.insert("asdasd", "ghr");
    m_map.insert("ntne", "rbnhn");
    m_map.insert("five", "5");
    m_map.insert("Oh God", "Please");
    m_map.insert("Make this", "thing work");
    m_map.insert("Plz", "God");
    m_map.insert("I beg", "to you plz");
    //m_map.insert("Bar", "Foo");

}
