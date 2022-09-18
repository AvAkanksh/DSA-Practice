#include <iostream>
#include <vector>
#include <string>


using namespace std;

void display(vector<int> vec){
    for(int i = 0 ; i < int(vec.size()); i++){
        cout<<vec[i]<<"\t";
    }
    cout<<endl;
}

void fillLps(string str, vector<int> &vec){
    for(int i = 1 , j = 0; i < int(str.length()); i++){
        while(j>0 && str[i]!=str[j]){
            j = vec[j-1];
        }
        if(str[i]==str[j]){
            j++;
        }
        vec[i] = j;
    }
    for(auto x : str){
        cout<<x<<"\t";
    }
    cout<<endl;
    display(vec);
}


void kmp(string src, string target){
    int n = int(src.length());
    int m = target.length();
    vector<int> lps(m);

    fillLps(target,lps);

    int i = 0;
    int j = 0;

    for(; i < n; i++){
        while(j>0 && src[i]!=target[j]){
            j = lps[j-1];
        }
        if(src[i]==target[j]){
            j++;
        }
        if(j==m){
            cout<<(i-j+1)<<"\t";
            j = lps[j-1];
        }
    }
    cout<<endl;


}


int main()
{
    string src = "aaaaab";
    string target = "aaaa";

    kmp(src, target);

    return 0;
}