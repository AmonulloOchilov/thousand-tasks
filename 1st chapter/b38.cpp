//Solve a linear equation A·x + B = 0 with given coefficients A and B (A is not equal to 0).
#include<iostream>
using namespace std;
int main(){
    cout<<"A mustnt be 0"<<endl;
    float a = 0, b = 0;
    cin>>a>>b;
    float x= - b/a;
    cout<<x;

}