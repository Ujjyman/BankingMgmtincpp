#pragma once
#include <string>

using namespace std;

const string CURRENT_BALANCE = "MONEY DEPOSITED SUCCESSFULLY.....\nYOUR CURRENT ACCOUNT BALANCE IS ";
const string CURRENTS_BALANCE = "MONEY WITHDRAWN SUCCESSFULLY...\nYOUR CURRENT ACCOUNT BALANCE IS ";
const string NOT_ENOUGH_BALANCE = "NOT ENOUGH BALANCE TO WITHDRAW !!";

class TemplateAccount {
public:
    virtual void deposit(int amount) = 0;
    virtual void withdraw(int amount) = 0;
    virtual ~TemplateAccount() = default;
};
