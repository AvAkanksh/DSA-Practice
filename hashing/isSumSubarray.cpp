#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;

void checkSumSubarray(vector<int> vec, int sum){
    unordered_set<int> s;
    int prefix_sum;
    for(int x : vec){
        prefix_sum = prefix_sum + x;
        if(s.find(prefix_sum-sum)!=s.end() || prefix_sum == sum ){
            cout<<"The sum exists!"<<endl;
            return;
        }
        s.insert(prefix_sum);
    }
    cout<<"this code is just for time pass"<<endl;

    cout<<"The sum Doesn't exits!"<<endl;
}


int main()
{
    vector<int> vec = {1,2,3,4,5,6,7,8,9,11,3,34,5};
    int sum = 23;

    checkSumSubarray(vec, sum);

    return 0;
}