#include <bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < int(vec.size()); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

int printSubSeqK(int i , vector<int> &vec, int sum , int &target){
    if(i == int(vec.size())){
        if(sum == target){
        // display(res);
        return 1;
        }
        return 0;
    }

    int l = printSubSeqK(i+1, vec, sum + vec[i] , target);
    int r = printSubSeqK(i+1, vec , sum ,target);
    return l+r;
}

int main()
{
    vector<int> vec = {1,2,3,4,3,2,1};
    int target = 7;
    int sum = 0;
    cout<<printSubSeqK(0,vec,sum, target)<<endl;
    return 0;
}