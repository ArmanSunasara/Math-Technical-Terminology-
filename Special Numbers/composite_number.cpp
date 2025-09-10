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

bool isCompositeNumber(int n)
{
    return n > 1 && !isPrimeNumber(n);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isCompositeNumber(n))
        cout << n << " is a Composite number." << endl;
    else
        cout << n << " is not a Composite number." << endl;
    return 0;
}
