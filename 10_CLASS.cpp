#include"iostream"
using namespace std;

class Rupee{
    private:
        int data;

    public:
        Rupee(int data) : data(data){}

        Rupee operator~(){
            return Rupee(-data);
        }

        Rupee operator+(const Rupee& obj){
            return Rupee(data + obj.data);
        }

        Rupee operator-(Rupee& obj){
            return Rupee(data - obj.data);
        }

        Rupee operator+=(Rupee& obj){
            data += obj.data;
            return *this;
        }

        Rupee operator-=(Rupee& obj){
            data -= obj.data;
            return *this;
        }

        friend ostream& operator<<(ostream& os, Rupee& obj);
};

ostream& operator<<(ostream& os, Rupee& obj){
    os << obj.data;
    return os;
}

int main(){

    Rupee wholesale(20), retail(0);
    retail = wholesale;

    cout << "wholesale Price: " << wholesale << endl;
    cout << "Retail Price: " << retail << endl;

    Rupee discount(5);


}