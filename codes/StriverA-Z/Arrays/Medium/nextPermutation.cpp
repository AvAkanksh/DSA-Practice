#include<bits/stdc++.h>

using namespace std;

void nextPermutation2(vector<int> vec){
    do
    {
    for(int x : vec){
        cout<< x<< " ";
    }
    cout<<endl;
    } while (next_permutation(vec.begin(),vec.end()));
}

void display(vector<int> vec){
    for(auto x: vec){
        cout<<x<<' ';
    }
    cout<<endl;
}

void nextPermutation(vector<int> vec){
    int n = vec.size();
    int ind1 = n-1;
    for(; ind1>=0; ind1--){
        if(vec[ind1-1]<vec[ind1]){
            break;
        }
    }
    ind1--;
    if(ind1<0){
        reverse(vec.begin(),vec.end());
        display(vec);
        return;
    }
    else{
        int ind2 = n-1;
        for(; ind2>ind1 ; ind2--){
            if(vec[ind2]>vec[ind1]){
                break;
            }
        }
        swap(vec[ind1], vec[ind2]);
        reverse(vec.begin()+ind1+1 , vec.end());
        display(vec);
    }

}

int main(){

    vector<int> vec= {5,1,2,4,3};
    // nextPermutation2(vec);
    nextPermutation(vec);    
    return 0;
}