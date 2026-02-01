/*
2. Create a Circle class with the following member variables:
   - radius (double)
   - pi (double initialized to 3.14159)

   Member functions:
   - setRadius()
   - getRadius()
   - getArea()           -> area = pi * radius * radius
   - getDiameter()       -> diameter = radius * 2
   - getCircumference()  -> circumference = 2 * pi * radius

   Write a program that prompts the user for radius,
   creates a Circle object, and displays area, diameter,
   and circumference.
*/

#include"iostream"
using namespace std;

class Circle{
private:
   double radius;
   const double pi = 3.14159;

public:
   void setRadius(double r){
      radius = r;
   }
   double getRadius(){
      return radius;
   }

   double getArea(){
      return pi * radius * radius;
   }
   double getDiameter(){
      return radius * 2;
   }
   double getCircumference(){
      return 2 * pi * radius;
   }
   void Display(){
      cout<<"Radius        : "<<radius<<""<<endl;
      cout<<"Pi            : "<<pi<<""<<endl;
      cout<<"Area          : "<<getArea()<<""<<endl;
      cout<<"Diameter      : "<<getDiameter()<<""<<endl;
      cout<<"Circumference : "<<getCircumference()<<""<<endl;
      
   }

};

int main(){
   Circle Circle1;
   double radius;
   cout<<"Enter Radius  : ";
   cin>>radius;

   Circle1.setRadius(radius);
   Circle1.Display();
   
}