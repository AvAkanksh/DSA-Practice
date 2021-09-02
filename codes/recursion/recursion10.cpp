#include <iostream>
#include <algorithm>
using namespace std;
// Print all the sub strings of the given string;

void subsets(string s, string curr = "", int i = 0)
{
    if (i == s.length())
    {
        cout << curr <<endl;
        return;
    }
    subsets(s, curr, i + 1);
    subsets(s, curr + s[i], i + 1);
}

int main()
{
    string s;
    cout<<"Enter a string to find all its sub strings :"<<endl;
    cin>>s;
    subsets(s);
    return 0;
}