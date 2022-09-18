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

int BinarySearch(vector<int> vec,int target){
    int l = 0 ;
    int h = vec.size()-1;
    while(l<=h){
        int mid = l+ (h-l)/2;
        if(vec[mid]==target){
            return mid;
        }
        else if(vec[mid]>target){
            h = mid -1;
        }
        else{
            l = mid +1;
        }
    }
    return -1;
}


int main()
{
    vector<int> vec = {1,2,3,5,8,9,10,12,50,67,77,99};
    int target = 5;
    display(vec);
    cout<<BinarySearch(vec,target)<<endl;

    return 0;
}