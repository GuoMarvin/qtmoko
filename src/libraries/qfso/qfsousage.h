/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsousage -c QFsoUsage specs/xml/org.freesmartphone.Usage.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSOUSAGE_H
#define QFSOUSAGE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

#if defined(QFSO_LIBRARY)
    #define QFSO_EXPORT Q_DECL_EXPORT
#else
    #define QFSO_EXPORT Q_DECL_IMPORT
#endif

/*
 * Proxy class for interface org.freesmartphone.Usage
 */
class QFSO_EXPORT QFsoUsage: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.Usage"; }

public:
    QFsoUsage(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoUsage();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QString> GetResourcePolicy(const QString &name)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(name);
        return asyncCallWithArgumentList(QLatin1String("GetResourcePolicy"), argumentList);
    }

    inline QDBusPendingReply<bool> GetResourceState(const QString &name)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(name);
        return asyncCallWithArgumentList(QLatin1String("GetResourceState"), argumentList);
    }

    inline QDBusPendingReply<QStringList> GetResourceUsers(const QString &name)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(name);
        return asyncCallWithArgumentList(QLatin1String("GetResourceUsers"), argumentList);
    }

    inline QDBusPendingReply<QStringList> ListResources()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("ListResources"), argumentList);
    }

    inline QDBusPendingReply<> Reboot()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Reboot"), argumentList);
    }

    inline QDBusPendingReply<> RegisterResource(const QString &name, const QDBusObjectPath &path)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(name) << qVariantFromValue(path);
        return asyncCallWithArgumentList(QLatin1String("RegisterResource"), argumentList);
    }

    inline QDBusPendingReply<> ReleaseResource(const QString &name)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(name);
        return asyncCallWithArgumentList(QLatin1String("ReleaseResource"), argumentList);
    }

    inline QDBusPendingReply<> RequestResource(const QString &name)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(name);
        return asyncCallWithArgumentList(QLatin1String("RequestResource"), argumentList);
    }

    inline QDBusPendingReply<> Resume(const QString &source, const QString &reason)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(source) << qVariantFromValue(reason);
        return asyncCallWithArgumentList(QLatin1String("Resume"), argumentList);
    }

    inline QDBusPendingReply<> SetResourcePolicy(const QString &name, const QString &policy)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(name) << qVariantFromValue(policy);
        return asyncCallWithArgumentList(QLatin1String("SetResourcePolicy"), argumentList);
    }

    inline QDBusPendingReply<> Shutdown()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Shutdown"), argumentList);
    }

    inline QDBusPendingReply<> Suspend()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Suspend"), argumentList);
    }

    inline QDBusPendingReply<> UnregisterResource(const QString &name)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(name);
        return asyncCallWithArgumentList(QLatin1String("UnregisterResource"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void ResourceAvailable(const QString &name, bool availability);
    void ResourceChanged(const QString &name, bool state, const QVariantMap &attributes);
    void SystemAction(const QString &action);
};

namespace org {
  namespace freesmartphone {
    typedef ::QFsoUsage Usage;
  }
}
#endif