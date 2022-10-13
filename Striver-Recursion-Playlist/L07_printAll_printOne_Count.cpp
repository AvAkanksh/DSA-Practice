#include<bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(auto x: vec){
        cout<<x<<' ';
    }
    cout<<endl;
}

void printAllSubsequenceSum(int i , vector<int> vec , int target , vector<int> &res){
    if(i>=vec.size()){
        if(target==0){
            display(res);
        }
        return;
    }
    res.push_back(vec[i]);
    printAllSubsequenceSum(i+1,vec,target-vec[i],res);
    res.pop_back();
    printAllSubsequenceSum(i+1,vec,target,res);
}

bool printOneSubsequenceSum(int i, vector<int> vec, int target, vector<int> &res)
{
    if (i >= vec.size())
    {
        if (target == 0)
        {
            display(res);
            return true;
        }
        return false;
    }
    res.push_back(vec[i]);
    if(printOneSubsequenceSum(i + 1, vec, target - vec[i], res)){
        return true;
    }
    res.pop_back();
    if(printOneSubsequenceSum(i + 1, vec, target, res)){
        return true;
    };
    return false;
}

int printCountSubsequenceSum(int i, vector<int> vec, int target)
{
    if (i >= vec.size())
    {
        if (target == 0)
        {
            // display(res);
            return 1;
        }
        return 0;
    }
    int lcount = printCountSubsequenceSum(i + 1, vec, target - vec[i]);
    int rcount = printCountSubsequenceSum(i + 1, vec, target);
    return lcount + rcount;
}



int main(){

    int target = 10;
    vector<int> vec = {1,2,3,4,5,6};
    vector<int> res;
    printAllSubsequenceSum(0,vec,target,res);
    cout<<"-----------"<<endl;
    printOneSubsequenceSum(0,vec,target,res);
    cout<<"-----------"<<endl;
    cout<<printCountSubsequenceSum(0,vec,target)<<endl;
    return 0;
}