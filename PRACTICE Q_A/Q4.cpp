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
    string Brand ;
    int speed;                        // just a guess

    Car(string Brand, int speed){
        this->Brand = Brand;
        this->speed = speed;
    }
    void Showcar(){
        cout<<Brand<<" "<<speed<<endl;
    }
};

int main(){
    Car C1("Bugatti", 422);
    C1.Showcar();
}

