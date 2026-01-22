/*
Problem

Modify Student class:

Use constructor to set:

name

marks

Display them
*/

#include "iostream"
using namespace std;

class Student{
public:
    string name;
    int marks;

    Student(string n,int m){
        name = n;
        marks = m;
    }

    void display(){
        cout<<name<<" "<<marks<<endl;
    }
};

int main(){
    Student S("Girdhari lal", 99);
    S.display();
}