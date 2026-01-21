#include "iostream"
using namespace std;

class Scooty{                               
public:
    int TopSpeed;
    float Mileage;

    void Sound(){
        cout<<"Vroom Vroom"<<endl; 
    }
    
private:
    int bootspace;
};

class Bike : public Scooty{                       
public:
    int gears;

    void Sound(){
        cout<<"Vroom Vroom"<<endl; 
    }
};

int main(){
    

}