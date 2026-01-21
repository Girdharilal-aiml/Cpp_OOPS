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

    void display(){
        cout<<num<<" / "<<deno<<endl;
    }

};

int main(){
    Fraction f1(1,2);
    Fraction f2(1,3);
    f1.display();
    f2.display();

}
