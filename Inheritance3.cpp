// Multiple Inheritance

#include "iostream"
using namespace std;

class Cricketer{
public:
    int runs;
    string team;
};

class Engineer{
public:
    int experience;
};

class phodu : public Cricketer,Engineer{
public:
    string name;

};

int main(){

}
