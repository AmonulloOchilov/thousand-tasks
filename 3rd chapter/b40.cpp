/*Given coordinates x1, y1, x2, y2 of two chessboard squares (as integers in
the range 1 to 8), verify the following proposition: ―A knight can move from
one square to another during one turn.*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
     int x1, y1, x2, y2;
     cin>>x1>>y1>>x2>>y2;

    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);

    bool a = (dx == 1 && dy == 2) || (dx == 2 && dy == 1);

    cout<<a;
}