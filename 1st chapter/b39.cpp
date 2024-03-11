//x1, 2 = (−B ± (D)1/2)/(2·A),
//where D = B2− 4·A·C is a discriminant.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a = 0, b = 0, c = 0;
    cin>>a>>b>>c;
    float d = b * b - 4 * a * c;
    float x1 = (-b + sqrt(d))/(2*a);
    float x2 = (-b - sqrt(d))/(2*a);
    cout<<x1<<endl<<x2;
}