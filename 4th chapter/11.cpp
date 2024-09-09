/*The values of two integer variables A and B are given. If the values are not
equal then assign the larger value to each variable, otherwise assign zero value
to each variable. Output the new values of the variables A and B.*/
#include<iostream>
using namespace std;
int main(){
    int a = 0, b = 0;
    cin>>a>>b;

    if (a != b) {
        if (a > b) {
            b = a;
        } else {
            a = b;
        }

        }else{
        a = 0, b = 0;
    }
     cout << "A: " << a << "\n" << "B: " << b << "\n";
    
    }
