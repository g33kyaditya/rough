#include "test.h"
#include "baradaptor.h"

#include <QDBusConnection>


Test::Test(QObject *parent) : QObject(parent)
{
    new BarAdaptor(this);
    QDBusConnection dbus = QDBusConnection::sessionBus();
    dbus.registerObject("/Flight", this);
    dbus.registerService("org.kde.foo.bar");
}

void Test::setMap()
{
    m_map.insert("Foo", "Bar");
    m_map.insert("Ab", "Cd");
}

QVariantMap Test::getMap()
{
    foo();
    return m_map;
}

void Test::foo()
{
    emit update();
}
