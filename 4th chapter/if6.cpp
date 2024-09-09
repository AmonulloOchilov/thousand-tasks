/*Given two real numbers, output the larger value of them.*/
#include<iostream>
using namespace std;
int main(){
    double x = 0, y = 0;
    cin>>x>>y;
    if (x>y)
    {
        cout<<"The larger value is: "<<x;
    }else{
        cout<<"The larger value is: "<<y;
    }
    
}