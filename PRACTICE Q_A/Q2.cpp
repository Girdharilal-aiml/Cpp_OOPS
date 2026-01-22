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