#include<iostream>
using namespace std;
int main(){
    float a1 = 0, b1 = 0, c1 = 0, a2 = 0, b2 = 0, c2 = 0;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    float d = a1*b2 - a2*b1;

    float x = (c1*b2 - c2*b1)/d;
    float y = (a1*c2 - a2*c1)/d;
    cout<<x<<endl<<y;
}