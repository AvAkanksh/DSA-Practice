#include <iostream>
#include <vector>
#include <deque>

using namespace std;

void maxInKSizeSubarray(vector<int> vec,int k){
    deque<int> dq;
    for(int i = 0 ; i < int(vec.size()) ; i++){
        if(!(dq.empty()) && dq.front()== i-k){dq.pop_front();}
        while(!(dq.empty())&& vec[i]>vec[dq.back()]){dq.pop_back();}
        dq.push_back(i);
        if(i>=k-1){cout<<vec[dq.front()]<<'\t';}
    }
    cout<< endl;
}

int main()
{
    int k = 3;
    vector<int> vec = {1,6,2,3,4};
    maxInKSizeSubarray(vec,k);
    return 0;
}