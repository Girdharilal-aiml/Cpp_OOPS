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

};

int main(){
    Bankaccount Girdhari("Girdhari lal", 1012021, 1200.00 );
}