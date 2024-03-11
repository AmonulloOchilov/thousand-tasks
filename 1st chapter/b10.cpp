#include <iostream>
using namespace std;

int main() {
    cout << "Enter two non-zero numbers: ";
    
    float a, b;
    cin >> a >> b;

    float sum = a + b;
    float difference = a - b;
    float quotient = a / b;
    float sum_of_squares = a * a + b * b;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Sum of their squares: " << sum_of_squares << endl;

    return 0;
}