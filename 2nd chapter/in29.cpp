#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int d = (a/c)*(b/c); 
    int e = (a*b)-(d * c*c);
    cout<<d<<" "<<e;

}