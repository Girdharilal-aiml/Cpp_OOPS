#include<iostream>
using namespace std;

class cricketer{
public:

    string name;                    // Attributes
    int runs;
    float avg;

    cricketer(int runs,string name, float avg){
        // name= name;              causes error naming same 
        // runs = runs;

        this->name= name;              //this keyword removes error
        this->runs = runs;
        this->avg = avg;
    }

    void print(){                // Passing function inside class
    // cout<<name<<" "<<runs<<endl;                    both works fine
    cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
    }

    int matches(){
        return runs/avg;
    }
};

// void print(cricketer c){
//     cout<<c.name<<" "<<c.runs<<endl;
// }

int main(){
    cricketer c1(25432,"virat", 53.3);
    cricketer c2(233,"babar", 43.8);

    // print(c1);
    // print(c2);

    c1.name = "Ismail";
    c1.print();
    c2.print();

    cout<<c1.matches()<<endl;

    return 0;
}

// solv

