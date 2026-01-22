/*
Problem 2 (Practice Yourself)

Create a Car class:

brand

speed
Function:

showCar()
*/

#include<iostream>
using namespace std;

class Car{
    string Brand = "Aston martin";
    int speed = 212;                        // just a guess

public:
    void Showcar(){
        cout<<Brand<<" "<<speed<<endl;
    }
};

int main(){
    Car C1;
    C1.Showcar();
}