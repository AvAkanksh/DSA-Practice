#include<bits/stdc++.h>

using namespace std;

void f(int count){
    if(count==5){
        return;
    }
    cout<<count<<endl;
    count++;
    f(count);
}

int main(){
    f(0);
    return 0;
}