/*Given three real numbers, output the minimal value of them.*/
#include<iostream>
using namespace std;
int main(){

    int a= 0, b=0,c=0, min = 0;
    cin>>a>>b>>c;

    min = a;

    if (b<min)
    {
        min = b;
    }if (c<min)
    {
        min = c;
    }
    cout<<min;
    
    
    
    

}