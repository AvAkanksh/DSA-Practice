#include <iostream>
#include <vector>

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

void sort012(vector<int> &vec){
    int low = 0;
    int mid = 0;
    int high = vec.size()-1;
    while(mid<=high){
        if(vec[mid]==0){
            swap(vec, mid,low);
            low++;
            mid++;
        }
        else if( vec[mid]==1){
            mid++;
        }
        else{
            swap(vec,mid,high);
            high--;
        }
    }
}

int main()
{
    vector<int> vec = {0,1,2,2,1,0,0,0,1,2,2,1,0,0,0,1,1,2,2,0};
    sort012(vec);
    display(vec);

    return 0;
}