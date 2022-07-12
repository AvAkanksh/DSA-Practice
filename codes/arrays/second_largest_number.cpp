#include<iostream>
#include<vector>
using namespace std;

int second_largest(vector<int>vec){
    int res=-1;
    int largest = 0;
    for(int i = 1; i <vec.size();i++){
        if(vec[i]>vec[largest]){
            res = largest;
            largest = i;
        }
        else if (vec[i]!=vec[largest]){
            if(vec[i]>vec[res]){
                res = i;
            }
        }
    }
    return res;
}

int main(){
    vector<int> vec = {1,2,3,4,10,5,6,8,9,100,4};
    cout<<second_largest(vec)<<endl;
    return 0;
}