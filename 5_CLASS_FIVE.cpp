#include "iostream"
using namespace std;

class Employee{
public:
    string  name;
    int employeeid;
    double basesalary;

    Employee(string name, int id, double salary) : name(name), employeeid(id), basesalary(salary){}

    void displayDetails(){
        cout << "ID " << employeeid << " | Name: " << name << " | Base Salary: " << basesalary << endl;
    }

};

class Manager : private Employee{
private:
    int teamSize;

public:
    Manager(string name, int employeeID, double baseSalary, int teamSize) : Employee(name, employeeID, baseSalary), teamSize(teamSize){}

    void displayDetails(){
        cout << "Manager" << endl;
        Employee::displayDetails();
        cout << "Team Size: " << teamSize << endl;
    }
};

int main(){
    Employee emp("Alice", 101, 50000);
    Manager mgr("Bob", 102, 80000, 5);
    mgr.displayDetails();
}