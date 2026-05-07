#include<iostream>
using namespace std;
class Cricketer{ 
    string name;
    int runs; 
    
    public:
    Cricketer(string name, int r) {
       this->name = name;
        runs = r;
    }
    //copy constructor
    Cricketer(const Cricketer &c) {
        this->name = c.name;
        runs = c.runs;
    }
    void display() {
        cout<<"Name:"<<name<<endl;
        cout<<"Runs:"<<runs<<endl;
    }
};
int main() {
    Cricketer c1("Virat", 1200);
    Cricketer c2(c1); // Using copy constructor
    c1.display();
    c2.display();
    return 0;
}