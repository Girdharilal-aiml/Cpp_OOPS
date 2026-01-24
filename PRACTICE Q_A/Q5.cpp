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
        marks = 0;
        if(m>0){
        marks=m;                    // Error!
        void display();
        }else if(m<0){
            cout<<"Invalid Marks!"<<endl;
        }
    }
    
    void display(){
        cout<<name<<" "<<marks<<endl;
    }

};

int main(){
    Student S("Girdhari lal");
    S.setmarks(98);
    S.display();
    S.setmarks(-98);
    S.display();
}