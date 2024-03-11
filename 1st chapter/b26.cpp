//Given an independent variable x, find the value of a function
//y = 4(x−3)^6− 7(x−3)^3 + 2.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float x = 0;
    cin>>x;
    float y = 4 * pow((x-3), 6) - 7 * pow((x-3), 3)+2;
    cout<<y;
}