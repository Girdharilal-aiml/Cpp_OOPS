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

    FootballPlayer(string name, string pos, int goals) {
        PlayerName = name;
        position = pos;
        goalCount = goals;
    }

    FootballPlayer(string name, string pos = "Midfielder", int goals = 10) {
        PlayerName = name;
        position = pos;
        goalCount = goals;
    }

    FootballPlayer(const FootballPlayer &p) {
        PlayerName = p.PlayerName;
        position = p.position;
        goalCount = p.goalCount;
    }

    void scoreGoal(int goals) {
        goalCount += goals;
    }

    void displayProfile() {
        cout << "Player Name: " << playerName << endl;
        cout << "Position: " << position << endl;
        cout << "Goals: " << goalCount << endl;
        cout << "------------------------" << endl;
    }
};

int main(){
  FootballPlayer p1;
  p1.displayProfile();
  
  FootballPlayer p2("Lionel Messi", "Forward", 820);
  p2.displayProfile();

  FootballPlayer p3("Kevin De Bruyne");
  p3.displayProfile();

  

  return 0;
}