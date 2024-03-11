#include<iostream> 
using namespace std;

int main() {
    float L = 0, π = 3.14;
    cin >> L;
    float R = L / (2 * π);
    float S = π * R * R;
    cout << "Radius (R): " << R << endl;
    cout << "Area (S): " << S << endl;
    return 0;
}