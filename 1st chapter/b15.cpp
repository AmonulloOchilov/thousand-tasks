//Дана площадь S круга. Найти его диаметр D и длину L окружности, ограничивающей этот круг, учитывая, что L = 2·π·R, S = π·R2.
// В качестве значения π использовать 3.14.
#include<iostream>
using namespace std;
int main(){
    float S = 0, π = 3.14, R, L, D;
    cin>>S;
    R = sqrt(S/π);
    D = 2*R;
    L = 2*π*R;
    cout<<"Diametr: "<<D<<endl<<"Length: "<<L;

}