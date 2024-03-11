#include <iostream>
using namespace std;
int main(){
    int a = 0,b = 0,c = 0;
    cin >> a>>b>>c;
    int V = 0;
    V = a*b*c;
    int S = 0;
    S = 2*(a*b+b*c+a*c);
    cout << V<< " "<< S;
    return 0;
}