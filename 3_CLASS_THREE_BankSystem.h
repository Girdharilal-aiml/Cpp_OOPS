// BankSystem.h
// #ifndef MY_HEADER
// #define MY_HEADER

#pragma once
#include"iostream"
using namespace std;

class SharedAccount{
    public:
    double* balance;

    SharedAccount(double bal){
        balance = new double(bal);
        cout << "[Shallow] Shared Account Created..." << endl;
    }
    SharedAccount(SharedAccount &obj){
        balance = obj.balance;
    }
    void withDraw(double amount){
        if(amount > 0 && amount <= *balance){
            *balance -= amount;
            cout << "[Shallow] Amount Withdrawn Successfully..." << endl;
        }
        else{
            cout << "Invalid Amount: " << endl;
        }
    }
    void displayDetails(){
        cout << "[Shallow] Balance: " << *balance << endl;
        cout << "[Shallow] Address: " << balance << endl;
    }
};

class SecureAccount{
    public:
    double* balance;

    
    
};
//#endif