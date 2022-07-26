#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool checkSame(char a, char b){
    return (a=='(' && b==')' ||a=='[' && b==']' ||a=='{' && b=='}' );
}

bool checkBalance(string s){
    stack<char> balance;

    for(int i = 0 ; i<s.length();i++ ){
        if((s[i]=='(') || (s[i]=='{') || (s[i]=='[') ){
            balance.push(s[i]);
        }
        else{
            if(balance.size()==0){
                return false;
            }
            else if(checkSame(balance.top(),s[i])){
                balance.pop();
            }
            else{
                return false;
            }
        }
    }
    return (balance.size()==0);
}

int main()
{
    string s = "(()[]){}";

    cout<<checkBalance(s)<<endl;

    return 0;
}