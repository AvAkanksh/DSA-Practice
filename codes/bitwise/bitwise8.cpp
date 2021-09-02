#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// power set using bitwise operators

int main()
{
    string str;
    cout << "Enter a string with all characters unique: " << endl;
    cin >> str;
    int n = str.length();
    // cout<<n<<endl;
    int power_size = pow(2, n);
    for (int i = 0; i < power_size; i++)
    {
        // cout<<i<<endl;
        for (int j = 0; j < n; j++)
        {
            // cout<<i<<endl;
            if ((i & (1<<j)) !=0)
            {
                cout << str[j];
            }
        }
    cout <<""<< endl;
    }
    return 0;
}