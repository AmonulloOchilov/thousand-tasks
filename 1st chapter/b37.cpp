//s=∣S−T⋅(V 1+V2)∣
#include<iostream>
using namespace std;
int main(){
    float v1 = 0, v2 = 0, S = 0, t = 0;
    cin>>v1>>v2>>S>>t;
    float s = fabs(S - t*(v1+v2));
    cout<<s; 
}