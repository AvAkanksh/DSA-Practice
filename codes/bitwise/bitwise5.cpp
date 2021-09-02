#include<iostream>
using namespace std;


// Find the number which appeared odd number of times.
int main(){
    int arr[] = {1,1,2,2,2,3,3,3,3,1,1,5,5};
    int ans = 0;
    for(int i = 0 ; i<13; i++ ){
        // cout<<ans<<endl;
        ans=ans^arr[i];
    }
    cout<< "The odd times repeated number is : "<< ans<<endl;
    return 0;
}