#include <bits/stdc++.h>

using namespace std;

int LargestElement(vector<int> vec){
    sort(vec.begin(),vec.end());
    return vec[vec.size()-1];
}


int LargestElement2(vector<int> vec){
    int max_value = vec[0];
    for(int i =1 ; i< int(vec.size()); i++){
        if(max_value<vec[i]){
            max_value = vec[i];
        }
    }
    return max_value;
}

int main()
{
    vector<int> vec = {1,23,3,2,5,6,7,4,5,6,5,3,4,9,6,54,4,3,212,321,2,3,45,6,7};
    cout<<LargestElement(vec)<<endl;
    cout<<LargestElement2(vec)<<endl;


    return 0;
}