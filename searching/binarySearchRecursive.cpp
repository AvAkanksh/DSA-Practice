#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> vec){
    cout<<""<<endl;
    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

int binarySearch(vector<int> vec, int start , int end, int target){
    if(start>end){
        return -1;
    }
    int mid = start + (end-start)/2;
    if(vec[mid]==target){
        return mid;
    }
    else if(vec[mid]>target){
        return binarySearch(vec, start, mid -1,target);
    }
    else{
        return binarySearch(vec, mid+1, end, target);
    }

}

int main()
{
    vector<int> vec = {1,2,3,4,5,6,12,54,66,73,87,93,100};
    int target = 93;
    cout<<binarySearch(vec,0,vec.size()-1,target)<<endl;

    return 0;
}