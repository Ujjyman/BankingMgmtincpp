#pragma once
#include <iostream>
#include <string>
#include "Account.h"
#include "Customer.h"
#include "TemplateAccount.h"

using namespace std;

class BankAccount : public TemplateAccount {
private:
    Account account;
    Customer customer;

public:
    BankAccount(const Account& acc, const Customer& custmer);
    void withdraw(int amount) override;
    void deposit(int amount) override;
    void showBankAccountDetails();
};
