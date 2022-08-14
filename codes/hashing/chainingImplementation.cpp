// #include <iostream>
// #include <vector>
// #include <list>

// using namespace std;

// struct MyHash{
//     int BUCKET;
//     list<int> *table;
//     MyHash(int b){
//         BUCKET = b;
//         table = new list<int>[b];
//     }

// };


// int main()
// {


//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create a set of strings
    set<string> st;
    st.insert({ "geeksb", "for", "geeks", "org" });

    // 'it' evaluates to iterator to set of string
    // type automatically
    
    for(auto it = st.begin(); it != st.end(); it++){
        cout<<*it<<endl;
    }

    return 0;
}