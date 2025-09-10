#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "LCM of " << a << " and " << b << " is " << lcm(a, b) << endl;
    return 0;
}
