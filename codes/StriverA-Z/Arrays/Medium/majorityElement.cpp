#include<bits/stdc++.h>

using namespace std;

void majorityElement(vector<int> vec){
    int count = 0;
    int element = -1;
    for(auto x : vec){
        if(x==element){
            count++;
        }
        else if(count==0){
            element = x;
            count =1;
        }
        else{
            count--;
        }
    }
    count = 0;
    for(auto x : vec){
        if(x == element){
            count++;
        }
    }
    if(count>vec.size()/2){
        cout<<element<<" is the Majority element."<<endl;
    }
    else{
        cout<<"There is no majority element"<<endl;
    }
}

int main(){

    vector<int> vec = {1,2,3,4,3,2,1,1,1,1,1,1,2,4,1,1,1,1,5,4,2,3,1,1,1,1,4};
    majorityElement(vec);
    return 0;
}