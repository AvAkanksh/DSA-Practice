#include <iostream>
#include <vector>

using namespace std;

int minAllocation(vector<int> vec, int k){
    int sum = 0;
    int max_value = 0;
    for(int i = 0 ; i< vec.size();i++){
        sum = sum + vec[i];
        max_value = max(max_value, vec[i]);
    }
    int l = max_value;
    int h = sum;
    int res = 0;
    
}

int main()
{
    vector<int> vec = {10,20,10,30};
    int k = 2;
    cout<<minAllocation(vec,k)<<endl;

    return 0;
}