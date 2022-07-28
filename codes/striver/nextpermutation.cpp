#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void swap(vector<int> &vec, int i , int j){
    int temp = vec[i];
    vec[i] = vec[j];
    vec[j] = temp;
}

void allPermutations(vector<int> vec , int start){
    if(start==vec.size()){
        display(vec);
    }
    for(int i = start ; i < vec.size(); i++){
        swap(vec,i,start);
        allPermutations(vec, start+1);
        swap(vec,i,start);
    }
}

void nextPermuation(vector<int> vec){
    int ind1=vec.size()-2;
    int ind2=vec.size()-1;
    while(vec[ind1]>vec[ind1+1] && ind1 >=0){
        ind1--;
    }
    // cout<<ind1<<endl;
    if(ind1==-1){
        reverse(vec.begin(),vec.end());
        display(vec);
        return;
    }
    while(vec[ind2]<vec[ind1] && ind2>ind1){
        ind2--;
    }
    // cout<<ind2<<endl;
    swap(vec,ind1,ind2);
    reverse(vec.begin()+ind1+1,vec.end());
    display(vec);

}

int main()
{
    vector<int> vec = {1,5,3,4,2,1};
    // vec = {9};
    // vec = {3,2,1};
    // allPermutations(vec,0);
    cout<<"-------------------------"<<endl;
    // display(vec);
    // while(next_permutation(vec.begin(),vec.end())){
    //     display(vec);
    // }
    nextPermuation(vec);
    return 0;
}