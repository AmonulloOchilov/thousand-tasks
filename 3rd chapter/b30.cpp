/*Given three integers a, b, c that are the sides of a triangle, verify the
following proposition: ―The triangle with sides a, b, c is equilateral.*/
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    
    bool d = a == b && b == c;
    cout<<d;
}