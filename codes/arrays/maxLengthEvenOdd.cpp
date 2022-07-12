#include <iostream>
#include <vector>

using namespace std;

int maxLenEO(vector<int> vec){
    int ans = 1;
    int count = 1;
    for(int i = 1; i < vec.size();i++){
        if(((vec[i]%2 ==0) && vec[i-1]%2!=0 )|| ((vec[i]%2!=0) && vec[i-1]%2==0 )){
            count ++;
            ans = max(ans, count);
        }
        else{
            count = 1;
        }
    }
    return ans;
}


int main()
{
    vector<int> vec = {1,2,3,4,5,6,6,6,6,7,6,76,6,5,4,3,2,1,2,2,1,1};
    cout<<maxLenEO(vec)<<endl;

    return 0;
}