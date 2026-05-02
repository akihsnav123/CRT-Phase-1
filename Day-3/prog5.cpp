/*WAP in cpp that takes an input from the user and print 
the fibonacci series*/
#include<iostream>
using namespace std;

int main() {
    int n, t1=0, t2=2,t3=0;
    cout<<"Enter the number of terms:"<<" ";
    cin>>n;
    cout<<"Fibonacci series:";
    for(int i=0;i<=n;++i) {
        if(i==1) {
            cout<<t1<<", ";
            continue;
        }
        if(i==2) {
            cout<<t2<<",";
            continue;
        }
        t3= t1 + t2;
        t1 = t2;
        t2 =t3;
        cout << t3 << (i == n ? "" : ", ");
    }
    return 0;
}