#include <bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < int(vec.size()); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void printSubSeqK(int i , vector<int> &vec,vector<int> &res , int sum , int &target){
    if(i == int(vec.size())){
        if(sum == target){
        display(res);
        }
        return;
    }

    res.push_back(vec[i]);
    printSubSeqK(i+1, vec , res, sum + vec[i] , target);
    res.pop_back();
    printSubSeqK(i+1, vec , res, sum ,target);
}

int main()
{
    vector<int> vec = {1,2,3,4,3,2,1};
    int target = 6;
    int sum = 0;
    vector<int> res = {};
    printSubSeqK(0,vec,res,sum, target);

    return 0;
}