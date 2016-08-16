#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AddressBook addressbook;
    AddressBookController controller(&addressbook);


    MainWindow w(&controller);

    w.show();

    return a.exec();
}
