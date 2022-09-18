#include <iostream>
#include <algorithm>
using namespace std;

// Maximum Sub array sum (Kadane's Algorithm)

int maxSubArraySum(int arr[], int n)
{
    int ans = arr[0];
    int ending = arr[0];
    for (int i = 1; i < n; i++)
    {
        ending = max(ending+arr[i],arr[i]);
        ans = max(ans, ending);
    }
    return ans;
}

int main()
{
    int arr[] = {1,2,-5,1, -2,3, 4,10,-9,-5, 5, 6, 7};
    int n = 13;
    // int arr[] = {-1,-2,-3,-4,-5,-6};
    // int n =6;
    cout<<"The sum of the maximum sub array is : "<<maxSubArraySum(arr,n)<<endl;
    return 0;
}