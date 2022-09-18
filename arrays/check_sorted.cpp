#include<iostream>
#include<vector>

using namespace std;

string check_sorted(vector<int> vec){
    if(vec.size()==1){
        return "Sorted";
    }
    for(int i = 1 ; i < vec.size(); i++){
        if(vec[i]<vec[i-1]){
            return "Not Sorted";
        }
    }
    return "Sorted";
}

int main(){
    vector<int> vec = {1,2,3,4,5,6};
    vector<int> vec2 = {2,21,6,5};

    cout<<check_sorted(vec)<<endl;
    cout<<check_sorted(vec2)<<endl;

    return 0;
}