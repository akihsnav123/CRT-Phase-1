#include<iostream>
using namespace std;

class area {
    public:
    int length;
    int width;
    int radius;
    int side;

    area(){
       cout<<"Value is not provided"<<endl;
    }
    area(int length, int w) {
        this->length = length;
        width =w;
         cout<<"Area is:"<<length*width<<endl;
    }
    area(int s) {
        side =s;
         cout<<"Area is:"<<side*side<<endl;
    }
    area(double r) {
        radius=r;
        cout<<"Area is:"<<radius*3.14<<endl;
    }
    
};
    int main() {
        area a1;
        area a2(5, 10);
        area a3(6);
        area a4(6.2);

        return 0;
    }



