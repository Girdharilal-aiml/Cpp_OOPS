// Multi-level inheritance

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

class Bike : public Vehicle{                       // class Bike extend to Vehicle    ---> Child/Derived Class
public:
    int gears;
};

class Car : public Vehicle{                        // Child/Derived Class
public:
    bool sunroof;
};

class Truck : public Vehicle{                       // Child/Derived Class
public:
    string Pickup_limit;
};

