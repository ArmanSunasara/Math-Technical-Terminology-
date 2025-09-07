#include <iostream>
using namespace std;

bool isAutomorphicNumber(int n)
{
    int sq = n * n;
    int temp = n;
    int digits = 0;
    while (temp)
    {
        digits++;
        temp /= 10;
    }
    int lastDigits = sq % (int)pow(10, digits);
    return lastDigits == n;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isAutomorphicNumber(n))
        cout << n << " is an Automorphic number." << endl;
    else
        cout << n << " is not an Automorphic number." << endl;
    return 0;
}
