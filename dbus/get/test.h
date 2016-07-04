#ifndef TEST_H
#define TEST_H

#include <QDBusInterface>
#include <QDBusConnection>

class Test : public QObject
{
    Q_OBJECT
public:
    Test(QObject* parent = 0);
public Q_SLOTS:
    void onMapReceived();
private:
    QDBusInterface* interface;
};

#endif // TEST_H
