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
        cout << "Name is: "<< name << endl;
        cout << "Account Number: "<< account_number << endl;
        cout << "Balance is: "<< balance << endl;
    }

    void deposit(double amount){
        if(amount>0){
            balance += amount;
        }
    }

    void withdraw(double amount){

        if(amount>0 && amount<=balance){
            balance -= amount;
        }else{
            cout << "INSUFFICIENT BALANCE!" << endl;
        }

    }


};

int main(){
    Bankaccount girdhari("Girdhari lal", 1012021, 1200.00 );
    girdhari.getdetails();
    cout<<endl<<"-----------------------------------------------------------"<<endl;
    girdhari.withdraw(200);
    girdhari.getdetails();
    cout<<endl<<"-----------------------------------------------------------"<<endl;
    girdhari.deposit(500);
    girdhari.getdetails();
    cout<<endl<<"-----------------------------------------------------------"<<endl;

}