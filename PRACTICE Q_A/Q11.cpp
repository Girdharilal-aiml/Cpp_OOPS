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

class WateBottle{
private:
    string company;
    string color;
    int water_capacity_M_litres;
    double water_capacity_litres;
    
public:

    void get_company_color(string com, string col){
      company = com;
      color = col;
      water_capacity_M_litres = 1000.0;
      water_capacity_litres = water_capacity_M_litres/1000.0;
    }

    string setcompany(){
      return company;
    }
    string setcolor(){
      return color;
    }

    void calculate(double ml){

      if(ml<=water_capacity_M_litres){
        water_capacity_M_litres -= ml;
        water_capacity_litres = water_capacity_M_litres/1000.0;
      }else if(ml<0){
        cout<<"Invalid Input";
        return;
      }else{
        cout<<"Invalid Input";
        return;
      }

    }

    

};

int main(){
    
}