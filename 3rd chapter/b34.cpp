/*Given coordinates x, y of a chessboard square (as integers in the range 1
to 8), verify the following proposition: ―The chessboard square (x, y) is white.
Note that the left bottom square (1, 1) is black.*/
#include<iostream>
using namespace std;
int main(){
    int x, y;
    cin>>x>>y;
    bool a = (x + y) % 2 == 0;
    cout<<a;
}