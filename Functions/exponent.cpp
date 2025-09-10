#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double base, exp;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;
    cout << base << " raised to the power " << exp << " is " << pow(base, exp) << endl;
    return 0;
}
