/*An integer is given. If the integer is positive then increase it by 1, if the integer is
negative then decrease it by 2, if the integer equals 0 then change it to 10.
Output the obtained integer.*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;

    if (a > 0)
    {
        cout<<a+1;
    }
    else if (a < 0)
    {
        cout<<a - 2;
    }
    else{
        cout<<10;
    }
    
    
}