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

    Fraction add(Fraction f){
        int newnum = this->num*f.deno + f.num*this->deno;
        int newdeno = this->deno*f.deno;
        Fraction ans(newnum,newdeno);
        return ans;
    }

};

int main(){
    Fraction f1(1,2);
    Fraction f2(1,3);
    f1.display();
    f2.display();
    Fraction f3 = f1.add(f2);
    f3.display();
}
