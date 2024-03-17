/*Verify the following proposition: ―Among three given integers there is
at least one pair of opposite ones.*/
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    bool d = (a == -b) || (b == -c) || (c == -a) || (a == -c);
    cout<<d;
}