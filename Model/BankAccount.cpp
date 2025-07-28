#include "BankAccount.h"
#include <iostream>

using namespace std;

BankAccount::BankAccount(const Account& acc, const Customer& custmer)
    : account(acc), customer(custmer) {}

void BankAccount::withdraw(int amount) {
    int presentAmount = account.getAmount();
    if (presentAmount < amount) {
        cout << NOT_ENOUGH_BALANCE << endl;
    } else {
        presentAmount = presentAmount - amount;
        account.setAmount(presentAmount);
        cout << CURRENTS_BALANCE << presentAmount << endl;
    }
}

void BankAccount::deposit(int amount) {
    int presentAmount = account.getAmount();
    presentAmount = presentAmount + amount;
    account.setAmount(presentAmount);
    cout << CURRENT_BALANCE << presentAmount << endl;
}

void BankAccount::showBankAccountDetails() {
    cout << "BANK ACCOUNT DETAILS: " << endl;
    account.showAccountDetails();
    customer.showCustomerDetails();
}
