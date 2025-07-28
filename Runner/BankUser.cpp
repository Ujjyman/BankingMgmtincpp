#include <iostream>
#include "Address.h"
#include "Customer.h"
#include "BankEmployee.h"
#include "Account.h"
#include "BankAccount.h"
#include "Sbi.h"
#include "Hdfc.h" // Uncomment if Hdfc is implemented

int main() {
    Address customerAddress(1984, "kh road", "gandhinagar", "muzaffarnagar", "251001", "UP", "INDIA");
    Customer customer("SHISHIR", "ATMPG6754", customerAddress, "Male", 9897502651LL, "shishir@gmail.com");

    Address employeeAddress(1984, "kh road", "gandhinagar", "muzaffarnagar", "251001", "UP", "INDIA");
    BankEmployee bankEmployee("ANSHIKA", "BRANCH MANAGER", "FEMALE", employeeAddress, 7906454647LL, "anshika@gmail.com", 100000);

    Account account(100);
    BankAccount b(account, customer);

    Address bankAddress(23, "vakil road", "new mandi", "muzaffarnagar", "251001", "UP", "INDIA");
    std::vector<BankEmployee> bankEmployees = { bankEmployee };
    std::vector<BankAccount> bankAccounts = { b };

    SBI sbi(bankAddress, bankEmployees, bankAccounts, "STATE BANK OF INDIA");
    // HDFC hdfc(bankAddress, bankEmployees, bankAccounts, "HDFC BANK"); // Uncomment if Hdfc is implemented

    b.deposit(100);
    std::cout << "==========================================" << std::endl;

    b.withdraw(5);
    std::cout << "==========================================" << std::endl;

    b.withdraw(200);
    std::cout << "==========================================" << std::endl;

    b.showBankAccountDetails();
    std::cout << "==========================================" << std::endl;

    sbi.showBankDetails();
    std::cout << "==========================================" << std::endl;
    // hdfc.showBankDetails(); // Uncomment if Hdfc is implemented

    return 0;
}
