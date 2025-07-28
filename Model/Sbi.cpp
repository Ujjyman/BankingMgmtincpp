#pragma once
#include "Bank.h"

class Sbi : public Bank {
public:
    Sbi(const Address& bankAddress,
        const std::vector<BankEmployee>& bankEmployees,
        const std::vector<BankAccount>& bankAccounts,
        const std::string& bankName)
        : Bank(bankAddress, bankEmployees, bankAccounts, bankName) {}

    // Implement abstract method
    int getRateOfInterest() const override {
        return 9;
    }
};
