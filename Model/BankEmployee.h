#pragma once
#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class BankEmployee : public Person {
private:
    string employeeDesignation;
    int salary;

public:
    BankEmployee(const string& name, const string& employeeDesignation, const string& gender, const Address& address,
                 long long mobileNumber, const string& email, int salary)
        : Person(name, gender, address, mobileNumber, email),
          employeeDesignation(employeeDesignation), salary(salary) {}

    string getEmployeeDesignation() const { return employeeDesignation; }
    void setEmployeeDesignation(const string& designation) { employeeDesignation = designation; }

    int getSalary() const { return salary; }
    void setSalary(int s) { salary = s; }

    void showEmployeeDetails() const {
        cout << "EMPLOYEE NAME IS: " << getName() << endl;
        cout << "EMPLOYEE GENDER IS :" << getGender() << endl;
        cout << "EMPLOYEE DESIGNATION IS : " << getEmployeeDesignation() << endl;
        cout << "EMPLOYEE SALARY IS :" << getSalary() << endl;
        cout << "EMPLOYEE MOBILENUMBER IS :" << getMobileNumber() << endl;
        cout << "EMPLOYEE EMAIL IS :" << getEmail() << endl;
        cout << "EMPLOYEE ADDRESS IS :" << endl;
        getAddress();
    }
};
