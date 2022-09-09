#include<bits/stdc++.h>

using namespace std;

void solution(vector<int> vec, int key){
    unordered_map<int, int> m;
    for(int i = 0 ; i< vec.size() ; i++){
        // cout<<"i:"<<i<<endl;
        if(m.find(key-vec[i])!=m.end()){
            // cout<<m[key-vec[i]]<<endl;
            // cout<<i<<endl;
            cout<<vec[m[key-vec[i]]] << " + " << vec[i] <<" = "<<key<<endl;
            return;
        }
        else{
            m[vec[i]] = i;
        }
    }
    cout<<"Couldn't Find a pair with the sum equal to "<<key<<endl;
}

int main(){

    vector<int> vec = {1,2,3,9,4,7};
    int key = 6;
    solution(vec, key);
    // cout<<*min_element(vec.begin(),vec.end())<<endl;
    // cout<<*max_element(vec.begin(),vec.end())<<endl;
    // cout<<accumulate(vec.begin() , vec.end(),0)<<endl;
    return 0;
}