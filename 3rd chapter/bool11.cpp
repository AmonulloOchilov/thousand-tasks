#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    bool c = (a % 2 == 0) == (b % 2 == 0);
    cout<<c;
}