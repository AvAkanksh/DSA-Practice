#include <iostream>
#include <vector>

using namespace std;

int f(int n){
    if(n==1){
        return 1;
    }
    return n+f(n-1);
}

int main()
{
    int n ;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The sum of first "<<n<<" natural numbers is :"<<f(n)<<endl;

    return 0;
}