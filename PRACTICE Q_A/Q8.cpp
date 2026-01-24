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

}