//X kg of chocolates cost A euro and Y kg of sugar candies cost B euro
//(positive numbers X, A, Y, B are given). Find the cost of 1 kg of the chocolates
//and the cost of 1 kg of the sugar candies. Also determine how many times the
//chocolates are more expensive than the sugar candies.
#include<iostream>
using namespace std;
int main(){
    float x = 0, a = 0, y = 0, b = 0, Y;
    cin>>x>>a>>y>>b;
    float c = a/x;
    float d = b/y;
    float f = c / d;
    cout<<"1kg of cho "<<c<<endl<<"1kg of sug "<<d<<endl<<"cho is expen "<<f;
}