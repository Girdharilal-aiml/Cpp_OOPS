/*
5. Create a FootballPlayer class with attributes:
   - playerName
   - position
   - goalCount

   Requirements:
   - Default constructor → "Unknown Player", "Benchwarmer", goals = 0
   - Parameterized constructor → set all values
   - Copy constructor → duplicate player
   - Constructor with default arguments → only playerName required,
     position = "Midfielder", goalCount = 10
   - Create players, update goals, and display profiles
*/

#include"iostream"
using namespace std;

class FootballPlayer{
private:
    string Playername;
    int goalcount;
    string position;
public:
    FootballPlayer(string Playername, int goalcount, string position){
      this->goalcount = goalcount;
      this->Playername = Playername;
      this->position = position;
    }

};

int main(){

  return 0;
}