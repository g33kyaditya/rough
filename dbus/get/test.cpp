#include "test.h"
#include <QDBusConnection>
#include <QDBusReply>
#include <QDebug>
#include <QObject>

Test::Test(QObject* parent) : QObject(parent)
{
    QDBusConnection dbus = QDBusConnection::sessionBus();
    interface = new QDBusInterface("org.kde.kdenow", "/Flight");
    QDBusConnection::sessionBus().connect("org.kde.kdenow", "/Flight",
                                          "org.kde.kdenow.flight", "update",
                                          this, SLOT(onMapReceived()));
}


void Test::onMapReceived()
{

    QDBusReply<QVariantMap> reply = interface->call("getMap");
    if (reply.isValid()) {
        qDebug() << "Valid reply received";
        qDebug() << reply.value();
    }

}

