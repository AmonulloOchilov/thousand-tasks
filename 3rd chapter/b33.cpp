/*Given three integers a, b, c, verify the following proposition: ―A triangle
with the sides a, b, c exists.*/
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    bool d = (a + b > c) && (a + c > b) && (b + c > a);
    cout<<d;
}