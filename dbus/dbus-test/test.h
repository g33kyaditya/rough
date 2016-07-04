#ifndef TEST_H
#define TEST_H

#include <QVariantMap>

class Test : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.foo.bar")
public:
    Test(QObject* parent = 0);
    void setMap();
public Q_SLOTS:
    QVariantMap getMap();
private:
    QVariantMap m_map;
};

#endif // TEST_H
