#include <iostream>
#include <vector>

using namespace std;

int findSquareRoot(int n){
    int l = 0 ;
    int h = n;
    int ans = -1;
    while(l<=h){
        int mid = l+(h-l)/2;
        if(mid*mid == n){
            return mid;
        }
        else if(mid*mid>n){
            h = mid-1;
        }
        else{
            l = mid+1;
            ans = mid;
        }
    }
    return ans;
}

int main()
{
    int n = 36;
    cout<<findSquareRoot(n)<<endl;
    return 0;
}