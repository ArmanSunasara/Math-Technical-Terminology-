#include <iostream>
using namespace std;

bool isPalindromeNumber(int n)
{
    int rev = 0, temp = n;
    while (temp)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPalindromeNumber(n))
        cout << n << " is a Palindrome number." << endl;
    else
        cout << n << " is not a Palindrome number." << endl;
    return 0;
}
