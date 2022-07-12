#include<iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int> vec){
    int profit = 0;
    for(int i = 1 ; i < vec.size(); i++){
        int diff = vec[i]- vec[i-1];
        if(diff>0){
            profit = profit + diff;
        }
    }
    return profit;
}

int main(){

    vector<int> vec = {12,3,8,4,5,10,2,3,1,6,2,9,5,6,3,4,6,5,6,7,8,10,2,1,2,1,8};
    cout<<"Maximum profit which we can get is :"<<endl;
    cout<<maxProfit(vec)<<endl;

    return 0;
}