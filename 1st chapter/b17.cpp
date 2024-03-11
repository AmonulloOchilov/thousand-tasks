//Даны три точки A, B, C на числовой оси. Найти длины отрезков AC и BC и их сумму.
#include<iostream>
using namespace std;
int main(){
    float A = 0, B = 0, C = 0;
    cin>> A>>B>>C;
    float a = fabs(C - A);
    float b = fabs(C - B);
    float c = fabs(a + b);
    cout<<a<<endl<<b<<endl<<c<<endl;
}