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

#include <iostream>
using namespace std;

class WeekDays{
private:
   string Days[7];
   int CurrentDay;

   void fillDays(){
     Days[0] = "Sunday";
     Days[1] = "Monday";
     Days[2] = "Tuesday";
     Days[3] = "Wednesday";
     Days[4] = "Thursday";
     Days[5] = "Friday";
     Days[6] = "Saturday";
   }

public:

   WeekDays(){
     fillDays();
     CurrentDay = 0;
   }

   WeekDays(int day){
     fillDays();
     CurrentDay = day % 7; 
   }

   string getCurrentDay(){
     return Days[CurrentDay];
   }

   string getNextDay(){
     return Days[(CurrentDay + 1) % 7];
   }

   string getPreviousDay(){
     return Days[(CurrentDay + 6) % 7];
   }

   
};

int main(){

   

}
