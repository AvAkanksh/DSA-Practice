#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void merge(vector<int> &vec,int l , int mid , int r){
    int left_size = mid-l+1;
    vector<int> left(left_size);
    int right_size = r-mid;
    vector<int> right(right_size);
    for(int i = 0; i< left.size(); i++){
        left[i] = vec[l+i];
    }
    for(int i = 0; i< right.size(); i++){
        right[i] = vec[mid+1+i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while(i<left.size() && j<right.size()){
        if(left[i]<=right[j]){
            vec[k] = left[i];
            i++;
        }
        else{
            vec[k] = right[j];
            j++;
        }
        k++;
    }
    while(i<left.size()){
        vec[k] = left[i];
        i++;
        k++;
    }
    while(j<right.size()){
        vec[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &vec, int l, int r){
    if(l<r){
        int mid = l+ (r-l)/2;
        mergeSort(vec,l,mid);
        mergeSort(vec,mid+1,r);
        merge(vec,l,mid,r);
    }
}

int main()
{
    vector<int> vec = {3,1,5,7,3,5,9,3,1,2,7,3,5,9,6,4,7,8,4,3,6,5,7,8,0};
    display(vec);
    mergeSort(vec,0,vec.size()-1);
    display(vec);
    return 0;
}