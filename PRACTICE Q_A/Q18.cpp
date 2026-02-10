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

#include <iostream>
using namespace std;

class CricketPlayer {
private:
    string name;
    int jerseyNumber;
    double battingAverage;
    int totalRuns;
    int matches;

public:

    CricketPlayer(string name, int jerseyNumber, double battingAverage) {
        this->name = name;
        this->jerseyNumber = jerseyNumber;
        this->battingAverage = battingAverage;

        totalRuns = battingAverage;
        matches = 1;
    }

    CricketPlayer& improveAverage(int runs) {
        totalRuns += runs;
        matches++;
        battingAverage = (double) totalRuns / matches;
        return *this; 
    }

    void playMatch(int runsScored) {
        totalRuns += runsScored;
        matches++;
        battingAverage = (double) totalRuns / matches;
    }

    void displayPlayerStats() {
        cout << "Name: " << name << endl;
        cout << "Jersey Number: " << jerseyNumber << endl;
        cout << "Batting Average: " << battingAverage << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Matches Played: " << matches << endl;
        cout << "-------------------------" << endl;
    }
};

int main() {

    CricketPlayer babar("Babar Azam", 56, 50.0);
    CricketPlayer rizwan("Muhammad Rizwan", 16, 48.0);
    CricketPlayer saim("Saim Ayub", 63, 35.0);

    

    return 0;
}
