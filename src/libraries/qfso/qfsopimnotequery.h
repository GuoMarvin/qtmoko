/*
 * This file was generated by qfsodbusxml2cpp version 0.7
 * Command line was: qfsodbusxml2cpp -p qfsopimnotequery -c QFsoPIMNoteQuery specs/xml/org.freesmartphone.PIM.NoteQuery.xml
 *
 * qfsodbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef QFSOPIMNOTEQUERY_H
#define QFSOPIMNOTEQUERY_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>
#include "qfsovariantmaplist.h"

#if defined(QFSO_LIBRARY)
    #define QFSO_EXPORT Q_DECL_EXPORT
#else
    #define QFSO_EXPORT Q_DECL_IMPORT
#endif

/*
 * Proxy class for interface org.freesmartphone.PIM.NoteQuery
 */
class QFSO_EXPORT QFsoPIMNoteQuery: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "org.freesmartphone.PIM.NoteQuery"; }

public:
    QFsoPIMNoteQuery(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~QFsoPIMNoteQuery();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Dispose()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Dispose"), argumentList);
    }

    inline QDBusPendingReply<QFsoVariantMapList> GetMultipleResults(int count)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(count);
        return asyncCallWithArgumentList(QLatin1String("GetMultipleResults"), argumentList);
    }

    inline QDBusPendingReply<QString> GetNotePath()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetNotePath"), argumentList);
    }

    inline QDBusPendingReply<QVariantMap> GetResult()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetResult"), argumentList);
    }

    inline QDBusPendingReply<int> GetResultCount()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("GetResultCount"), argumentList);
    }

    inline QDBusPendingReply<> Rewind()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QLatin1String("Rewind"), argumentList);
    }

    inline QDBusPendingReply<> Skip(int count)
    {
        QList<QVariant> argumentList;
        argumentList << qVariantFromValue(count);
        return asyncCallWithArgumentList(QLatin1String("Skip"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void NoteAdded(const QString &note_path);
};

namespace org {
  namespace freesmartphone {
    namespace PIM {
      typedef ::QFsoPIMNoteQuery NoteQuery;
    }
  }
}
#endif