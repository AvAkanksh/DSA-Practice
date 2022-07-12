#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> vec, int n){
    for(int i = 0 ;i < n; i++){
        cout<<vec[i]<<"\t";
    }
    cout<<"\n";
}

int remove_duplicates(vector<int> &vec){
    int res = 1;
    for(int i = 1;i<vec.size();i++){
        if(vec[i]!=vec[i-1]){
            vec[res] = vec[i];
            res++;
        }
    }
    return res;
}

int main(){
    vector<int> vec = {1,1,1,2,2,2,2,2,2,2,2,3,4,5,6,7,7,7,7,9};
    cout<<"Original Vector :"<<endl;
    display(vec,vec.size());
    cout<<"Vector after removing the duplicates :"<<endl;
    display(vec,remove_duplicates(vec));
    return 0;
}