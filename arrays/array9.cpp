#include<iostream>
#include<algorithm>
using namespace std;

// Maximum consecutive 1s

int maxOnes(int arr[],int n){
    int ans = 0;
    int count = 0;
    // cout<<endl;
    for(int i = 0; i < n; i++){
        // cout<<"arr[i] : "<<arr[i]<<endl;
        if(arr[i]==0){
            count = 0;
        }else{
        count++;
        }
        // cout<<"count: "<<count<<endl;
        // cout<<"\n\n"<<endl;
        ans = max(ans,count);
    }

    return ans;
}

int main(){
int arr[] = {1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1};
int n = 16;
cout<<"The maximum number of ones in the given array is : "<<maxOnes(arr,n)<<endl;


return 0 ;
}