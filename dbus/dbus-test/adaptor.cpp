#include "adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class Adaptor
 */

Adaptor::Adaptor(Test *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

Adaptor::~Adaptor()
{
    // destructor
}

QVariantMap Adaptor::getMap()
{
    // handle method call org.kde.kdenow.test.getMap
    return parent()->getMap();
}
