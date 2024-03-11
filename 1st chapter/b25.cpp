//Given an independent variable x, find the value of a function
//y = 3x^6− 6x^2− 7.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float x = 0;
    cin>>x;
    float y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    cout<<y;
}