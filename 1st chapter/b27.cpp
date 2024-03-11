//Дано число A. Вычислить A8, используя вспомогательную перемен-ную 
//и три операции умножения. Для этого последовательно находить A2,
//A4, A8. Вывести все найденные степени числа A.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a = 0, b, c, d;
    cin>>a;
    b = a * a;
    c = a * pow(a, 3);
    d = a * pow(a, 7);
    cout<<b<<endl<<c<<endl<<d;
}