#include <iostream>
using namespace std;

bool isBuzzNumber(int n)
{
    return n % 7 == 0 || n % 10 == 7;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isBuzzNumber(n))
        cout << n << " is a Buzz number." << endl;
    else
        cout << n << " is not a Buzz number." << endl;
    return 0;
}
