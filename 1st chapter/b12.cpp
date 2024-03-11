#include<iostream>
using namespace std;
int main(){
    float a = 0, b = 0;
    cin >> a>>b;
    float c = 0;
    c = sqrt(a*a+b*b);
    cout <<"Hypotenus:"<< c << endl;
    float P = 0;
    P = a+b+c;
    cout <<"Perimeter:"<< P <<endl;
   
}