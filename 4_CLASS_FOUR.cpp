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

    void displayinfo() const{
        cout << "   [Book] " << title << " (ISBN: " << isbn << ")" << endl;
    }

    static int getTotalBooks(){
        return totalBooksCount;
    }

    ~Book(){
        totalBooksCount--;
        cout << "   [System] Destructor called for Book: " << title << endl;
    }

};

// Initialize static member
int Book::totalBooksCount = 0;

class Member {
private: 
    string name;
    int memberID;

public:
    Member(string n, int id) : name(n), memberID(id) {}

    string getName() const{ return name; }
};

class Library {
private:
    string LibraryName;

    // COMPOSITION: Library hold pointers to books it OWN.
    Book* books[MAX_CAPACITY];
    int bookCount;

    // AGGREGATION: Library holds pointers to members it REFERENCES.
    Member* members[MAX_CAPACITY];
    int memberCount;

public:
    Library(string name) : LibraryName(name), bookCount(0), memberCount(0) {}

    void addBook(string title, string isbn){
        if(bookCount < MAX_CAPACITY){
            // We create the book HERE (Composition)
            books[bookCount] = new Book(title, isbn);
            bookCount++;
        }else{
            cout << "Error: Library is full!" << endl;
    }
    }

    void registerMember(Member* m){
        if (memberCount < MAX_CAPACITY){
            // We just store the address (Aggregation)
            members[memberCount] = m;
            memberCount++;
        }else{
            cout << "Error: Member list is full!" << endl;
        }
    }

    void displayDetails() {
        cout << endl <<"=== " << LibraryName << " Status ===" << endl;

        cout << "=== Books Catalog ===" << endl;
        for (int i = 0; i < bookCount; i++){
            books[i]->displayinfo();
        }

        cout << endl <<"--- Registered Members ---" << endl;
        for(int i = 0; i < memberCount; i++){
            cout << "   [Member] " << members[i]->getName() << endl;
        }

        // Accessing Static Function
        cout << endl << "=== System Stats ===" << endl;
        cout << "    Total Books in System (Static): " << Book::getTotalBooks() << endl;
    }
    ~Library(){
        cout << endl <<"[System] Library '" << LibraryName << "' is closing down..." << endl;

        for (int i = 0; i < bookCount; i++){
            delete books[i];
        }
    }
};

int main(){
    // 1. Create Members (Allocated on stack, independent of Library)
    Member Girdhari("Girdhari lal", 101);
    Member mrGLAL("Mr. GLAL", 102);

    cout << "--- Program Start ---" << endl;

    {
        // 2. Create Library
        Library ciytlab("FAST NUCES");

        // 3. Add Books (Library creates them internally -> Composition)
        ciytlab.addBook("Book 1", "921-199212312");
        ciytlab.addBook("Book 2", "921-188212413");

        // 4. Register Members (Passing address -> Aggregation)
        ciytlab.registerMember(&Girdhari);
        ciytlab.registerMember(&mrGLAL);

        ciytlab.displayDetails();

        cout << "\n[System] Existing Library scope block..." << endl;
    }
    // Library Destructor called here automatically!
    // It will delete the Books, but NOT Girdhari or mrGLAL.

    cout << endl <<"--- Back in Main ---" << endl;
    cout << "Do Girdhari and mrGLAL still exist? Yes." << endl;
    cout << "Girdhari's Name: " << Girdhari.getName() << endl;

    // Verify Static count is back to 0 (Books were deleted by Library)
    cout << "Total Books in Systme now: " << Book::getTotalBooks() << endl;

}