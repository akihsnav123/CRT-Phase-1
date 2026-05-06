#include<iostream>
using namespace std;

class student {

    public:
    string name;
    int rn;

     student() {
        name= "Riya";
        rn = 10;
    }
    void show() {
        cout<<"Name:" <<name<<endl;
        cout<<"Roll no: "<<rn<<endl;
    }
    };
    int main () {

        student s1;
        s1.show();
        return 0;
    }