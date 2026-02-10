/*
4. Create a CricketPlayer class with attributes:
   - name
   - jerseyNumber
   - battingAverage

   Requirements:
   - Parameterized constructor using this pointer
   - improveAverage(runs) → increase average, return object (method chaining)
   - playMatch(runsScored) → update batting average
   - displayPlayerStats() → show player info
   - Test with players: Babar Azam, Muhammad Rizwan, Saim Ayub
*/

#include"iostream"
using namespace std;

class CricketPlayer{
private:
   string name;
   double jerseyNumber;
   double BattingAverage;

public:
   int runs, runsScored;
   double average;

   CricketPlayer(string name, double jerseyNumber, double BattingAverage){
      this->name = name;
      this->jerseyNumber = jerseyNumber;
      this->BattingAverage = BattingAverage;
   }

   double improveAverage(int r){
      average = runsScored/r;
      return average;
   }

   

};

int main(){

}