#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H
#include "addressbookentry.h"
#include <QObject>
#include <QList>

// first step : select a container for our address book entry
class AddressBook : public QObject
{
    Q_OBJECT
public:
    typedef QList <AddressBookEntry*> Entries;
    explicit AddressBook(QObject *parent = 0);

    Entries entries() const;
    AddressBookEntry* createEntry();
    bool deleteEntry (AddressBookEntry * entry );

    ~AddressBook();
signals:

    void entryAdded(AddressBookEntry * entry);
    void entryRemoved(AddressBookEntry *entry);


public slots:

private:

    Entries m_entries;

};

#endif // ADDRESSBOOK_H
