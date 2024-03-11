#include<iostream>
using namespace std;
int main(){
     float a = 0, b = 0, c = 0, d;
    cin>>a>>b>>c;
    d = a;

    a = c;
    c = b;
    b = d;
    cout<<"A = "<<a<<endl<<"C = "<<c<<endl<<"B = "<<b;
}