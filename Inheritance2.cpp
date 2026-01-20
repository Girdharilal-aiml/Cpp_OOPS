// Multi-level Inheritance

#include "iostream"
using namespace std;

class Vehicle{                               // Parent Class
public:
    int TopSpeed;
    float Mileage;
    string fuel;

private:
    int bootspace;
};

class TwoWheeler : public Vehicle{                       // class Bike extend to Vehicle    ---> Child/Derived Class
public:
    
};

class Car : public TwoWheeler{                        // Child/Derived Class
public:
    bool sunroof;
};

class Truck : public TwoWheeler{                       // Child/Derived Class
public:
    
};

