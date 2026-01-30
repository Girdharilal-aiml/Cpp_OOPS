#include"iostream"
#include"string"
#include"cctype"
using namespace std;

class NameMatcher{
private:
    string name1;
    string name2;
    int remain1;
    int remain2;

    void To_Upper(string &name){
        for(int i= 0; i<name.length(); i++){
            name[i] = toupper(name[i]);
        }
    }

public:
    NameMatcher(string name1, string name2){
        this->name1 = name1;
        this->name2 = name2;
        remain1 = 0;
        remain2 = 0;
    }

    void calculate(){
        string copy1 = name1;
        string copy2 = name2;

        To_Upper(copy1);
        To_Upper(copy2);

        int len1 = copy1.length();
        int len2 = copy2.length();

        for(int i = 0; i<len1; i++){
            for(int j=0; j<len2; j++){
                if(copy1[i] == copy2[j]){
                    copy1[i] = '*';
                    copy2[j] = '*';
                }
            }
        }

        for(int i=0; i<len1; i++){
            if(copy1[i] != '*' && copy1[i] != ' '){
                remain1++;
            }
        }
        
    }

    

};

int main(){
    string name1, name2;
    
}