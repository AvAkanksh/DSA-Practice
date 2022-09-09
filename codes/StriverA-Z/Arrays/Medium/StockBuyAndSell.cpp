#include<bits/stdc++.h>

using namespace std;

void maxProfit(vector<int> vec){
    int minValue = vec[0];
    int maxProf = 0;
    int n = vec.size();
    for(int i = 1; i<n ; i++){
        minValue = min(minValue, vec[i]);
        maxProf = max(maxProf,vec[i]-minValue);
    }
    cout<<"The maximum profit earned is : "<<maxProf<<endl;
}

int main(){

    vector<int> vec = {10,5,3,3,2,3,4,5,6,7,6,5,4,3,4,5,6,3,7,8,9,7,6,5,4,3,2,1};
    maxProfit(vec);

    return 0;
}