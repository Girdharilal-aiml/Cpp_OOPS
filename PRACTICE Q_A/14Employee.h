#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;
    double taxPercent;      // in decimal (0.02 = 2%)

public:
    void get_data(string n, double sal);
    double Salary_after_tax();
    void update_tax_percentage(double newTax);
    void display();
};

#endif
