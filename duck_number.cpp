#include <iostream>
#include <string>
using namespace std;

bool isDuckNumber(int n)
{
    string s = to_string(n);
    return s.find('0') != string::npos && s[0] != '0';
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isDuckNumber(n))
        cout << n << " is a Duck number." << endl;
    else
        cout << n << " is not a Duck number." << endl;
    return 0;
}
