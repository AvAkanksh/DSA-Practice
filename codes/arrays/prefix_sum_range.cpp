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

int maximum_repeated_value(vector<int> start, vector<int> end){
    vector<int> vec(100,0);
    for(int i = 0 ; i<start.size();i++){
        vec[start[i]] = 1;
    }
    for(int i = 0 ; i<end.size();i++){
        vec[end[i]] = -1;
    }
    vector<int>prefix_sum(vec.size());
    prefix_sum[0] = vec[0];
    for(int i = 1 ; i< vec.size();i++){
        prefix_sum[i] = prefix_sum[i-1] + vec[i];
    }
    int max_value = prefix_sum[0];
    int ans = 0;
    for(int i = 1 ; i<vec.size(); i++){
        if(prefix_sum[i]>max_value){
            max_value = prefix_sum[i];
            ans = i;
        }
    }
    return ans;
}

int main()
{
    vector<int> start = {1,2,3,4,1,3};
    vector<int> end =   {6,4,5,8,9,10};
    cout<<maximum_repeated_value(start,end)<<endl;
    return 0;
}