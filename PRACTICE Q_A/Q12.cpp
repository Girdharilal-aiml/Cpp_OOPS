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
#include <limits>
using namespace std;

class StationeryShop{
private:
   string* items_name;
   double* items_price;

public:
   int qty,count=0;

   void sizeofarray(){
      cout<<"Enter Items quantity: ";
      cin>>qty;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      if(qty<0){
         return;
      }else{
         items_name = new string[qty];
         items_price = new double[qty];
      }
   }

   // void get_items_name_price(){
      
   // }


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
            case 1:  Add_Items_and_prices(items_price, items_name); break;
            case 2:  retreive(items_name); break;
            case 3:  edit_price(); break;
            case 4:  view_with_prices(items_price,items_name); break;
            case 5:  receipt(items_price,items_name); break;
            case 6:  delete1(); cout<<"Thank you for shopping"<<endl; break;
            default: cout<<"Invalid input! Try again."<<endl;
         }

      }while(choice!=6);

   };

   void edit_price(){
      string searchname;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout<<"Enter itemname: ";
      getline(cin,searchname);
      bool found = false;
      for(int i=0 ; i<qty;i++){
         if(items_name[i]==searchname){
            found = true;
            cout<<"Item name: "<<items_name[i]<<endl;
            cout<<"Enter Item price: ";
            cin>>items_price[i];
         }
      }
      if(!found){
         cout<<"Item not found!"<<endl;
      }
   }

   void view_with_prices(double items_price[], string items_name[]){
      cout<<"-------------------------------------------------"<<endl;
      for(int i=0 ; i<qty;i++){
         cout<<i<<"."<<"Item name:  "<<items_name[i]<<endl;
         cout<<i<<"."<<"Item price: "<<items_price[i]<<endl;
         cout<<"-------------------------------------------------"<<endl;
      }
   }

   void Add_Items_and_prices(double items_price[], string items_name[]){
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      for(int i=count ; i<qty;i++){
      cout<<"Enter "<<i<<" Item name: ";
      getline(cin,items_name[i]);
      cout<<"Enter Item Price: ";
      count++;
      cin>>items_price[i];
      cout<<endl;
      }
   }

   void retreive(string items_name[]){
      for(int i=0 ; i<qty;i++){
         cout<<i<<"."<<items_name[i]<<endl;
      }
   }

   void receipt(double items_price[], string items_name[]){
      double total = 0;
      for(int i=0 ; i<qty;i++){
         total += items_price[i];
      }

      cout<<"-----------------------------------------"<<endl;
      cout<<"S.No \t Items Name \t Item price"<<endl;
      cout<<"-----------------------------------------"<<endl;
      for(int i=0 ; i<qty;i++){
         cout<<i<<"\t"<<items_name[i]<<"\t"<<items_price[i]<<endl;
      }
      cout<<"-----------------------------------------"<<endl;
      cout<<"Total Items: "<<qty<<"\tTotal Price:  "<<total<<endl;
      cout<<"-----------------------------------------"<<endl;
   }

   void delete1(){
      delete[] items_name;
      delete[] items_price;
   }

};

int main(){
   StationeryShop S1;
   S1.Menu();

}