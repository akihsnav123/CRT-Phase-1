#include<iostream>
using namespace std;

class student {
    private:
    int rn = 100;

    public:
    string name;
    int age;

    void display() {
        cout<<"Name:" <<name<<endl;
        cout<<"Age:" <<age<<endl;
        cout<<"Roll No:"<<rn<<endl;
        rn++;
    }
    };

    int main() {
        student s1;
        student s2;
         s1.name = "Vanshika";
         s1.age = 21;
         s2.name = "Anjali";
         s2.age = 20;
         s1.display();
         s2.display();
         return 0;

    }
