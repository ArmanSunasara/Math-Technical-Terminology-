#include <iostream>
using namespace std;

bool isEvenNumber(int n)
{
    return n % 2 == 0;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isEvenNumber(n))
        cout << n << " is an Even number." << endl;
    else
        cout << n << " is not an Even number." << endl;
    return 0;
}
