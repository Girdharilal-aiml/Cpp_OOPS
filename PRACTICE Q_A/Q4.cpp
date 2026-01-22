/*
Your Practice (DO THIS)

Create Car with constructor:

brand

speed

showCar()
*/

#include<iostream>
using namespace std;

class Car{
public:
    string Brand = "Aston martin";
    int speed = 212;                        // just a guess

    void Showcar(){
        cout<<Brand<<" "<<speed<<endl;
    }
};

int main(){
    Car C1;
    C1.Showcar();
}

