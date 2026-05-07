#include<iostream>
using namespace std;

class player {
    public:
    string name;
     void setName(string n) {
        name = n;
        }
};
    class cricketer {
        public:
        int runs;
       
        void setRuns(int r) {
            runs = r;
        }
        
    };
    class Indiancricketer : public player , public cricketer {
        public:
        string state;
        void setState( string s){
            state= s;
        }
        void show() {
            cout<<"Name:"<<name<<endl;
            cout<<"Runs:"<<runs<<endl;
            cout<<"State:"<<state<<endl;
        }

    };
    int main(){
        int r1;
        cout<<"Enter runs and state:"<<endl;
        cin>>r1;
        string s1;
        cin>>s1;
        Indiancricketer c1;
        c1.setName("Virat");
        c1.setRuns(r1);
        c1.setState(s1);
        c1.show();
        int r2;
        cout<<"Enter runs and state:"<<endl;
        cin>>r2;
        string s2;
        cin>>s2;
        Indiancricketer c2;
        c2.setName("Dhoni");
        c2.setRuns(r2);
        c2.setState(s2);
        c2.show();

        return 0;
    }