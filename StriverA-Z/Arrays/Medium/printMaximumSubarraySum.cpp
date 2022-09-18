#include<bits/stdc++.h>

using namespace std;

void printSubarray(vector<int> vec){
    int start = 0;
    int end = 0;
    int sum = 0;
    int maxi = INT_MIN;
    int n = vec.size();
    pair<int,int> ans = {start,end};
    for(int i = 0 ; i < n; i++ ){
        sum+= vec[i];
        if(maxi<sum){
            end = i;
            maxi = sum;
            ans.first = start;
            ans.second = end;
        }
        if(sum<0){
            start = i+1;
            sum = 0;
            end = i+1;
        }
    }

    for(int i = ans.first ; i<=ans.second; i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

}

int main(){

    vector<int> vec = {-1,3,4,-5,6,4,5,6,-7,5,9,-3,2,1};
    printSubarray(vec);
    return 0;
}