/*
===========================================
OOP Mid Exam - Question (20 Marks)
===========================================

A university wants to manage its Employees.
Every employee has a name, id, and baseSalary.

There are two types of employees:
  - FullTimeEmployee  : gets a bonus on top of base salary
  - PartTimeEmployee  : gets paid by hoursWorked * hourlyRate (base salary is ignored)

------------------------------------------
(a) Design a base class Employee with:
    - A constructor to initialize all attributes
    - A pure virtual function calculateSalary()
    - A virtual destructor
    - A function displayInfo() that prints name and id, then calls calculateSalary()

(b) Create both derived classes with proper constructors
    and override calculateSalary() to return the correct amount.

(c) In main():
    - Create an array of Employee* pointers (size 3) — mix of both types
    - Loop through and call displayInfo() on each
    - Show proper memory cleanup

===========================================
*/

#include"iostream"
using namespace std;

class Employee{
protected:
    string name;
    string ID;
    double salary;

public:
    Employee(string n, string id, double sal) : name(n), ID(id), salary(sal){}

    virtual double calculateSalary() = 0;

    virtual void displayInfo(){
    cout << "Name: " << name << endl;
    cout << "ID: " << ID << endl;
    cout << "Salary: " << calculateSalary() << endl;
    }

    virtual ~Employee(){}
};

class FULL_TIME : public Employee{
    double bonus;
public:

    FULL_TIME(string n, string id, double sal, double bon) : Employee(n, id, sal), bonus(bon) {}

    double calculateSalary() override {
        salary = salary + bonus;
        return salary;
    }

    void displayInfo() override{
        Employee::displayInfo();
        cout << "Bonus: " << bonus << endl;
    }
};

class PART_TIME : public Employee{
    int hours;
    double hourlyRATE;

public:
    PART_TIME(string n, string id, int h, double HR) : Employee(n, id, 0), hours(h), hourlyRATE(HR) {}

    double calculateSalary() override {
        salary = hours * hourlyRATE;
        return salary;
    }

    void displayInfo() override{
        Employee::displayInfo();
        cout << "Hours: " << hours << endl;
        cout << "Hourly Rate: " << hourlyRATE << endl;
    }
};

int main(){
    Employee* E[3];

    E[0] = new PART_TIME("Girdhari lal", "25k0005", 8, 100.00);
    E[1] = new FULL_TIME("GLAL", "25k0005", 100000.00 , 50000.00);
    E[2] = new PART_TIME("ELEVEN", "26k0006", 10, 50.00);

    for (int i = 0; i<3; i++){
        E[i]->displayInfo();
        cout << "--------------------------------------" << endl;
    }

    for (int i= 0; i<3; i++){
        delete E[i];
    }

    return 0;
}