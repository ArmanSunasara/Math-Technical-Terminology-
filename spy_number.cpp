#include <iostream>
using namespace std;

bool isSpyNumber(int n)
{
    int sum = 0, prod = 1, temp = n;
    while (temp)
    {
        int d = temp % 10;
        sum += d;
        prod *= d;
        temp /= 10;
    }
    return sum == prod;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isSpyNumber(n))
        cout << n << " is a Spy number." << endl;
    else
        cout << n << " is not a Spy number." << endl;
    return 0;
}
