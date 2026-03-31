#include"iostream"
using namespace std;

class A{
public:
    void fun(){
        cout<<"Base class function"<<endl;
    }
};

class B : public A{
public:
    void fun(){
        cout<<"Derived class function"<<endl;
    }
};

