//The velocity of the first car is V1 km/h, the velocity of the second car is
//V2 km/h, the initial distance between the cars is S km. Find the distance
//between the cars after T hours provided that the distance is increasing. The
//required distance is equal to a sum of the initial distance and the total distance
//covered by the both cars (total distance = time · total velocity).
#include<iostream>
using namespace std;
int main(){
    float v1 = 0, v2 = 0, t = 0;
    cin>>v1>>v2>>t;
    float s = t*v1+t*v2;
    cout<<s;
}