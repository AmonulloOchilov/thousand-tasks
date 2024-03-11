//X kg of sweet cost A euro. Find the cost of 1 kg and Y kg of the sweets
//(positive numbers X, A, Y are given).
#include<iostream>
using namespace std;
int main(){
    float x = 0, a = 0, Y;
    cin>>x>>a>>Y;
    float y = a/x;
    float t = Y * y;
    cout<<y<<endl<<t;
}