//An integer greater than 999 is given. Using one operator of integer
//division and one operator of taking the remainder find a hundreds digit of the
//given integer.
#include<iostream>
using namespace std;
int main(){
    int a = 0;
    cin>>a;
    int b = (a/100)%10;
    cout<<b;

}