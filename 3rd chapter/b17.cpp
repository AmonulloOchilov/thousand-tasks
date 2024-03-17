/*Given a positive integer, verify the following proposition: ―The integer
is a three-digit odd number.*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    bool b = (a > 99) && (a < 1000) && a % 2 != 0;
    cout<<b;
}