#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> vec, int target, int i){
    int l = 0 ;
    int h = i;
    int ans = -1;
    while(l<=h){
        int mid = l + (h-l)/2;
        // cout<<vec[mid]<<" | mid : "<<mid<<endl;
        if(vec[mid] == target){
            return mid;
        }
        else if(vec[mid]>target){
            h = mid -1;
        }
        else{
            l = mid +1;
        }
    }
    return ans;
}

int findTarget(vector<int> vec, int target){
    int i = 1 ;
    while(vec[i]<target){
        i = i*2;
        if (i > vec.size()-1){
            i = vec.size()-1;
        }
    }
    if(vec[i]==target){
        return i;
    }
    else {
        return binarySearch(vec,target,i);
    }
}

int main()
{
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int target = 18;
    cout<<findTarget(vec,target)<<endl;
    return 0;
}