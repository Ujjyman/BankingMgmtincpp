#include "Bank.h"
#include <iostream>

using namespace std;

Bank::Bank(const Address& addr, const vector<BankEmployee>& employees,
         const vector<BankAccount>& accounts, const string& name)
    : bankAddress(addr), bankEmployees(employees), bankAccounts(accounts), bankName(name) {}

void Bank::showBankDetails() const {
    cout << "BANK NAME IS: " << bankName << endl;
    cout << "BANK ADDRESS IS:" << endl;
    bankAddress.showAddressDetails();
    cout << "BANK RATE OF INTEREST IS: " << getRateOfInterest() << "%" << endl;

    cout << "BANK EMPLOYEES ARE:" << endl;
    for (const auto& emp : bankEmployees) {
        emp.showEmployeeDetails();
    }

    cout << "BANK ACCOUNTS:" << endl;
    for (const auto& acc : bankAccounts) {
        acc.showBankAccountDetails();
    }
}

const string& Bank::getBankName() const { return bankName; }
const Address& Bank::getBankAddress() const { return bankAddress; }
const vector<BankEmployee>& Bank::getBankEmployees() const { return bankEmployees; }
const vector<BankAccount>& Bank::getBankAccounts() const { return bankAccounts; }

void Bank::setBankName(const string& name) { bankName = name; }
void Bank::setBankAddress(const Address& addr) { bankAddress = addr; }
void Bank::setBankEmployees(const vector<BankEmployee>& employees) { bankEmployees = employees; }
void Bank::setBankAccounts(const vector<BankAccount>& accounts) { bankAccounts = accounts; }
