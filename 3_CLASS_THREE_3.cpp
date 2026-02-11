//main.cpp
#include "iostream"
#include "3_CLASS_THREE_BankSystem.h"
using namespace std;

int main(){
    cout << "Shallow Copy Constructor" << endl;
    cout << "=====================================================================================" << endl;
    SharedAccount S1(1000.00);

    cout << "Displaying Balance of Account S1" << endl;
    S1.displayDetails();
    cout << "=====================================================================================" << endl;

    cout << "Creating a Shared Account" << endl;
    SharedAccount S2 = S1;
    cout << "=====================================================================================" << endl;

    cout << "Withdrawing amount from Shared Account S1" << endl;
    S1.withDraw(500.00);
    cout << "=====================================================================================" << endl;


}

