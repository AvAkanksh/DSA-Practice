#include <iostream>
#include <vector>

using namespace std;

int maxSum(vector<int> vec){
    int myMax = 0;
    int ans = vec[0];
    for(int i = 0 ; i < vec.size();i++){
        if(myMax+vec[i]>=0){
            myMax = myMax+vec[i];
        }
        else{
            myMax = 0;
        }
        ans = max(myMax,ans);
    }
    return ans;
}

int main()
{
    vector<int> vec = {1,2,3,-1,5,3,-5,3,2,9,-5,-6,9};
    vec = {-2,-3,4,-1,-2,1,5,-3};
    int ans = maxSum(vec);
    cout<<ans<<endl;
    return 0;
}