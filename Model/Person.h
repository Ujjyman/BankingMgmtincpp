#pragma once
#include <iostream>
#include <string>
#include "Address.h"

using namespace std;

class Person {
private:
    string name;
    string gender;
    long long mobileNumber;
    string email;
    Address address;

public:
    // Constructor with all fields
    Person(string name, string gender, const Address& addr, long long mobileNumber, string email)
        : name(name), gender(gender), address(addr), mobileNumber(mobileNumber), email(email) {}

    // Constructor without mobile number
    Person(string name, string gender, const Address& addr, string email)
        : name(name), gender(gender), address(addr), email(email), mobileNumber(0) {}

    // Constructor without email
    Person(string name, string gender, const Address& addr, long long mobileNumber)
        : name(name), gender(gender), address(addr), mobileNumber(mobileNumber), email("") {}

    // Getters
    string getName() const { return name; }
    string getGender() const { return gender; }
    long long getMobileNumber() const { return mobileNumber; }
    string getEmail() const { return email; }
    void getAddress() const { address.showAddressDetails(); }

    // Setters
    void setName(const string& name) { this->name = name; }
    void setGender(const string& gender) { this->gender = gender; }
    void setMobileNumber(long long number) { this->mobileNumber = number; }
    void setEmail(const string& email) { this->email = email; }
    void setAddress(const Address& addr) { this->address = addr; }
};
