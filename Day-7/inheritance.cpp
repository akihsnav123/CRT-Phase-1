#include<iostream>
using namespace std;

class player {
    public:
    string name;
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
    int main(){
        int r;
        cin>>r;
        cricketer c1;
        c1.setName("Virat");
        c1.setRuns(r);
        c1.show();
        cricketer c2;
        c2.setName("Dhoni");
        c2.setRuns(r);
        c2.show();


        return 0;
    }