#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;

void checkZeroSubarray(vector<int> vec){
    int prefix_sum = 0;
    unordered_set <int> s;
    for(int x : vec){
        prefix_sum = prefix_sum + x;
        if((s.find(prefix_sum) != s.end()) || (prefix_sum == 0)){
            cout<<"The subarray with sum equals to zero exits!"<<endl;
            return;
        }
        s.insert(prefix_sum);
    }
    cout<<"The subarray with sum equals to zero doesn't exits!"<<endl;
}


int main()
{
    vector<int> vec = {3,2,4,-2,7,-9};
    checkZeroSubarray(vec);

    return 0;
}