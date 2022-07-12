#include <iostream>
#include <vector>
#include<numeric>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<"\n";
}

vector<int> invertVector(vector<int> vec){
    for(int i = 0 ; i<vec.size();i++){
        vec[i] = -vec[i];
    }
    return vec;
}

int maxNormalSum(vector<int> vec){
    int res = vec[0];
    vector<int> max_sum(vec.size());
    max_sum[0] = vec[0];

    for(int i = 1 ; i <vec.size(); i++){
        max_sum[i] = max(vec[i]+max_sum[i-1],vec[i]);
        res = max(max_sum[i],res);
    }
    return res;
}

int maxCircularSum(vector<int> vec){
    int max_normal_sum = maxNormalSum(vec);
    int total_sum = accumulate(vec.begin(),vec.end(),0);
    int max_circular_sum = total_sum + maxNormalSum(invertVector(vec));
    return max(max_normal_sum, max_circular_sum);
}

int main()
{
    vector<int> vec = {1,2,3,4,5,-5,2,4,-7,9};
    cout<<maxCircularSum(vec)<<endl;
    return 0;
}