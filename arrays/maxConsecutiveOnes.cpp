#include<iostream>
#include<vector>

using namespace std;

int maxConsecutiveOnes(vector<int> vec){
    int count = 0;
    int curr_max = 0;
    for(int i = 0 ; i < vec.size(); i++){
        if(vec[i]==1){
            count = count + 1;
        }
        else{
            curr_max = max(curr_max,count);
            count = 0;
        }
    }
    return curr_max;
}

int main(){
    vector<int> vec = {0,1,0,0,1,1,1,1,1,0,0,1,1,1,0,0};
    cout<<maxConsecutiveOnes(vec)<<endl;
    return 0;
}