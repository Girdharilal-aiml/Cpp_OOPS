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
    
};
