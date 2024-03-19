/*Given a four-digit integer, verify the following proposition: ―The
number is read equally both from left to right and from right to left.*/
#include<iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    bool e = (a == d) && (b == c);
    cout<<e;
}