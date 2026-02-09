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

class ShallowCopy{
    public:
    int* data;

    ShallowCopy(int bal){
        data = new int (bal);
    }
    void displayDetails(){
        cout <<  "Value: " << data << endl;
        cout << "Address: " << &data << endl;
    }
};


int main(){
    cout << "Copy Constructor" << endl;
    cout << "=================================================" << endl;
    CopyConstructor c1(10);
    c1.displayDetails();
    CopyConstructor c2 = c1;
    c2.displayDetails();
    cout << endl;

    cout << "Shallow Copy Constructor" << endl;
    cout << "=================================================" << endl;
    CopyConstructor c3(10);
    c3.displayDetails();
    CopyConstructor c4 = c3;
    c4.displayDetails();
    cout << "Modifying c3.data....." << endl;
    *c3.data = 25;
    cout << "Displaying c4.data....." << endl;
    c4.displayDetails();
    cout << endl;

    
    
}
