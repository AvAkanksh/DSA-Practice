#include <bits/stdc++.h>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < int(vec.size()); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void merge(vector<int> &vec, int l , int mid , int r){
    vector<int> left;
    vector<int> right;
    for(int i = l ; i <= mid ; i++ ){
        left.emplace_back(vec[i]);
    }
    for(int i = mid+1 ; i <=r ; i++ ){
        right.emplace_back(vec[i]);
    }
    int n = int(left.size());
    int m = int(right.size());
    int k = l;
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        if(left[i]<right[j]){
            vec[k] = left[i];
            i++;
        }
        else{
            vec[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<n){vec[k]=left[i];i++;k++;}
    while(j<m){vec[k]=right[j];j++;k++;}

}

void MergeSort(vector<int> &vec , int l , int r){
    if(l<r){

        int mid = l + (r-l)/2;
        MergeSort(vec, l, mid);
        MergeSort(vec, mid+1, r);
        merge(vec, l, mid , r);
    }
}

int main()
{
    vector<int> vec = {1,2,3,2,1,2,3,4,5,6,4,3,2,3,2,3,4,5};
    display(vec);
    MergeSort(vec,0,vec.size()-1);
    display(vec);

    return 0;
}