#include<iostream>
using namespace std;
class area {
    private:
    int length;
    int width;
    public:
    void setSides(int l, int w) {
        length = l;
        width = w;
    }
    friend void showArea(area a);

    void showArea(area a) {
        cout << "Area of rectangle: " << a.length * a.width << endl;
    } 
    friend void showPerimeter(area p);

    void showPerimeter(area p) {
        cout << "Perimeter of rectangle: " << 2 * (p.length + p.width) << endl;
    }
};
int main() {
    area a;
    a.setSides(5, 3);
    area a1;
    a1.setSides(4, 2);
    a.showArea(a);
    a1.showArea(a1);
    a.showPerimeter(a);
    a1.showPerimeter(a1);
    return 0;
}