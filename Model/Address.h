#pragma once
#include <iostream>
#include <string>

using namespace std;

class Address {
private:
    double houseNumber;
    string street;
    string colony;
    string city;
    string pin;
    string state;
    string country;

public:
    Address(double houseNumber, const string& street, const string& colony,
            const string& city, const string& pin,
            const string& state, const string& country);

    double getHouseNumber() const;
    const string& getStreet() const;
    const string& getColony() const;
    const string& getCity() const;
    const string& getPin() const;
    const string& getState() const;
    const string& getCountry() const;

    void setHouseNumber(double number);
    void setStreet(const string& s);
    void setColony(const string& c);
    void setCity(const string& c);
    void setPin(const string& p);
    void setState(const string& s);
    void setCountry(const string& c);

    void showAddressDetails() const;
};
