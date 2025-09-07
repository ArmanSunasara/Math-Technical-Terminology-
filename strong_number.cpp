#include <iostream>
using namespace std;

int factorial(int n)
{
    int f = 1;
    for (int i = 2; i <= n; ++i)
        f *= i;
    return f;
}

bool isStrongNumber(int n)
{
    int sum = 0, temp = n;
    while (temp)
    {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == n;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isStrongNumber(n))
        cout << n << " is a Strong number." << endl;
    else
        cout << n << " is not a Strong number." << endl;
    return 0;
}
