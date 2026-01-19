#include<iostream>
using namespace std;

class student{
public:
    int rno;
    string name;

    student(){

    }

    student(int rno, string name, float marks){         //Constructor can access private
        this->marks=marks;
        this->name= name;
        this->rno= rno;
    }

    void display(){
        cout<<marks<<" "<<name<<" "<<rno<<endl;
    }

    float getmarks(){           //getter
        return marks;
    }

    float setmarks(float m){           //setter
        marks = m;
    }

private:             // We do not want user to change a particular class member but we want user can atleast print it
    float marks;     // we create another function to print it
};

int main(){

    student s1(32, "Girdhari lal", 12.5);
    cout<<s1.getmarks()<<endl;       //we can't edit marks           // because of getter function now we can print marks(which is in private)

    s1.setmarks(98.5);
    cout<<s1.getmarks()<<endl;      // edited using setter function


    // student s2;
    // s2.rno= 52;
    // s2.name= "Glal";
    // //s2.marks= 32.3;          // Giving error in default constructor

    // s1.display();
    // s2.display();

    return 0;
}