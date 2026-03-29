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
 
};

