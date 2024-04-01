/*Three integers are given. Find the amount of positive integers in the input data.*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int positiveCount = 0;

    if (a > 0)
    {
        positiveCount++;
    }
    if (b > 0)
    {
        positiveCount++;
    }
    if (c > 0)
    { 
        positiveCount++;
    }
    

    cout<<positiveCount;
}