//A file size is given in bytes. Find the amount of full Kbytes of this size
//(1 K = 1024 bytes). Use the operator of integer division.
#include<iostream>
using namespace std;
int main(){
    float b = 0;
    cin>>b;
    float k = b/1024;
    cout<<k;
}