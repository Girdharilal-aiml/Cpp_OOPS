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

int main(){
    B b1,b2;
    b1.fun();   // Derived class function
    b2.A::fun(); // Base class function
}