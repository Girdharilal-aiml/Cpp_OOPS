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
    string name="Girdhari lal";
    int marks=99;

public:
    void display(){
        cout<<name<<" "<<marks<<endl;
    }
};

int main(){
    Student S;
    S.display();
}