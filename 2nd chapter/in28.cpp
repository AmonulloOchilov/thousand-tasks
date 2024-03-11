#include<iostream>
using namespace std;
int main(){
    int k, n;
    cin>>k>>n;
    int m = (k+n-2)%7+1;
    cout<<m;
}