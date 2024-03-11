//A two-digit integer is given. Output an integer obtained from the given one
//by exchange of its digits
#include<iostream>
using namespace std;
int main(){
    int a = 0;
    cin>>a;
    int t = a/10;
    int i = a%10;

    int e = i*10+t;
    cout<<e;
}