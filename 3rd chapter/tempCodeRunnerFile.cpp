#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    bool d = (a > 0 && b > 0 && c <= 0) || (b > 0 && a <= 0 && c > 0) || (c > 0 && a > 0 && b <= 0);
    cout<<d;
}