#include <iostream>
#include <cmath>
using namespace std;

bool isKaprekarNumber(int n)
{
    int sq = n * n;
    int digits = 0, temp = n;
    while (temp)
    {
        digits++;
        temp /= 10;
    }
    int pow10 = (int)pow(10, digits);
    int right = sq % pow10;
    int left = sq / pow10;
    return (left + right) == n;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isKaprekarNumber(n))
        cout << n << " is a Kaprekar number." << endl;
    else
        cout << n << " is not a Kaprekar number." << endl;
    return 0;
}
