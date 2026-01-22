/*
Problem 1 (VERY EASY)

Create a Student class with:

name

marks
Function:

display() → prints name & marks 
*/

#include "iostream"
using namespace std;

class Student{
    string name;
    int marks;

    void display(){
        cout<<name<<" "<<endl;
    }
};