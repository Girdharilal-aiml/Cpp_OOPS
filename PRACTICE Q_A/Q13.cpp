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

#include <iostream>
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
      new_tax = Tax_percent;
      updated_salary = M_salary - (M_salary * Tax_percent);
      UPD_S_NT = M_salary - (M_salary * new_tax);
    }
    void update_tax_percentage(double tax){
      new_tax = tax / 100;
      UPD_S_NT = M_salary - (M_salary * new_tax);
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
    double Salary_after_tax(){
      return updated_salary;
    }
    double salary_new_tax(){
      return UPD_S_NT;
    }

    void display_Normal(){
      cout<<"Name : "<<name<<endl;
      cout<<"Monthly Salary : "<<M_salary<<endl;
      cout<<"Tax percentage : "<<Tax_percent * 100<<endl;
      cout<<"Updated Salary after 2%% tax : "<<updated_salary<<endl;
    }

    void Display_new(){
      cout<<"Name : "<<name<<endl;
      cout<<"Monthly Salary : "<<M_salary<<endl;
      cout<<"Tax percentage : "<<Tax_percent * 100<<endl;
      cout<<"Updated Salary after 2%% tax : "<<updated_salary<<endl;
      cout<<"Updated Tax %% : "<<new_tax * 100<<endl;
      cout<<"Updated Salary after "<<new_tax * 100<<"%% tax : "<<UPD_S_NT<<endl;
    }

};

int main(){
    Employee E1;
    E1.get_data("Girdhari lal",100000);
    E1.Display_new();
    cout<<"==================================================="<<endl;
    E1.update_tax_percentage(3);
    E1.Display_new();
    cout<<"==================================================="<<endl;
    E1.display_Normal();
}