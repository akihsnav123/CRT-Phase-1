#include<iostream>
using namespace std;
class player {
    public:
    string name;
    int age;
     void setName(string n) {
        name = n;
        }
};
class cricketer : public player {
    public:
    int runs;
   
    void setRuns(int r) {
        runs = r;
    }
    void show() {
        cout<<"Name:"<<name<<endl;
        cout<<"Runs:"<<runs<<endl;
    }
    
};
class footballer : public player {
    public:
    int goals;
   
    void setGoals(int g) {
        goals = g;
    }
    void show() {
        cout<<"Name:"<<name<<endl;
        cout<<"Goals:"<<goals<<endl;
    }
    
};
int main() {
    int r1;
    cout<<"Enter runs:"<<endl;
    cin>>r1;
    cricketer c1;
    c1.setName("Virat");
    c1.setRuns(r1);
    cout<<"Name:"<<c1.name<<endl;
    cout<<"Runs:"<<c1.runs<<endl;

    int g1;
    cout<<"Enter goals:"<<endl;
    cin>>g1;
    footballer f1;
    f1.setName("Messi");
    f1.setGoals(g1);
    cout<<"Name:"<<f1.name<<endl;
    cout<<"Goals:"<<f1.goals<<endl;

     return 0;
}


   