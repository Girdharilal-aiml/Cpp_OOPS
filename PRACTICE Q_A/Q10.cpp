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

class Circuit{
public:
   double radius;
   double pi = 3.14159;

   void setRadius(double r){
      radius = r;
   }
   double getRadius(){
      return radius;
   }

   double getArea(){
      double area;
      area = pi * radius * radius;
      return area;
   }
   double getDiameter(){
      double diameter = radius * 2;
      return diameter;
   }
   double getCircumference(){
      double circumference = 2 * pi * radius;
      return circumference;
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
   Circuit Circle;
   int radius;
   cout<<"Enter Radius: ";
   cin>>radius;

   Circle.setRadius(radius);
   Circle.Display();
   
}