#include"iostream"
using namespace std;

const int MAX_CAPACITY = 100;

class Book{
private:
    string title;
    string isbn;

    // STATIC DATA MEMBER: Shared by all objects
    static int totalBooksCount;

public:
    Book(string t, string i) : title(t), isbn(i){
        totalBooksCount++;
    }

