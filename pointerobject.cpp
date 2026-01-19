#include<iostream>
using namespace std;

class cricketer{
public:

    string name;                    // Attributes
    int runs;
    float avg;

    cricketer(int runs,string name, float avg){

        this->name= name;             
        this->runs = runs;
        this->avg = avg;
    }

};

void change(cricketer *c){
    //(*c).avg = 100.11;
    c->avg=200.22;
}

int main(){
    cricketer c1(25432,"virat", 53.3);
    cricketer *p1=&c1;

    cout<<c1.avg<<endl;
    change(&c1);
    cout<<c1.avg<<endl;
    // cricketer c1(25432,"virat", 53.3);
    // cricketer c2(233,"babar", 43.8);

    // cricketer *p1=&c1;

    // cout<<(*p1).name<<endl;
    // (*p1).avg= 77.5;

    // cout<<(*p1).avg<<endl;


    return 0;
}



