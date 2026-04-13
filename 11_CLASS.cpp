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
            cout << " Routing $" << amount << " through PayPal API....." << endl;
        }
};

class MobileWallet : public PaymentProcessor{ 
    public:
        void processPayment(double amount){
            cout << " Transferring $" << amount << " Via Easypaisa....." << endl;
        }
};

class CheckoutSystem {
    public:
        void checkout(PaymentProcessor* paymentMethod, double amount){
            cout << "Starting Checkout....." << endl;
        }
};
