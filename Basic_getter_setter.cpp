#include<iostream>
using namespace std;

class Student{
private:
    int age;
    string name;
    float marks;
    string course;
    

public:

    

    float getmarks(){
        return marks;
    }

    string getname(){
        return name;
    }

    string getcourse(){
        return course;
    }

    int getage(){
        return age;
    }

};

int main(){
    Student S1;
    S1.setname("Girdhari lal");
    S1.setage(19);
    S1.setcourse("OOP LAB");
    S1.setmarks(99.9);
    cout<<S1.getname()<<endl;
    cout<<S1.getcourse()<<endl;
    cout<<S1.getage()<<endl;
    cout<<S1.getmarks()<<endl;
}
