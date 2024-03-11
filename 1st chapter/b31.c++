//A Fahrenheit temperature T is given. Convert it into a centigrade
//temperature. The centigrade temperature TC and the Fahrenheit temperature TF
//are connected as: TC = (TF − 32)·5/9.

#include<iostream>
using namespace std;
int main(){
    float tf = 0;
    cin>>tf;
    float tc = (tf - 32)*5/9;
    cout<<tc;
}