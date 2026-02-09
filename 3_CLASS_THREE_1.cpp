// Copy Constructor, Shallow Copy Constructor, Deep Copy Constructor

#include"iostream"
using namespace std;

class CopyConstructor{
    public:
    int data;
    CopyConstructor(int bal){
        data = bal;
    }
         
    void displayDetails(){
        cout <<  "Value: " << data << endl;
        cout << "Address: " << &data << endl;
    }
};




int main(){
    
}
