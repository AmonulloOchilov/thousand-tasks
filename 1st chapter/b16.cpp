//Найти расстояние между двумя точками с заданными координатами x1 и x2 на числовой оси: |x2 − x1|
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float X1 = 0, X2 = 0;
    cin>>X1>>X2;
    float Distance = fabs(X2-X1);
    cout<<Distance;
}