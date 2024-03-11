//An integer greater than 999 is given. Using one operator of integer
//division and one operator of taking the remainder find a thousands digit of the
//given integer.
#include<iostream>
using namespace std;
int main(){
    int a = 0;
    cin>>a;
    int b = (a/1000)%10;
    cout<<b;

}