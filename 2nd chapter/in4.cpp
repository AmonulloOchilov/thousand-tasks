//Two positive integers A and B are given (A > B). Segment of length A
//contains the greatest possible amount of inside segments of length B (without
//overlaps). Find the amount of segments B placed on the segment A. Use the
//operator of integer division.
#include<iostream>
using namespace std;
int main(){
    int a = 0, b = 0;
    cin>>a>>b;
    int s = a/b;
    cout<<s;

}