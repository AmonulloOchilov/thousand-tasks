/*Given three integers A, B, C, verify the following proposition: ―The
number B is between A and C.*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    bool d = a < b && b < c;
    cout<<d;
}