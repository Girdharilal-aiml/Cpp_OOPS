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

(d) What will happen if you remove the virtual keyword from the destructor?
    Explain in 2-3 lines.
===========================================
*/

#include"iostream"
using namespace std;

class Employee{

};

int main(){

}