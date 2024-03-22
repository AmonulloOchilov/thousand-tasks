/*Given coordinates x1, y1, x2, y2 of two chessboard squares (as integers in
the range 1 to 8), verify the following proposition: ―Both of the given
chessboard squares have the same color.*/
#include<iostream>
using namespace std;
int main(){
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    bool a = (x1 + y1) % 2 == (x2 + y2) % 2;
    cout<<a;
}