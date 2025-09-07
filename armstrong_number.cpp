#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrongNumber(int n)
{
    int num = n;
    int order = 0;
    int temp = n;
    while (temp)
    {
        order++;
        temp /= 10;
    }
    int sum = 0;
    temp = n;
    while (temp)
    {
        int digit = temp % 10;
        sum += pow(digit, order);
        temp /= 10;
    }
    return sum == num;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isArmstrongNumber(n))
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is not an Armstrong number." << endl;
    return 0;
}
