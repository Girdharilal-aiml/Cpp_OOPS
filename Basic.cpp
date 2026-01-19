#include<iostream>
using namespace std;

class Student{          //Student is a datatype
public:                 //Necessary to mention
    string sname;
    int rno;
    float cgpa;

    Student(){

    }
                                                // there is always a default constructor
    Student(string s, int r, float c){          //(parameterised constructor) Constructor is a name of a function same as the Class
        sname = s;
        rno = r;
        cgpa = c;
    }
};

void print(Student s){             // pass by value
    cout<<s.sname<<endl;
    cout<<s.cgpa<<" \n"<<s.rno<<endl;
}

void change(Student &s){           // pass by reference
    s.sname="lal";
    s.cgpa= 3.67;
    s.rno= 250005;
}

int main(){
    Student s1;          //s is now an obejct which contains multiple things
    s1.sname="Girdhari lal";
    s1.cgpa= 1.333;
    s1.rno= 250005;
    print(s1);
    change(s1);
    print(s1);

    Student s2("Girdhari lal", 250005, 4.00);               // Done by help of the constructor
    print(s2);

    Student s3=s2;                                          //Deep Copy from other class
    print(s3);

    Student s4(s1);                                         // Copy Constructor
    print(s4);

    return 0;
}


