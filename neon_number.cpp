#include <iostream>
using namespace std;

bool isNeonNumber(int n)
{
    int sq = n * n;
    int sum = 0;
    while (sq)
    {
        sum += sq % 10;
        sq /= 10;
    }
    return sum == n;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isNeonNumber(n))
        cout << n << " is a Neon number." << endl;
    else
        cout << n << " is not a Neon number." << endl;
    return 0;
}
