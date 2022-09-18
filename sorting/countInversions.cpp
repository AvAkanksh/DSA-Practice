#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < int(vec.size()); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

int countSortMerge(vector<int> &vec, int l , int mid , int h){
    int res = 0;

    int left_size = mid -l +1;
    vector<int> left(left_size);
    int right_size = h - mid;
    vector<int> right(right_size);
    for(int i = 0; i< left_size ; i++){
        left[i] = vec[l+i];
    }
    for(int i = 0; i< right_size ; i++){
        right[i] = vec[mid+1+i];
    }
    // display(left);
    // display(right);
    int i = 0;
    int j = 0;
    int k = l;
    while(i<left_size && j < right_size){
        if(left[i]<=right[j]){
            vec[k] = left[i];
            i++;
        }
        else{
            vec[k] = right[j];
            j++;
            res += left_size-i;
        }
        k++;
    }
    while(i<left_size){
        vec[k] = left[i];
        i++;
        k++;
    }
    while(j<right_size){
        vec[k] = right[j];
        j++;
        k++;
    }
    return res;
}

int countInversions(vector<int> &vec, int l , int h){
    int res = 0;
    if(l<h){
        int mid = l + (h-l)/2;
        res += countInversions(vec,l , mid);
        res += countInversions(vec, mid+1, h);
        res += countSortMerge(vec, l, mid, h );
    }
    return res;
}

int main()
{
    vector<int> vec = {4,2,1,6,3,5,3,9,2,10};
    // vector<int> vec = {4,3,2,1};
    cout<<countInversions(vec,0,vec.size()-1)<<endl;

    return 0;
}