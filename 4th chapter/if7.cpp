/*Given two real numbers, output the order number of the smaller of them.*/
#include<iostream>
using namespace std;
int main(){
    double x = 0, y = 0;
    cin>>x>>y;
    if (x<y)
    {
        cout << 1;
    }else{
        cout << 2;
    }
}