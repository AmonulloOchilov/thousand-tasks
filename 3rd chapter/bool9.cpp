/*Given two integers A and B, verify the following proposition: ―At least
one of the numbers A and B is odd.*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    bool c = a % 2 != 0 || b % 2 != 0;
    cout<<c;
}