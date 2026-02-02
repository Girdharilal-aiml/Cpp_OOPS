#include "14Employee.h"

void Employee::get_data(string n, double sal) {
    name = n;
    salary = sal;
    taxPercent = 0.02; 
}

double Employee::Salary_after_tax() {
    return salary - (salary * taxPercent);
}

void Employee::update_tax_percentage(double newTax) {
    taxPercent = newTax / 100;
    cout << "Updated salary after tax: "
         << Salary_after_tax() << endl;
}

void Employee::display() {
    cout << "Name: " << name << endl;
    cout << "Monthly Salary: " << salary << endl;
    cout << "Tax Percentage: " << taxPercent * 100 << "%" << endl;
    cout << "Salary After Tax: " << Salary_after_tax() << endl;
    cout << "----------------------------------" << endl;
}
