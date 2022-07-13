#include <iostream>
#include <vector>

using namespace std;

int sum_from_to(vector<int> prefix_sum, int start , int end){
    int sum = 0;
    if(start == 0){
        return prefix_sum[end];
    }
    return prefix_sum[end] - prefix_sum[start-1];
}


int main()
{
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10,11,12};
    vector<int> prefix_sum(vec.size());
    prefix_sum[0] = vec[0];
    for(int i = 1 ; i < vec.size(); i++){
        prefix_sum[i] = prefix_sum[i-1] + vec[i];
    }
    cout<<sum_from_to(prefix_sum,0,8)<<endl;
    cout<<sum_from_to(prefix_sum,1,8)<<endl;
    cout<<sum_from_to(prefix_sum,2,8)<<endl;
    cout<<sum_from_to(prefix_sum,3,8)<<endl;
    cout<<sum_from_to(prefix_sum,4,8)<<endl;
    cout<<sum_from_to(prefix_sum,5,8)<<endl;

    return 0;
}