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
        cout<<"Proceed with writing."<<endl; 
        Ink_Status = 1;
      }else if(iks == 1){
        cout<<"Ink Empty! writing is not possible."<<endl; 
        Ink_Status = 0;
      }
    }

    void refill(){
      int Ref = Refillable;
      cout<<"Is pen Refillable?(1-YES,0-NO): ";
      cin>>Ref;

      if(Ref == 1){
        cout<<"Ink Refilled"<<endl; 
        Ink_Status = 1
      }else if(Ref == 0){
        cout<<"The marker cannot be refilled."<<endl; 
        Ink_Status = 0;
      }
    }

};

int main(){
    string com1,col1;
    cout<<"Enter pen company name: ";
    getline(cin, com1);
    cout<<"Enter pen color: ";
    getline(cin, col1);
    string company1, color1;
    company1 = com1;
    color1 = col1;
    BoardMarker BM1(company1, color1);

    BM1.set_info(company1,color1);
    cout<<BM1.get_com()<<" "<<BM1.get_color()<<endl;


}