// A centigrade temperature T is given. Convert it into a Fahrenheit
//temperature. The centigrade temperature TC and the Fahrenheit temperature TF
//are connected as: TC = (TF − 32)·5/9. °F = °C × (9/5) + 32
#include<iostream>
using namespace std;
int main(){
    float tc = 0;
    cin>>tc;
    float tf = (tc * 9/5) + 32;
    cout<<tf;
}