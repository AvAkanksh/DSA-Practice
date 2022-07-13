#include <iostream>
#include <vector>

using namespace std;

int maxSum(vector<int> vec, int k){
    int curr_sum = 0;
    for (int i = 0 ; i < k ; i++){
        curr_sum = curr_sum + vec[i];
    }
    int max_sum = curr_sum;
    for(int i = k ; i < vec.size(); i++){
        curr_sum = curr_sum + vec[i]- vec[i-k];
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}

bool SumExists(vector<int> vec, int target){
    int curr_sum = vec[0];
    int start = 0;
    int end = 1;
    for(;end<vec.size();end++){
        while(curr_sum>target && start<end-1){
            curr_sum = curr_sum - vec[start];
            start++;
        }
            // cout<<"Target : "<<target << " | curr_sum : "<<curr_sum << " | start :"<<start<<"|end : "<<end <<endl;
        if(curr_sum==target){
            return true;
        }
        if(end<vec.size()){
            curr_sum += vec[end];
        }
    }
    return (curr_sum == target);
}

int main()
{
    int k = 4;
    int target = 77;
    vector<int> vec = {1,2,143,4,5,6,7,8,3,2,1,3,4,15,3,12,1,2,4,3,8,5,4,3,12,6};
    cout<<maxSum(vec,k)<<endl;
    cout<<SumExists(vec,target)<<endl;

    return 0;
}