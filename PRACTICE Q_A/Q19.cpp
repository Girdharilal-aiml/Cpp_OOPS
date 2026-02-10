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
    string PlayerName;
    int goalCount;
    string position;
public:

    FootballPlayer() {
      PlayerName = "Unknown Player";
      position = "Benchwarmer";
      goalCount = 0;
    }
    
    FootballPlayer(string Playername){
      this->goalCount = 10;
      this->PlayerName = PlayerName;
      this->position = "Midfielder";
    }

};

int main(){
  

  return 0;
}