/*Three real numbers A, B, C are given (A is not equal to 0). By means of 
a discriminant D = B2 − 4·A·C, verify the following proposition: 
―The quadratic equation A·x2 + B·x + C = 0 has real roots.*/
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int d = b*b - 4 * a * c;
    bool e = d > 0;
    cout<<e;

}