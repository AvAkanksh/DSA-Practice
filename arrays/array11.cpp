#include<iostream>
#include<algorithm>
using namespace std;

// Longest Even Odd Subarray

int longestEvenOdd(int arr[],int n){
    int ans = 1;
    int count = 1;
    int i = 1;
    while(i<n){
        if(((arr[i]%2==0)&&(arr[i]-1%2!=0)||(arr[i]%2!=0)&&(arr[i-1]%2==0))){
            count++;
        }
        else{
            count = 1;
        }
        i++;
        ans = max(ans,count);
    }

    return ans;
}

int main(){

int arr[] = {1,2,12,1,1,2,1,2,1,2,1,2,1,2,11,1};
int n = 16;
cout<<"The maximum length of the even odd subarray is : "<<longestEvenOdd(arr,n)<<endl;
return 0 ;
}