#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

void mergeFinal(vector<int> &vec, int n){
    vector<int> left(n);
    vector<int> right(vec.size()-n);
    for(int i = 0 ; i< n; i++){
        left[i] = vec[i];
    }
    for(int i = n ; i< vec.size(); i++){
        right[i-n] = vec[i];
    }
    display(left);
    display(right);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<left.size() && j< right.size()){
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
    while(i < left.size()){
        vec[k] = left[i];
        i++;
        k++;
    }
    while(j < right.size()){
        vec[k] = right[j];
        j++;
        k++;
    }
    display(vec);
}

int main()
{
    vector<int> vec = {2,3,4,5,6,7,8,9,1,2,3,4,5,8};
    mergeFinal(vec,8);

    return 0;
}