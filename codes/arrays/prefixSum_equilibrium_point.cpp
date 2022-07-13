#include <iostream>
#include <vector>

using namespace std;

int equilibrium_point(vector<int> vec){
    int ans = -1;
    int sum = 0;
    for(int i = 0 ; i < vec.size();i++){
        sum = sum+vec[i];
    }
    int lsum = 0;
    for(int i =0 ; i< vec.size();i++){
        if(lsum == sum -vec[i]){
            return true;
        }
        lsum = lsum + vec[i];
        sum = sum - vec[i];
    }
    return false;
}

int main()
{
    vector<int> vec = {2,2,3,4,5,4,13,2,1};
    cout<<equilibrium_point(vec)<<endl;

    return 0;
}