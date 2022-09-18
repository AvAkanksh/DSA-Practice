#include<iostream>
#include<vector>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<"\n";
}

int RainWaterTrapped(vector<int> vec){
    int ans = 0;
    vector<int> lmax(vec.size()),rmax(vec.size());
    lmax[0] = vec[0];
    rmax[vec.size()-1] = vec[vec.size()-1];
    for(int i = 1; i < vec.size();i++){
        lmax[i] = max(vec[i],lmax[i-1]);
    }
    for(int i = vec.size()-2; i >= 0;i--){
        rmax[i] = max(vec[i],rmax[i+1]);
    }
    cout<<"Walls :"<<endl;
    display(vec);
    cout<<"Lmax :"<<endl;
    display(lmax);
    cout<<"Rmax :"<<endl;
    display(rmax);
    for(int i = 0 ; i < vec.size();i++){
        ans = ans + (min(lmax[i],rmax[i])-vec[i]);
    }
    return ans;
}

int main(){
    vector<int> vec = {3,2,3,4,5,2,7};
    cout<<RainWaterTrapped(vec)<<endl;
    return 0;
}