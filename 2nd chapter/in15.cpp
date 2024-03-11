//A three-digit integer is given. Output an integer obtained from the given
//one by exchange a tens digit and a hundreds digit (for example, 123 will be
//changed to 213).
#include<iostream>
using namespace std;
int main(){
    int a = 0;
    cin>>a;
    int d = a%10;
    int c = a/10%10;
    int b = a/100;
    
    cout<<c<<b<<d;
}