#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//Find the floor of the squareroot of x without any inbuilt function

int sqrtFloor(int x){
    int ans ;
    int l = 0;
    int h = x;
    int mid;
    while(l<=h){
        mid = (l +h)/2;
        // cout<<mid<<endl;
        if (mid*mid == x){
            return mid;
        }
        else if(mid*mid>x){
            h = mid-1;
        }
        else{
            l =  mid +1;
            ans = mid;
        }
    }
    return ans;
}

int main(){
int x = 16;
cout<<"The floor of the square root of key value is i.e floor(sqrt(x)) : "<<sqrtFloor(x)<<endl;


return 0 ;
}