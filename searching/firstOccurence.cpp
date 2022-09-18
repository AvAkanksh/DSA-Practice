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

int firstOccurence(vector<int> vec , int target){

    int l = 0 ;
    int h = vec.size()-1;
    while(l<=h){
        int mid = l+ (h-l)/2;
        cout<<vec[mid]<<" | mid : "<<mid<<endl;
        if(vec[mid]==target){
            if(mid > 0){
                if(vec[mid]==vec[mid-1]){
                    h = mid-1;
                }
                else{
                    return mid;
                }
            }
        }
        else if(vec[mid]>target){
            h= mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {0, 1,2,2,2,4,5,7,7,7,7,7,7,8,8,9,9,9};
    int target = 8;
    display(vec);
    cout<<firstOccurence(vec, target)<<endl;

    return 0;
}