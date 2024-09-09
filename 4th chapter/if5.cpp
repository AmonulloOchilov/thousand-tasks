/*Three integers are given. Find the amount of positive and amount of negative
integers in the input data.*/
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int positiveCount = 0, negativeCount = 0;

    if (a > 0)
    {
        positiveCount++;
    }else if (a<0)
    {
        negativeCount++;
    }
    
    if (b > 0)
    {
        positiveCount++;
    } else if (b<0)
    {
        negativeCount++;
    }
    
    if (c > 0)
    { 
        positiveCount++;
    }else if (c<0)
    {
        negativeCount++;
    }
    
    

    cout<<"Amount of Pos int: "<<positiveCount<<"\n"<<"Amount of Neg int: "<<negativeCount;
}