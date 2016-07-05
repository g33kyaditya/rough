#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QVariantMap>

class Test : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.kde.foo.bar")
public:
    explicit Test(QObject *parent = 0);
    void setMap();
    void foo();

Q_SIGNALS:
    Q_SCRIPTABLE void update();

public Q_SLOTS:
    QVariantMap getMap();

private:
    QVariantMap m_map;
};

#endif // TEST_H
