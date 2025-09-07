#include <iostream>
using namespace std;

bool isOddNumber(int n)
{
    return n % 2 != 0;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isOddNumber(n))
        cout << n << " is an Odd number." << endl;
    else
        cout << n << " is not an Odd number." << endl;
    return 0;
}
