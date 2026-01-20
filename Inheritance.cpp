#include "iostream"
using namespace std;

class Scooty{                               // Parent Class
public:
    int TopSpeed;
    float Mileage;
};

class Bike : public Scooty{                        // class Bike extend to Scooty      ---> Child/Derived Class
public:
    int gears;
};

int main(){

}