/*
4. Design a class StationeryShop that maintains:
   - A list of item names (array of strings)
   - A corresponding list of item prices (array of doubles)

   Create a menu-driven program to:
   - Add items and prices
   - Retrieve list of items
   - Edit item prices
   - View all items with prices

   Also implement receipt generation:
   - Shopkeeper inputs items purchased and quantities
   - Receipt is generated and displayed for the customer
*/

#include"iostream"
using namespace std;

class StationeryShop{
private:
   string* items_name;
   double* items_price;

public:
   int qty;

   void sizeofarray(){
      cout<<"Enter Items quantity: ";
      cin>>qty;
      if(qty<0){
         return;
      }
   }

   


};
