/*Given real numbers x, y, x1, y1, x2, y2, verify the following proposition:
―The point (x, y) is inside of the rectangle whose left top vertex is (x1, y1), right
bottom vertex is (x2, y2), and sides are parallel to coordinate axes.*/
#include<iostream>
using namespace std;
int main(){
    int x, x1, x2, y, y1, y2;
    cin>>x1>>x>>x2>>y2>>y>>y1;
    bool c = (x1 < x && x < x2 && y2 < y && y < y1);
    cout<<c;
}