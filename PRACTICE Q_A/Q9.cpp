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
    BoardMarker(string Company, string color, bool Refillable,bool Ink_Status){
        this->color = color;
        this->Company = Company;
        this->Refillable = Refillable;
        this->Ink_Status = Ink_Status;
    }

    string get_com(){
      return Company;
    }

    string get_color(){
      return color;
    }

    void write(){

      if(Ink_Status){
        cout<<"Proceed with writing."<<endl; 
        Ink_Status = false;
      }else if(!Ink_Status){
        cout<<"Ink Empty! writing is not possible."<<endl; 
      }
    }

    void refill(){

      if(Refillable){
        cout<<"Ink Refilled!"<<endl;
        Ink_Status = 1;
      }else if(!Refillable){
        cout<<"Marker cannot be refilled!"<<endl;
      }  
    }

};

int main(){
    string company1, color1, company2, color2, company3, color3;
    int Ref1, Ref2, Ref3, st1,st2,st3;

    cout<<"Enter pen company name: ";
    getline(cin, company1);
    cout<<"Enter pen color: ";
    getline(cin, color1);
    cout<<"Is pen Refillable?(1-YES,0-NO): ";
    cin>>Ref1;
    cin.ignore();
    cout<<"Is pen ink empty?(1-YES,0-NO): ";
    cin>>st1;
    cin.ignore();
    cout<<endl;

    cout<<"Enter pen company name: ";
    getline(cin, company2);
    cout<<"Enter pen color: ";
    getline(cin, color2);
    cout<<"Is pen Refillable?(1-YES,0-NO): ";
    cin>>Ref2;
    cin.ignore();
    cout<<"Is pen ink empty?(1-YES,0-NO): ";
    cin>>st2;
    cin.ignore();
    cout<<endl;

    cout<<"Enter pen company name: ";
    getline(cin, company3);
    cout<<"Enter pen color: ";
    
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