/*
Problem

Create:

Person → name, age

Student → marks
Student should inherit Person
*/

#include<iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class Student : public Person{
public:
    int marks;
};

int main(){
    Student S1;
    S1.name = ""

}