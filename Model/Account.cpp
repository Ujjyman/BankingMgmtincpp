#include "Account.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Account::getUniqueID() {
    return rand() % 1000000 + 1;
}

void Account::setAccountId(int id) {
    accountId = id;
}

void Account::setActive(bool isActive) {
    active = isActive;
}

Account::Account(int amt) {
    srand(static_cast<unsigned int>(time(nullptr)));
    accountId = getUniqueID();
    amount = amt;
    active = true;
}

int Account::getAccountId() const {
    return accountId;
}

int Account::getAmount() const {
    return amount;
}

bool Account::isActive() const {
    return active;
}

void Account::setAmount(int amt) {
    amount = amt;
}

void Account::showAccountDetails() const {
    cout << "ACCOUNT DETAILS:\n";
    cout << "ACCOUNT ID:- " << accountId << endl;
    cout << "ACCOUNT STATUS:- " << (active ? "Active" : "Inactive") << endl;
    cout << "AMOUNT PRESENT:- " << amount << endl;
}
