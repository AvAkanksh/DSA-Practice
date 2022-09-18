#include<bits/stdc++.h>

using namespace std;

void maximumSubarraySum(vector<int> vec){
    int sum = 0; 
    int maxi = INT_MIN;
    for(auto x : vec){
        sum+=x;
        maxi = max(maxi,sum);
        if(sum<0){
            sum = 0;
        }
    }
    cout<<"The maximum Subarray Sum for the given array is : "<<maxi<<endl;
}

int main(){

    vector<int> vec = {-1,3,4,-5,6,4,5,6,-7,5,9,-3,2,1};
    maximumSubarraySum(vec);
    return 0;
}