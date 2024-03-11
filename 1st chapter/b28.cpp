//Дано число A. Вычислить A15, используя две вспомогательные пере-менные 
//и пять операций умножения. Для этого последовательно находить
//A2, A3, A5, A10, A15. Вывести все найденные степени числа A.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float a = 0, b, c, d, e, f;
    cin>>a;
    
    b = a * a;
    c = a * a * a;
    d = pow(a, 5);
    e = pow(a, 10);
    f = pow(a, 15);
    
    cout<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f;

}