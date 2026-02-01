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
         cout<<"1.Add Items and prices"<<endl;
         cout<<"2.Retrieve list of items"<<endl;
         cout<<"3.Edit item prices"<<endl;
         cout<<"4.View all items with prices"<<endl;
         cout<<"5.Reciept"<<endl;
         cout<<"6.Exit"<<endl;
         cout<<"Enter your choice: ";
         cin>>choice;
         switch(choice){
            case 1:  Add_Items_and_prices(items_price, items_name);
            case 2:  retreive(items_name);
            case 3:  edit_price();
            case 4:  view_with_prices(items_price,items_name);
            case 5:  receipt(items_price,items_name);
            case 6:  cout<<"Thank you for shopping"<<endl;
            default: cout<<"Invalid input! Try again."<<endl;
         }

      }while(choice!=6);

   };

   void edit_price(){
      string searchname;
      bool found = false;
      for(int i= 0; i<qty; i++){
         if(items_name[i]==searchname){
            found = true;
            cout<<"Item name: "<<items_name<<endl;
            cout<<"Enter Item price: ";
            cin>>items_price[i];
         }
      }
      if(!found){
         cout<<"Item not found!"<<endl;
      }
   }

   

   

   

   

};
