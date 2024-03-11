#include<iostream>
using namespace std;
int main(){
    cout<<"R1 must be greater then R2"<<endl;
    float R1 = 0, R2 = 0;
    cin>>R1>>R2;
    float π = 3.14, S1, S2, S3;
    S1 = π*(R1)*(R1);
    S2 = π*(R2)*(R2);
    S3 = S1 - S2;
    cout<<"First S: "<<S1<<" Second S: "<<S2<<" Third S: "<<S3;



}