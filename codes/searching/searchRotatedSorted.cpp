#include <iostream>
#include <vector>

using namespace std;

int findTarget(vector<int>vec , int target){
    int ans = -1;
    int l = 0 ;
    int h = vec.size()-1;
    while(l<=h){
        int mid = l + (h-l)/2;
        if(vec[mid]== target){
            return mid;
        }
        else if(vec[l]<vec[mid]){
            if(target>=vec[l] && target< vec[mid]){
                h = mid -1;
            }
            else{
                l = mid +1;
            }
        }
        else{
            if(target>vec[mid] && target<=vec[h]){
                l = mid +1;
            }
            else{
                h = mid -1;
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> vec =   {5,6,7,8,9,1,2,3,4};
    int target = 1;

    cout<<findTarget(vec,target)<<endl;

    return 0;
}