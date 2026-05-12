#include<iostream>
using namespace std;

/*int main() {
    for(int i= 1; i<=10; i++) {
        cout<<i<<" ";
            
    }
    cout<<endl;
    return 0;
}
    */
   void print(int n) {
    if(n <= 10) {
        cout<<n<<" ";
        print(n+1);
    }
};
    int main() {
        print(1);
        return 0;
   }