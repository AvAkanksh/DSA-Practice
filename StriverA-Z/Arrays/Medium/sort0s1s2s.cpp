#include<bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(auto x : vec){
        cout<<x<<" ";
    }
    cout<<endl;
}

void solution(vector<int> vec){
    int n = vec.size();
    int low = 0 ;
    int mid = 0;
    int high = vec.size()-1;

    while(mid<high){
        if(vec[mid]==0){
            swap(vec[low],vec[mid]);
            low++;
            mid++;
        }
        else if(vec[mid]==1){
            mid++;
        }
        else{
            swap(vec[mid],vec[high]);
            high--;
        }
    }
    display(vec);
}

int main(){

    vector<int> vec = {2,1,1,1,2,1,1,2,0,1,0,1,1};
    solution(vec);

    return 0;
}