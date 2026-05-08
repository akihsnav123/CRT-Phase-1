#include<iostream>
using namespace std;

class player{
    public:
    virtual void show() {
        cout<<"This is player class"<<endl;
}
};
class cricketer : public player {
    public:
    void show() {
        cout<<"This is cricketer class"<<endl;
    }
    };
    int main() {
        
        cricketer c1;
        c1.show();
    } 
