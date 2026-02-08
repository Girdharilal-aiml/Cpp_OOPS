/*
2. Create a WeekDays class with private data:
   - Days → string array of 7 days (Sunday–Saturday)
   - CurrentDay → integer

   Requirements:
   - Default constructor → fill Days array
   - Parameterized constructor → set CurrentDay, use modulus if >6
   - getCurrentDay() → return today’s name
   - getNextDay() → return tomorrow’s name
   - getPreviousDay() → return yesterday’s name
   - getNthDayFromToday(N) → return day after N days
*/

#include"iostream"
using namespace std;

class WeekDays{
private:
   string* Days;
   int CurrentDay;
public:
   WeekDays(){
      Days = new string[7];
   }
   WeekDays(string Days, int CurrentDays){
      this->CurrentDay = CurrentDay;
      this->Days = Days[];
   }
   int n;
   string getCurrentDay(){
      CurrentDay = Days[n];
      return CurrentDay;
   }



};

int main(){

}