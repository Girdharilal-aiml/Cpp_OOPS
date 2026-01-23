/*
Problem

Modify Student:

name, marks → private

Functions:

setMarks() → no negative marks

display()
*/

#include "iostream"
using namespace std;

class Student{
    string name;
    int marks;
public:
    Student(string name){
        this->name = name;
    }

    void setmarks(int m){
        marks=m;
    }
    void display(){
        cout<<name<<" "<<marks<<endl;
    }
};

int main(){
    Student S("Girdhari lal");
    S.setmarks(98);
    S.display();
}