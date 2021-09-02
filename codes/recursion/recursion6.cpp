#include <iostream>
#include <string>
using namespace std;

// Check palindrome or not
// T(n) = O(n) and Auxilary Space = O(n)

bool checkPalindrome(string s, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    if (s.length() == 0 | s.length() == 1)
    {
        return true;
    }
    if (s[start] == s[end])
    {
        return checkPalindrome(s, start + 1, end - 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cout << "Enter a string to check if it is palindrome" << endl;
    cin >> s;
    int n = s.length();
    if (checkPalindrome(s, 0, n - 1))
    {
        cout << "The string " << s << " is palindrome" << endl;
    }
    else
    {
        cout << "The string " << s << " is not palindrome" << endl;
    }
    return 0;
}