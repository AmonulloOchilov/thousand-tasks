//A three-digit integer is given. Find the sum and the product of its digits.
#include<iostream>
using namespace std;
int main(){
    int a = 0;
    cin>>a;
    int b = a/100;
    int c = a/10%10;
    int d = a%10;

    int e = b+c+d;
    int f = b*c*d;
    cout<<e<<endl<<f;
}