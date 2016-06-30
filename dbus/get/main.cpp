#include <QCoreApplication>
#include <QtDBus/QDBusMessage>
#include <QtDBus/QDBusConnection>
#include <QtDBus/QDBusInterface>
#include <QDBusReply>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDBusConnection bus = QDBusConnection::sessionBus();
    QDBusInterface* interface = new QDBusInterface("org.foo.test",
                                                   "/Test");
    QDBusReply<QVariantMap> reply = interface->call("getMap");
    if (reply.isValid()) {
        qDebug() << "Valid reply received";
        qDebug() << reply.value();
    }
    return a.exec();
}

