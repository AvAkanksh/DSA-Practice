#include <bits/stdc++.h>

using namespace std;

void elements(vector<int> vec){
    int largest, second_largest , smallest, second_smallest;
    largest = INT_MIN,second_largest = INT_MIN;
    smallest = INT_MAX, second_smallest = INT_MAX;
    for(auto x : vec){
        smallest = min(smallest , x);
        largest = max(largest , x);
    }
    for(auto x : vec){
        if((second_smallest>x) && (x != smallest)){
            second_smallest = x;
        }
        if(second_largest<x && x != largest){
            second_largest = x;
        }
    }
    cout<<"Largest : "<<largest<<endl;
    cout<<"2nd Largest : "<<second_largest<<endl;
    cout<<"Smallest : "<<smallest<<endl;
    cout<<"2nd Smallest : "<<second_smallest<<endl;
}

int main()
{
    vector<int> vec = {1,2,3,2,1,2,3,4,5,6,4,3,2,3,2,3,4,5};
    elements(vec);
    return 0;
}