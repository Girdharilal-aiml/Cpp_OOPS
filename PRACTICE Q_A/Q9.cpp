/*
1. Design a class named BoardMarker with the following attributes:
   - Company (e.g., Dollar)
   - Color (e.g., black, red)
   - Refillable (Boolean – specifies if the marker can be refilled)
   - Ink status (Boolean – indicates whether the ink is empty)

   Implement appropriate getters and setters for these attributes.

   Methods:
   - write():
     Check if the ink is empty before allowing writing.
     If ink is empty, display a message indicating writing is not possible.
     Otherwise, proceed with writing.

   - refill():
     Verify if the marker is refillable.
     If it is, refill the ink and update ink status.
     Otherwise, display a message that the marker cannot be refilled.

   Demonstrate the functionality by creating 3 instances of BoardMarker,
   setting attribute values, and calling the methods.
*/

#include"iostream"
using namespace std;

class BoardMarker{
private:
    string Company;
    string color;
    bool Refillable;
    bool Ink_Status;
public:
    BoardMarker(string Company, string color){
        this->color = color;
        this->Company = Company;
        Refillable = 0;
        Ink_Status = 0;
    }

    void set_info(string PC, string P_col){
        Company = PC;
        color = P_col;
    }

    string get_com(){
      return Company;
    }

    string get_color(){
      return color;
    }

    void write(){
      int iks = Ink_Status;
      cout<<"Is pen ink empty?(1-YES,0-NO): ";
      cin>>iks;

      if(iks == 0){
        cout<<endl;
        cout<<"Proceed with writing."<<endl; 
        cout<<endl;
        Ink_Status = 1;
      }else if(iks == 1){
        cout<<"Ink Empty! writing is not possible."<<endl; 
        cout<<endl;
        Ink_Status = 0;
      }
    }

    void refill(){
      int Refill = Refillable;
      cout<<"Is pen Refillable?(1-YES,0-NO): ";
      cin>>Refill;
      cout<<endl;


      if(Refill == 1){
        cout<<"Ink Refilled"<<endl; 
        cout<<endl;
        Ink_Status = 1;
      }else if(Refill == 0){
        cout<<"The marker cannot be refilled."<<endl; 
        cout<<endl;
        Ink_Status = 0;
      }
    }

};

int main(){
    string com1,col1, com2,col2, com3,col3;
    cout<<"Enter pen company name: ";
    getline(cin, com1);
    cout<<"Enter pen color: ";
    getline(cin, col1);
    cout<<"Enter pen company name: ";
    getline(cin, com2);
    cout<<"Enter pen color: ";
    getline(cin, col2);
    cout<<"Enter pen company name: ";
    getline(cin, com3);
    cout<<"Enter pen color: ";
    getline(cin, col3);
    string company1, color1, company2, color2, company3, color3;
    company1 = com1;
    color1 = col1;
    company2 = com2;
    color2 = col2;
    company3 = com3;
    color3 = col3;

    BoardMarker BM1(company1, color1);
    BoardMarker BM2(company2, color2);
    BoardMarker BM3(company3, color3);


    BM1.set_info(company1,color1);
    BM2.set_info(company2,color2);
    BM3.set_info(company3,color3);

    cout<<"-----------------------------------"<<endl;
    cout<<BM1.get_com()<<" "<<BM1.get_color()<<endl;
    BM1.write();
    BM1.refill();
    cout<<"-----------------------------------"<<endl;
    cout<<BM2.get_com()<<" "<<BM2.get_color()<<endl;
    BM2.write();
    BM2.refill();
    cout<<"-----------------------------------"<<endl;
    cout<<BM3.get_com()<<" "<<BM3.get_color()<<endl;
    BM3.write();
    BM3.refill();
    cout<<"-----------------------------------"<<endl;

}