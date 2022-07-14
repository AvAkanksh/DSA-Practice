#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> vec){

    for(int i = 0 ; i < vec.size(); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<""<<endl;
}

int findMedian(vector<int> v1, vector<int> v2){
    if (v2.size()<v1.size()){
        vector<int> temp = v1;
        v1 = v2;
        v2 = temp;
    }
    display(v1);
    display(v2);
    return 0;
}

int main()
{
    vector<int> vec1 = {1,2,3,4,5,8,9,10,100};
    vector<int> vec2 = {5,8,11,23,45,67,89,99,101,144};

    cout<<findMedian(vec2,vec1)<<endl;



    return 0;
}