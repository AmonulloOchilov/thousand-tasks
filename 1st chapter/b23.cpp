//Variables A, B, C are given. Change values of the variables by moving the
//given value of A into the variable B, the given value of B into the variable C,
//and the given value of C into the variable A. Output the new values of A, B, C.
#include<iostream>
using namespace std;
int main(){
    float a = 0, b = 0, c = 0, d;
    cin>>a>>b>>c;
    d = a;

    a = b;
    b = c;
    c = d;
    cout<<"A = "<<a<<endl<<"B = "<<b<<endl<<"C = "<<c;
}