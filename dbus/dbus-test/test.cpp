#include "test.h"
#include <QDebug>
#include "adaptor.h"
#include <QtDBus/QDBusConnection>

Test::Test(QObject *parent) : QObject(parent)
{
    new Adaptor(this);
    QDBusConnection dbus = QDBusConnection::sessionBus();
    dbus.registerObject("/Test", this);
    dbus.registerService("org.foo.test");
}

QVariantMap Test::getMap()
{
    return m_map;
}

void Test::setMap()
{
    m_map.insert("Foo", "Bar");
    //m_map.insert("Bar", "Foo");
    qDebug() << m_map;
}
