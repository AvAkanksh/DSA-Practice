#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void display(vector<int> vec){

    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

double findMedian(vector<int> v1, vector<int> v2){
    if (v2.size()<v1.size()){
        vector<int> temp = v1;
        v1 = v2;
        v2 = temp;
    }
    int l = 0 ;
    int h = v1.size();
    double ans;
    while(l<=h){
        int index1 = l + (h-l)/2;
        int index2 = (v1.size()+v2.size()+1)/2 -index1;
        int min1 = (index1 == v1.size())?INT_MAX:v1[index1];
        int min2 = (index2 == v2.size())?INT_MAX:v2[index2];
        int max1 = (index1 == 0)?INT_MIN:v1[index1-1];
        int max2 = (index2 == 0)?INT_MIN:v2[index2-1];
        if(max1 <= min2 && max2 <= min1){
            if((v1.size()+v2.size())%2==0){
                ans = (max(max1,max2) + max(min1,min2))/2;
            }
            else{
                ans = max(max1,max2);
            }
            return ans;
        }
        else if(max1 > min2){
            h = index1-1;
        }
        else{
            l = index1+1;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec1 = {1,2,3,4,5,8,9,10,100};
    vector<int> vec2 = {5,8,11,23,45,67,89,99,101,144};

    cout<<findMedian(vec2,vec1)<<endl;



    return 0;
}