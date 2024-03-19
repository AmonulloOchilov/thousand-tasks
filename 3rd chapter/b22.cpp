/*Given a three-digit integer, verify the following proposition: ―All digits
of the number are in ascending or descending order.*/
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    bool as = (a <= b) && (b <= c);
    bool d = (a >= b) && (b >= c);
    bool aad = as || d;
    cout<<aad;
}
