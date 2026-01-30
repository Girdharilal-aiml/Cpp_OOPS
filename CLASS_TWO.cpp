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
        for(int j=0; j<len1; j++){
            if(copy2[j] != '*' && copy1[j] != ' '){
                remain2++;
            }
        }
    }

    void Display(){
        cout<<"Numbers of letters remain in Name1 : "<<remain1<<""<<endl;
        cout<<"Numbers of letters remain in Name2 : "<<remain2<<""<<endl;

        if((remain1 + remain2)%2==0){
            cout<<"Numbers are compatable!"<<endl;
        }else{
            cout<<"Numbers are not compatable!"<<endl;
        }

    }

};

int main(){
    string name1, name2;
    cout<<"Enter Name1:";
    getline(cin,name1);
    cout<<"Enter Name2:";
    getline(cin,name2);

    NameMatcher Match(name1,name2);
    Match.calculate();
    Match.Display();

}