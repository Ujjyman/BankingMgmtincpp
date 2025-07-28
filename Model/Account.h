#pragma once
#include <iostream>

using namespace std;

class Account {
private:
    int accountId;
    int amount;
    bool active;

    int getUniqueID();
    void setAccountId(int id);
    void setActive(bool isActive);

public:
    Account(int amt);
    int getAccountId() const;
    int getAmount() const;
    bool isActive() const;
    void setAmount(int amt);
    void showAccountDetails() const;
};
