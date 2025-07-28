#include "Address.h"
#include <iostream>

using namespace std;

Address::Address(double houseNumber, const string& street, const string& colony,
                 const string& city, const string& pin,
                 const string& state, const string& country)
    : houseNumber(houseNumber), street(street), colony(colony),
      city(city), pin(pin), state(state), country(country) {}

double Address::getHouseNumber() const { return houseNumber; }
const string& Address::getStreet() const { return street; }
const string& Address::getColony() const { return colony; }
const string& Address::getCity() const { return city; }
const string& Address::getPin() const { return pin; }
const string& Address::getState() const { return state; }
const string& Address::getCountry() const { return country; }

void Address::setHouseNumber(double number) { houseNumber = number; }
void Address::setStreet(const string& s) { street = s; }
void Address::setColony(const string& c) { colony = c; }
void Address::setCity(const string& c) { city = c; }
void Address::setPin(const string& p) { pin = p; }
void Address::setState(const string& s) { state = s; }
void Address::setCountry(const string& c) { country = c; }

void Address::showAddressDetails() const {
    cout << "HOUSE NUMBER: " << houseNumber << "\n";
    cout << "STREET IS: " << street << "\n";
    cout << "COLONY IS: " << colony << "\n";
    cout << "CITY IS: " << city << "\n";
    cout << "STATE IS: " << state << "\n";
    cout << "COUNTRY IS: " << country << "\n";
}
