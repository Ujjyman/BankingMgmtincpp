#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "Address.h"

using namespace std;

class Customer : public Person {
private:
    string panNumber;

    string getPanNumber() const {
        return panNumber;
    }

    void setPanNumber(const string& pan) {
        panNumber = pan;
    }

public:
    // Constructor with all fields
    Customer(string accountHolderName, string pan, const Address& address, string gender, long long mobileNumber, string email)
        : Person(accountHolderName, gender, address, mobileNumber, email), panNumber(pan) {}

    // Constructor without mobile number
    Customer(string accountHolderName, string pan, string gender, const Address& address, string email)
        : Person(accountHolderName, gender, address, email), panNumber(pan) {}

    // Constructor without email
    Customer(string accountHolderName, string pan, string gender, const Address& address, long long mobileNumber)
        : Person(accountHolderName, gender, address, mobileNumber), panNumber(pan) {}

    void showCustomerDetails() const {
        cout << "CUSTOMER NAME: " << getName() << endl;
        cout << "CUSTOMER PAN NUMBER: " << getPanNumber() << endl;
        cout << "CUSTOMER ADDRESS IS:" << endl;
        getAddress();
        cout << "CUSTOMER GENDER: " << getGender() << endl;
        cout << "CUSTOMER MOBILE NUMBER IS: " << getMobileNumber() << endl;
        cout << "CUSTOMER EMAIL IS: " << getEmail() << endl;
    }
};
