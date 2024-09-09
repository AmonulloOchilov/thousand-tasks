/*Given two real numbers, output the larger value and then the smaller value of
them.*/
#include<iostream>
using namespace std;
int main(){
    double x = 0, y = 0;
    cin>>x>>y;
    if (x>y)
    {
        cout<<"Larger value is: "<<x<<"\n";
    }else{
        cout<<"Larger value is: "<<y<<"\n";
    }if (x<y)
    {
        cout <<"Smaller value: " << x;
    }else{
        cout <<"Smaller value: " << y;
    }
    
}