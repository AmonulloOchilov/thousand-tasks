/*Given two real numbers x, y, verify the following proposition: ―The
point with coordinates (x, y) is in the second coordinate quarter.*/
#include<iostream>
using namespace std;
int main(){
    int x, y;
    cin>>x>>y;
    bool c = (x < 0) && (y > 0);
    cout<<c;
}