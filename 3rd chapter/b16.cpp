/*Given a positive integer, verify the following proposition: ―The integer
is a two-digit even number.*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    bool b = (a > 9) && (a < 100) && a % 2 == 0;
    cout<<b;
}