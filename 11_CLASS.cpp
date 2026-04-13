#include "iostream"
using namespace std;

class PaymentProcessor {
    public:
        virtual void processPayment(double amount) = 0;
};

class CreditCard : public PaymentProcessor{ 
    public:
        void processPayment(double amount){
            cout << " Charging $" << amount << "via stripe API....." << endl;
        }
};

class PayPal : public PaymentProcessor{ 
    public:
        void processPayment(double amount){
        }
};

