/*Given coordinates x1, y1, x2, y2 of two chessboard squares (as integers in
the range 1 to 8), verify the following proposition: ―A bishop can move from
one square to another during one turn.*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;

    bool a = (abs(x1 - x2) == abs(y1 - y2));
    cout<<a;
}