#include <iostream>
using namespace std;

bool isPrimeNumber(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPrimeNumber(n))
        cout << n << " is a Prime number." << endl;
    else
        cout << n << " is not a Prime number." << endl;
    return 0;
}
