#include<iostream>
#include<cmath>
using namespace std;
int main(){

    float x1 = 0, x2 = 0, x3 = 0, y1 = 0, y2 = 0, y3 = 0;
    cin>>x1>>x2>>x3>>y1>>y2>>y3;

    float a = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    float b = sqrt((x3 - x1)*(x3 - x1) + (y3 - y1)*(y3 - y1));
    float c = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
    float P = a+b+c;

    float HalfPer = (a+b+c)/2;

    float S = sqrt(HalfPer*(HalfPer - a)*(HalfPer - b)*(HalfPer - c));
    cout<<"Perimetr: "<<P<<"\nHalf Perimetr: "<<HalfPer<<"\nSquare: "<<S;
}