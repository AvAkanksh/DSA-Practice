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

int firstOccurence(vector<int> vec, int target){
    int l = 0 ;
    int h = vec.size()-1;
    while(l<=h){
        int mid = l + (h-l)/2;
        if(vec[mid] == target){
            if(mid==0 || vec[mid]!= vec[mid-1]){
                return mid;
            }
            else{
                h = mid-1;
            }
        }
        else if(vec[mid]>target){h = mid -1;}
        else{l = mid +1;}
    }
    return -1;
}

int lastOccurence(vector<int> vec, int target){
    int l = 0 ;
    int h = vec.size()-1;
    while(l<=h){
        int mid = l + (h-l)/2;
        if(vec[mid] == target){
            if(mid == vec.size()-1 || vec[mid]!= vec[mid+1]){
                return mid;
            }
            else{
                l = mid+1;
            }
        }
        else if(vec[mid]>target){h = mid -1;}
        else{l = mid +1;}
    }
    return -1;
}

int countOccurence(vector<int> vec, int target){
    int first_occurence = firstOccurence(vec,target);
    if(first_occurence==-1){
        return 0;
    }
    else{
        return lastOccurence(vec,target) - first_occurence +1;
    }

}

int main()
{
    vector<int> vec = {1,2,3,4,5,6,6,6,6,7,7,7,7,7,7,7,19};
    int target = 7;
    display(vec);
    cout<<countOccurence(vec,target)<<endl;

    return 0;
}