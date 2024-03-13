/* Given two integers A and B, verify the following proposition: ―The
inequality A ≥ 0 is fulfilled or the inequality B < −2 is fulfilled‖ */
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    bool c = a >= 0;
    bool d = b < -2;
    cout<<c<<endl<<d;
}