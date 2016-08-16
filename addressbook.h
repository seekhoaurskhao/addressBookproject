#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <QObject>

class AddressBook : public QObject
{
    Q_OBJECT
public:
    explicit AddressBook(QObject *parent = 0);

signals:

public slots:
};

#endif // ADDRESSBOOK_H