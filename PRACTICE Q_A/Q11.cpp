/*
3. Create a class called WaterBottle with the following attributes:
   - company (made by)
   - color
   - water capacity stored in:
     - liters (l)
     - milliliters (ml)

   Create variables and methods for the class.
   Methods should include getters and setters.

   Add an additional method that:
   - Asks the user how much water was drunk (in ml)
   - Updates the remaining water capacity (both l and ml)

   Demonstrate the functionality in the main method.
*/

#include"iostream"
using namespace std;

class WaterBottle{
private:
    string company;
    string color;
    int water_capacity_M_litres;
    double water_capacity_litres;
    
public:

    void set_company_color(string com, string col, int capa){
      company = com;
      color = col;
      water_capacity_M_litres = capa;
      water_capacity_litres = water_capacity_M_litres / 1000;
    }

    int getcapacity(){
      return water_capacity_M_litres;
    }
    string getcompany(){
      return company;
    }
    string getcolor(){
      return color;
    }

    void calculate(int ml){

      if (ml < 0) {
        cout << "Invalid Input";
        return;
      }
      else if(ml <= water_capacity_M_litres) {
        water_capacity_M_litres -= ml;
        water_capacity_litres = water_capacity_M_litres / 1000.0;
      }
      else{
        cout << "Not enough water!";
        return;
      }

    }

    void Display(){
      cout<<"Company                   : "<<company<<""<<endl;
      cout<<"Color                     : "<<color<<""<<endl;
      cout<<"Water Remaining(l)        : "<<water_capacity_litres<<" l"<<endl;
      cout<<"Water Remaining(ml)       : "<<water_capacity_M_litres<<" ml"<<endl;
    }

};

int main(){
    WaterBottle WB1;
    string com1, col1;
    int mll, capacity;
    cout<<"Enter Company name: ";
    getline(cin,com1);
    cout<<"Enter Color name: ";
    getline(cin,col1);
    cout<<"Water Capacity in ml: ";
    cin>>capacity;
    cin.ignore();
    cout<<"Water drunk in ML: ";
    cin>>mll;

    WB1.set_company_color(com1,col1,capacity);
    WB1.calculate(mll);

    WB1.Display();
}