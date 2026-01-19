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


int main(){
    cricketer c1(25432,"virat", 53.3);
    cricketer *c2= new cricketer(233,"babar", 43.8);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2->name<<" "<<c2->runs<<endl;

    return 0;
}



