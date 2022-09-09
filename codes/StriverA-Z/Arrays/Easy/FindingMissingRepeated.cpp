#include<bits/stdc++.h>

using namespace std;

void findRepeatedMissing(vector<int> vec){
    int n = vec.size();
    int s = n*(n+1)/2;
    int p = n*(n+1)*(2*n+1)/6;
    int S = 0;
    int P = 0;
    for(auto x : vec ){
        S+=x;
        P+=x*x;
    }
    int s_star = s - S ; // (Missing - Repeated);
    int p_star = p - P ; // (Missing - Repeated)(Missing + Repeated); 
    int missing = (p_star/s_star +  s_star)/2;
    int repeated = (p_star/s_star -  s_star)/2;
    cout<<"Missing Number : "<<missing<<endl;
    cout<<"Repeated Number : "<<repeated<<endl;
}

int main(){
    vector<int> vec = {1,2,3,4,7,6,7,8,9,10,11};
    findRepeatedMissing(vec);
    return 0;
}