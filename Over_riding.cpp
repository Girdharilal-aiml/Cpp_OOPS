#include "iostream"
using namespace std;

class Scooty{                               
public:
    int TopSpeed;
    float Mileage;

    virtual void Sound(){                               // Without virtual it will print Vroom Vroom
        cout<<"Vroom Vroom"<<endl; 
    }
    
private:
    int bootspace;
};

class Bike : public Scooty{                       
public:
    int gears;

    void Sound(){
        cout<<"Dhroom Dhroom"<<endl; 
    }
};

int main(){
    Scooty* B = new Bike();
    B->Sound();
}