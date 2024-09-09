/*The values of two real variables A and B are given. Redistribute the values so
that A and B have the smaller and the larger value respectively. Output the new
values of the variables A and B.*/
#include<iostream>
using namespace std;
int main(){
    double a = 0, b = 0;
    cin>>a>>b;

    if (a>b)
    {
        double c = a;
        a = b;
        b = c;
    }
    cout<<"A: "<<a<<"\n"<<"B: "<<b;
    
}