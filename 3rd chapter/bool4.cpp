/*Given two integers A and B, verify the following proposition: ―The
inequalities A > 2 and B ≤ 3 both are fulfilled‖
.*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    bool c = a>2;
    bool d = b <= 3;
    cout<<c<<endl<<d;
}