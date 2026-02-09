/*
3. Create a SmartDevice class with attributes:
   - deviceName
   - type
   - status (on/off)

   Requirements:
   - Parameterized constructor → initialize device
   - Destructor → print farewell message when object is destroyed
   - Create and delete objects to test destructor behavior

Create a SmartDevice class to represent your high-tech home gadgets—because
flipping switches manually is so last century. Give it attributes like device name, type
(smart light, robo-vacuum, coffee overlord), and status (on or off). Build a
parameterized constructor to bring these gadgets to life and a destructor that delivers an
emotional farewell message when they meet their inevitable end. Test it by creating and
deleting objects, and enjoy watching each device’s dramatic exit as they "power down"
for the last time.
*/

#include"iostream"
using namespace std;

class SmartDevice{
   string DeviceName;
   string type;
   bool Status;

public:
   SmartDevice(string DeviceName,string type, bool Status){
      this->DeviceName = DeviceName;
      this->Status = Status;
      this->type = type;
   }

   ~SmartDevice(){
    cout << type << " (" << DeviceName << ") is powering down... Goodbye!\n";
   }


};

int main(){

}