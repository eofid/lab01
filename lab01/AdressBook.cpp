#include "AdressBook.h"
#include <iostream>

using namespace std;

void AddressBook::addContact() {
    string name;
    string phone;
    string email;
    cout << "Ââåäèòå èìÿ: ";
    cin >> name;
    cout << "Ââåäèòå òåëåôîí: ";
    cin >> phone;
    cout << "Ââåäèòå email: ";
    cin >> email;

    contacts.emplace_back(name, phone, email);
    cout << "Êîíòàêò äîáàâëåí!\n";
}

void AddressBook::editContact() {
    string name;
    cout << "Ââåäèòå èìÿ êîíòàêòà äëÿ ðåäàêòèðîâàíèÿ: ";
    cin >> name;

    for (auto& contact : contacts) {
        if (contact.name == name) {
            cout << "Ðåäàêòèðîâàíèå êîíòàêòà " << contact.name << endl;
            cout << "Ââåäèòå íîâîå èìÿ: ";
            cin >> contact.name;
            cout << "Ââåäèòå íîâûé òåëåôîí: ";
            cin >> contact.phone;
            cout << "Ââåäèòå íîâûé email: ";
            cin >> contact.email;
            cout << "Êîíòàêò îáíîâëåí!\n";
            return;
        }
    }
    cout << "Êîíòàêò íå íàéäåí!\n";
}

void AddressBook::deleteContact() {
    string name;
    cout << "Ââåäèòå èìÿ êîíòàêòà äëÿ óäàëåíèÿ: ";
    cin >> name;

    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->name == name) {
            contacts.erase(it);
            cout << "Êîíòàêò óäàëåí!\n";
            return;
        }
    }
    cout << "Êîíòàêò íå íàéäåí!\n";
}

void AddressBook::searchContact() const {
    string name;
    cout << "Ââåäèòå èìÿ äëÿ ïîèñêà: ";
    cin >> name;

    for (const auto& contact : contacts) {
        if (contact.name == name) {
            cout << "Èìÿ: " << contact.name << endl;
            cout << "Òåëåôîí: " << contact.phone << endl;
            cout << "Email: " << contact.email << endl;
            return;
        }
    }
    cout << "Êîíòàêò íå íàéäåí!\n";
}

void AddressBook::displayContacts() const {
    if (contacts.empty()) {
        cout << "Àäðåñíàÿ êíèãà ïóñòà.\n";
        return;
    }

    for (const auto& contact : contacts) {
        cout << "Èìÿ: " << contact.name << endl;
        cout << "Òåëåôîí: " << contact.phone << endl;
        cout << "Email: " << contact.email << endl;
        cout << "-------------------\n";
    }
}
