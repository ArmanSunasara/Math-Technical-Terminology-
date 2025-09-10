#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, base;
    cout << "Enter value: ";
    cin >> x;
    cout << "Enter base: ";
    cin >> base;
    if (x > 0 && base > 0 && base != 1)
        cout << "Logarithm of " << x << " to base " << base << " is " << log(x) / log(base) << endl;
    else
        cout << "Invalid input." << endl;
    return 0;
}
