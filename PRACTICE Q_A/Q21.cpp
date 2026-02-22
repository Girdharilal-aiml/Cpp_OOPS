/*
===========================================
OOP Exam - Question (25 Marks)
===========================================

A bank wants to manage its Accounts.
Every account has: accountNumber, ownerName, and balance.

There are three types of accounts:
  - SavingsAccount   : has an interestRate, 
                       calculateInterest() adds interest to balance
                       Withdrawal is NOT allowed if balance goes below 1000

  - CurrentAccount   : has an overdraftLimit
                       Withdrawal IS allowed even if balance goes to 0
                       BUT cannot exceed overdraftLimit (balance can go negative)

  - FixedAccount     : has a lockPeriod (in months)
                       Withdrawal is NOT allowed at all
                       calculateInterest() gives double the interest of SavingsAccount

------------------------------------------
(a) Design an abstract base class Account with:
    - Constructor to initialize all attributes
    - A pure virtual function withdraw(double amount)
    - A pure virtual function calculateInterest()
    - A virtual function displayInfo() that prints all basic info
    - A virtual destructor

(b) Implement all three derived classes with:
    - Proper constructors (use initializer list)
    - Override withdraw() and calculateInterest() with correct logic
    - Override displayInfo() to first call base displayInfo()
      then print class-specific info

(c) Operator Overloading:
    - Overload the + operator in the base class so that:
      adding two accounts returns the SUM of their balances (return a double)

(d) In main():
    - Create an array of Account* pointers (size 4) — mix of all three types
    - Loop and call displayInfo() on each
    - Try withdrawing from each and print success or failure message
    - Use delete properly

(e) Answer the following:
    - If FixedAccount does not override withdraw(), can you still instantiate it? Why or why not?
    - What is the difference between function overloading and function overriding?
      Give one example of each from this problem.

===========================================
*/

#include"iostream"
using namespace std;

class Account{
protected:
    int accountNumber;
    string OwnerName;
    double balance;

public: 
    Account(int acc, string n, double bal) : accountNumber(acc), OwnerName(n), balance(bal){}

    virtual bool withdraw(double amount) = 0;
    virtual void calculateInterest() = 0;

    virtual void displayInfo(){
        cout << "Account No: " << accountNumber << endl;
        cout << "Owner: " << OwnerName << endl;
        cout << "Balance: " << balance << endl;
    }

    double operator+(Account &other){
        return this->balance + other.balance;
    }

    virtual ~Account(){}
};

class SavingAccount : public Account{
    double interestRate;

public:
    SavingAccount(int acc, string n, double bal, double IR) : Account(acc, n, bal), interestRate(IR) {}
