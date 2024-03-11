//Найти расстояние между двумя точками с заданными координатами (x1, y1) и (x2, y2) на плоскости. Расстояние вычисляется по формуле
//q(x2 − x1)2 + (y2 − y1)2.
#include<iostream>
using namespace std;
int main(){
    float x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    cin>>x1>>x2>>y1>>y2;
    float P = sqrt(fabs((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)));
    cout<<P;

}