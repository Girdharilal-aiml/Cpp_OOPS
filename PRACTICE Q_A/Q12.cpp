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

   void set_items_name_price(string* itn, double* itp){
      items_name = itn;
      items_price = itp;
      items_name = new string[qty];
      items_price = new double[qty];
   }

   void Menu(){
      sizeofarray();
      Add_Items_and_prices(items_price, items_name);
      int choice;
      do{
         

      }while(choice!=6);

   };

   

   

   

   

   

};
