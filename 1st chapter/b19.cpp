#include<iostream>
using namespace std;
int main(){
    float x1 = 0, x2 = 0, y1 = 0, y2 = 0, P, S;
    cin>>x1>>x2>>y1>>y2;
    float A = fabs(x2-x1);
    float B = fabs(y2-y1);
    P = fabs(2* (A+B));
    S = fabs(A*B);
    cout<<P<<" "<<S;
}