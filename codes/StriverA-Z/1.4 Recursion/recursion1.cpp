#include <iostream>
#include <vector>

using namespace std;

void f(int i , int n){
    if (i>n)
        return;
    cout<<i<<". Akanksh"<<endl;
    f(i+1,n);
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin >> n;
    f(1,n);

    return 0;
}