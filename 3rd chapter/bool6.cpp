/*Given three integers A, B, C, verify the following proposition: ―The
double inequality A < B < C is fulfilled.*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    bool d = a < b;
    bool e = b < c;
    cout<<d<<endl<<e;
}