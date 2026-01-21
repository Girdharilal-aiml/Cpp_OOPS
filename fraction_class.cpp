#include"iostream"
using namespace std;

class Fraction{
public:
    int num;
    int deno;

    Fraction(int num,int deno){
        this->num = num;
        this->deno = deno;
    }

    void display(int num, int deno){
        cout<<num<<" / "<<deno<<endl;
    }

};


