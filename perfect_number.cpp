#include <iostream>
using namespace std;

bool isPerfectNumber(int n)
{
    if (n < 2)
        return false;
    int sum = 1;
    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPerfectNumber(n))
        cout << n << " is a Perfect number." << endl;
    else
        cout << n << " is not a Perfect number." << endl;
    return 0;
}
