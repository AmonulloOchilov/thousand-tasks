/*Given three real numbers, output the value between the minimum and the
maximum.*/
#include<iostream>
using namespace std;
int main(){
int a = 0, b = 0, c = 0, mid = 0;

    cin>>a>>b>>c;

    if ((a <= b && b <= c) || (c <= b && b <= a))
    {
        mid = b;
    }else if ((b <= a && a <= c) || (c <= a && a <= b))
    {
        mid = a;
    }else{
        mid = c;
    }
    
    

    cout<<mid;
}