// String
// C / C++ uses ASCII  (8bit) |  Java uses UTF-16 (16bit)
//
//
//
//
//
//
//
//
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // string alphabets = "abcdefghijklmnopqrstuvwxyz";
    // for(auto x : alphabets){
    //     cout<<x<<" - "<<(int)x<<endl;
    // }
    string str = "akanksh adugani vanjari";
    vector<int> vec(26);
    for(auto x : str){
        vec[x - 'a']++;
    }

    for(int i = 0 ; i < vec.size() ; i++){
        if(vec[i]>0){
            cout<<(char)(i+'a')<<" - "<<vec[i]<<endl;
        }
    }


    return 0;
}
