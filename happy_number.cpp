#include <iostream>
#include <set>
using namespace std;

bool isHappyNumber(int n)
{
    set<int> seen;
    while (n != 1 && seen.find(n) == seen.end())
    {
        seen.insert(n);
        int sum = 0;
        while (n)
        {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        n = sum;
    }
    return n == 1;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isHappyNumber(n))
        cout << n << " is a Happy number." << endl;
    else
        cout << n << " is not a Happy number." << endl;
    return 0;
}
