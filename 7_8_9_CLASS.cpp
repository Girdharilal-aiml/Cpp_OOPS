#include"iostream"
using namespace std;

class Employee{
protected:
    int id;
    string name;

public:
    Employee(int id, string name) : id(id), name(name) {}

    void logAtt(int hours){
        cout << "Time log: " << hours << " logged " << hours << " hours." << endl;  
    }

    void logAtt(int hours, string pCode){
        cout << "Time log: " << name << " Logged " << hours << " hours on project: " << pCode << "." << endl;
    }

    virtual void reportStatus(){     
        cout << "Staff " << name << " ,ID: " << id << " -General Duties." << endl;
    }
};

class Engineer : virtual public Employee{
protected:
    string language;
public:
    Engineer(int id, string name, string language) : Employee(id, name), language(language) {}

    void reportStatus() override {
        cout << "Engineer " << name << " ,ID: " << id << " - Coding in " << language << "." << endl;
    }
};

class Manager : virtual public Employee{
protected:
    int teamSize;

public:
    Manager(int id, string name, int teamSize) : Employee(id, name), teamSize(teamSize) {}

    void reportStatus() override {
        cout << "Manager " << name << " ,ID: " << id << " - Manages a team of " << teamSize << " members." << endl;
    }
};



