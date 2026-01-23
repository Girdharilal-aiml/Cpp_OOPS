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

    
    void display(){
        cout<<name<<" "<<marks<<endl;
    }
};

int main(){
    Student S;
    S.display();
}