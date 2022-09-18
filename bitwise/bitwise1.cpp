#include <iostream>
using namespace std;

int main()
{
    int i , j ;
    i = 3; // 011
    j = 6; // 110
    cout<<(i&j)<<endl; // 010 : 2
    cout<<(i|j)<<endl; // 111 : 7
    cout<<(i^j)<<endl; // 101 : 5

    return 0;
}