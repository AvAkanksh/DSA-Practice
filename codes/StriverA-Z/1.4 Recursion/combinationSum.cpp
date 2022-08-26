#include <bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < int(vec.size()); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void printCombination(int ind, int sum , vector<int> &res, vector<int> &vec){
    if(ind == int(vec.size()) || sum == 0 || vec[ind]>sum){
        if(sum == 0){
            display(res);
        }
        return ;
    }
    res.push_back(vec[ind]);
    printCombination(ind,sum-vec[ind],res,vec);
    res.pop_back();
    printCombination(ind+1,sum,res,vec);
}

int main()
{
    vector<int> vec = {3,4,5,9,11};
    int sum = 18;
    vector<int> res ;
    printCombination(0,sum,res,vec);

    return 0;
}