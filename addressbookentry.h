#ifndef ADDRESSBOOKENTRY_H
#define ADDRESSBOOKENTRY_H

#include <QObject>

class AddressBookEntry : public QObject
{
    Q_OBJECT
public:
    explicit AddressBookEntry(QObject *parent = 0);

signals:

public slots:
};

#endif // ADDRESSBOOKENTRY_H