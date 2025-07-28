#include "Bank.h"

class Hdfc : public Bank {
public:
    Hdfc(const Address& bankAddress,
         const std::vector<BankEmployee>& bankEmployee,
         const std::vector<BankAccount>& bankAccounts,
         const std::string& bankName)
        : Bank(bankAddress, bankEmployee, bankAccounts, bankName) {}

    int getRateOfInterest() const override {
        return 10;
    }
};
