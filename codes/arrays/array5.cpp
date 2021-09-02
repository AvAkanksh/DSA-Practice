#include <iostream>
#include <algorithm>
using namespace std;

// Maximum Difference such that arr[i] - a[j] is maximum and i >j

int maxDifference1(int arr[], int n)
{
    cout<<"\nMethod 1 : T(n) = O(n^2)"<<endl;
    int ans = arr[1]-arr[0];
    for(int i = 0; i < n; i++){
        for(int j = i; j <n ; j++){
            ans = max(ans,arr[j]-arr[i]);
        }
    }
    return ans;
}

int maxDifference2(int arr[], int n)
{
    cout<<"\nMethod 2 : T(n) = O(n)"<<endl;
    int ans = arr[1]-arr[0];
    int min_value = arr[0];
    for(int i = 0; i < n; i++){
        ans = max(ans,arr[i]-min_value);
        min_value = min(min_value,arr[i]);
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 7, 1, 9, 5, 12, 4, 5, 6, 7, 8};
    int n = 14;
    cout << "The maximum difference found using Method 1 is : " << maxDifference1(arr, n) << endl;
    cout << "The maximum difference found using Method 2 is : " << maxDifference2(arr, n) << endl;
    return 0;
}