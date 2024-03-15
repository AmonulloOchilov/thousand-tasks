/*Given three integers A, B, C, verify the following proposition: ―Each of
the numbers A, B, C is positive*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    bool d = (a > 0) && (b > 0) && (c > 0);
    cout<<d;
}