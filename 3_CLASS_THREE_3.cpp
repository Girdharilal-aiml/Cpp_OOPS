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

    cout << "Checking the balance of Shared Account S2 after withdrawal from Shared Account S1" << endl;
    S2.displayDetails();
    cout << "=====================================================================================" << endl;

    cout << "Deep Copy Constructor" << endl;
    cout << "=====================================================================================" << endl;
    SecureAccount S3(1000.00);

    cout << "Displaying Balance of Account S3" << endl;
    S3.displayDetails();
    cout << "=====================================================================================" << endl;

    cout << "Creating a Secure Account" << endl;
    SecureAccount S4 = S3;
    cout << "=====================================================================================" << endl;

    cout << "Withdrawing amount from Secure Account S3" << endl;
    S3.withDraw(500.00);
    cout << "=====================================================================================" << endl;

    cout << "Checking the balance of Secure Account S3 after withdrawl" << endl;
    S3.displayDetails();
    cout << "=====================================================================================" << endl;
    

}

