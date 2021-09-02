#include <iostream>
using namespace std;

// Find if n is a power of 2 or not.
int main()
{
    int n;
    cout << "Enter a number to check it is power of 2 or not:" << endl;
    cin >> n;
    if (n == 0)
    {
        cout << "It is not a power of 2" << endl;
        return 0;
    }
    if (((n) & (n - 1)) == 0)
    {
        cout << "It is a power of 2" << endl;
        return 0;
    }
    cout << "It is not a power of 2" << endl;
    return 0;
}