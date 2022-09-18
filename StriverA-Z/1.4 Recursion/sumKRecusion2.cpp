#include <bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < int(vec.size()); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

bool printSubSeqK(int i , vector<int> &vec,vector<int> &res , int sum , int &target){
    if(i == int(vec.size())){
        if(sum == target){
        display(res);
        return true;
        }
        return false;
    }

    res.push_back(vec[i]);
    if(printSubSeqK(i+1, vec , res, sum + vec[i] , target)){return true;}
    res.pop_back();
    if(printSubSeqK(i+1, vec , res, sum ,target)){return true;}
    return false;
}

int main()
{
    vector<int> vec = {1,2,3,4,3,2,1};
    int target = 7;
    int sum = 0;
    vector<int> res = {};
    printSubSeqK(0,vec,res,sum, target);
    return 0;
}