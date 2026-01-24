/*
Your Turn (IMPORTANT PRACTICE)

Create BankAccount:

private: balance

constructor

deposit() (no negative)

withdraw() (no overdraft)

showBalance()
*/

#include"iostream"
using namespace std;

class BankAccount{
    double balance;

public:
    BankAccount(double balance){
        this->balance = balance;
    }

    void deposit(double amount){
        if(amount>0){
            balance += amount;
            cout<<"Amount deposited: "<<amount<<endl;

        }
    }

    void withdraw(double amount){
        if(amount>=0 && amount<=balance){
            balance -= amount;
            cout<<"Amount withdrawn: "<<amount<<endl;
        }else{
            cout<<"Insufficient balance!"<<endl;
        }
    }

    void showbalance(){
        cout<<"Current Balance: "<<balance<<endl;
    }

};


int  main(){
    BankAccount B1(1000.00);
    cout<<"------------------------------------"<<endl;
    B1.showbalance();
    
}
