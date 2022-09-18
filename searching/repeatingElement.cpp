#include <iostream>
#include <vector>

using namespace std;

int repeatingElement(vector<int> vec){
    int slow = vec[0]+1;
    int fast = vec[0]+1;
    do{
        slow = vec[slow]+1;
        fast = vec[vec[fast]+1]+1;
    }while(slow!=fast);
    slow = vec[0]+1;
    while(slow!=fast){
        slow = vec[slow]+1;
        fast = vec[fast]+1;
    }
    return slow-1;
}

int main()
{
    vector<int> vec = {7,0,8,3,2,1,9,4,5,6,3,10,11,14,12,13};
    cout<<repeatingElement(vec)<<endl;

    return 0;
}