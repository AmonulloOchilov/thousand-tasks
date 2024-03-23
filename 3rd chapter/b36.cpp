/*Given coordinates x1, y1, x2, y2 of two chessboard squares (as integers in
the range 1 to 8), verify the following proposition: ―A rook can move from one
square to another during one turn.*/
#include<iostream>
using namespace std;
int main(){
    int x1, x2, y1, y2;
    cin>>x1>>x2>>y1>>y2;
    bool a = ( x1 == x2 || y1 == y2);
    cout<<a; 
}