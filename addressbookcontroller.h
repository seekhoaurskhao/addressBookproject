#ifndef ADDRESSBOOKCONTROLLER_H
#define ADDRESSBOOKCONTROLLER_H

#include <QObject>

class AddressBookController : public QObject
{
    Q_OBJECT
public:
    explicit AddressBookController(QObject *parent = 0);

signals:

public slots:
};

#endif // ADDRESSBOOKCONTROLLER_H