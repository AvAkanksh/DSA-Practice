#include <iostream>
#include <algorithm>
using namespace std;

// Stock Buy and Sell

int maxProfit1(int arr[], int n, int start, int end)
{
    if (start >= end)
    {
        return 0;
    }
    int profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (arr[j] > arr[i])
            {
                int curr_profit = arr[j] - arr[i] + maxProfit1(arr, n, start, i - 1) + maxProfit1(arr, n, j + 1, end);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}

int maxProfit2(int arr[], int n)
{
    int profit = 0;

    for(int i = 1 ; i < n; i++){
        if(arr[i]>arr[i-1]){
            profit = profit + arr[i] - arr[i-1];
        }
    }

    return profit;
}

int main()
{
    int arr[] = {1, 5, 3, 8, 12};
    int n = 5;
    cout << "Method 1 : Naive Method" << endl;
    cout << "The maximum profit for the stock market is : " << maxProfit1(arr, n, 0, n - 1) << endl;
    cout << "Method 2 : Efficient Method : T(n) = O(n)" << endl;
    cout << "The maximum profit for the stock market is : " << maxProfit2(arr, n) << endl;
    return 0;
}