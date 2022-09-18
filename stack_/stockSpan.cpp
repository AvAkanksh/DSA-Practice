#include <iostream>
#include <vector>
#include <stack>


using namespace std;

void printStockSpan(vector<int> vec){
    // while(stock.size()!=0){
    //     cout<<stock.top()<<endl;
    //     stock.pop();
    // }
    stack<int> stock;
    stock.push(0);
    cout<<1<<"\t";
    for(int i = 1 ; i < int(vec.size());i++){
        while(!(stock.empty()) &&  vec[i]>vec[stock.top()]){
            stock.pop();
        }
        int span = stock.empty() ? i+1 : i-stock.top();
        cout<<span<<"\t";
        stock.push(i);
    }
    cout<<"\n";
}

int main()
{
    vector<int> vec;
    // vec = {13,15,12,14,16,8,6,4,10,30};
    // vec = {10,20,30,40};
    vec = {40,30,20,10};

    printStockSpan(vec);
    return 0;
}