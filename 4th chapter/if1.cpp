/*An integer is given. If the integer is positive then increase it by 1, otherwise do
not change it. Output the obtained integer.*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    
    if (a>0)
    {
        cout<<a + 1;
    }
    else {
        cout<<a;
    }
} 