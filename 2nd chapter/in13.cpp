//A three-digit integer is given. Output an integer obtained from the given
//one by moving its left digit to the right side
#include<iostream>
using namespace std;
int main(){
    int a = 0;
    cin>>a;
    int d = a%10;
    int c = a/10%10;
    int b = a/100;
    
    cout<<b<<c<<d;
}