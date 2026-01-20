#include "iostream"
using namespace std;                    // we use it so we don't have to write std again and again

class Bankaccount{

    string name;                        
    int account_number;
    double balance;

public:

    Bankaccount(){

    }

    Bankaccount(string N, int AN, double B){
        name = N;
        account_number = AN;
        balance = B;
    }

    void getdetails(){
        cout<<endl<<"-----------------------------------------------------------"<<endl;
        cout << "Name is: "<< name << endl;
        cout << "Account Number: "<< account_number << endl;
        cout << "Balance is: "<< balance << endl;
        cout<<endl<<"-----------------------------------------------------------"<<endl;
    }

    void deposit(double amount){
        if(amount>0){
            balance += amount;
        }
    }


};

int main(){
    Bankaccount girdhari("Girdhari lal", 1012021, 1200.00 );
    girdhari.getdetails();
}