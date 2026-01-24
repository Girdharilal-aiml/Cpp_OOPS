/*
Your Turn (VERY IMPORTANT)

Create:

Employee → name, salary

Manager → bonus
Use inheritance.
*/

#include"iostream"
using namespace std;

class Employee{
public:
    string name;
    double salary;
};

class Manager : public Employee{
public:
    double bonus;
};

int main(){
    Manager M1;
    M1.name = "Mike";
    M1.salary = 500000.00;
    M1.bonus = 100000.00;

    cout<<M1.name<<" "<<M1.salary<<" "<<M1.bonus<<endl;
}