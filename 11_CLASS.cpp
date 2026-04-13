#include "iostream"
using namespace std;

class PaymentProcessor {
    public:
        virtual void processPayment(double amount) = 0;
};

class CreditCard : public PaymentProcessor{ 
};


