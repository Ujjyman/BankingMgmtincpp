#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Address.h"
#include "BankEmployee.h"
#include "BankAccount.h"
using namespace std;

class Bank {
protected:
    Address bankAddress;
    vector<BankEmployee> bankEmployees;
    vector<BankAccount> bankAccounts;
    string bankName;

public:
    Bank(const Address& addr, const vector<BankEmployee>& employees,
         const vector<BankAccount>& accounts, const string& name);
    virtual int getRateOfInterest() const = 0;
    void showBankDetails() const;
    const string& getBankName() const;
    const Address& getBankAddress() const;
    const vector<BankEmployee>& getBankEmployees() const;
    const vector<BankAccount>& getBankAccounts() const;
    void setBankName(const string& name);
    void setBankAddress(const Address& addr);
    void setBankEmployees(const vector<BankEmployee>& employees);
    void setBankAccounts(const vector<BankAccount>& accounts);
};
