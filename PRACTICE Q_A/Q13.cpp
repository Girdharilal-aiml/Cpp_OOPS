/*
5. Design an Employee class with the following functions:

   - get_data():
     Collect employee name, monthly salary,
     and tax percentage.

   - Salary_after_tax():
     Deduct 2% tax from the salary
     and return the remaining salary.

   - update_tax_percentage():
     Increase tax percentage (e.g., from 2% to 3%)
     Recalculate and display updated salary after tax.
*/

#include"iostream"
using namespace std;

class Employee{
private: 
    string name;
    double M_salary;
    double Tax_percent;
    double new_tax;
    double updated_salary;
    double UPD_S_NT;

public:
    void get_data(string n, double sal){
      name = n;
      M_salary = sal;
      Tax_percent = 0.02;
      updated_salary = M_salary - (M_salary * Tax_percent);
      UPD_S_NT = M_salary - (M_salary * new_tax);
    }
    void update_tax_percentage(double tax){
      new_tax = tax/100;
    }

    string setname(){
      return name;
    }
    double setsalary(){
      return M_salary;
    }
    double settax(){
      return new_tax;
    }
    

    

};

int main(){
   
}