#include "iostream"
using namespace std;

class Scooty{                               
private:
    int bootspace;
    
public:
    int TopSpeed;
    float Mileage;

    virtual void Sound(){                               // Without virtual it will print Vroom Vroom
        cout<<"Vroom Vroom"<<endl; 
    }
};

class Bike : public Scooty{                       
public:
    int gears;

    void Sound(){
        cout<<"Dhroom Dhroom"<<endl; 
    }
};

class SuperBike : public Scooty{                       
public:
    int gears;

    void Sound(){
        cout<<"Zroom Zroom"<<endl; 
    }
};

int main(){
    Scooty* B = new Bike();
    B->Sound();
    
    Scooty* C = new SuperBike();
    C->Sound();
    
}