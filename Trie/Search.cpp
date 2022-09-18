#include<bits/stdc++.h>

using namespace std;

struct TrieNode{
    TrieNode *children[26];
    bool isEnd;
    TrieNode(){
        isEnd = false;
        for(int i = 0 ; i<26 ; i++){
            children[i] = NULL;
        }
    }
};

bool search(TrieNode *root ,string &key){
    TrieNode* curr = root;
    for(int i = 0 ; i<key.length() ; i++){
        int ind = key[i] - 'a';
        if(root->children[ind]==NULL){
            return false;
        }
        curr = curr->children[ind];
    }
    return curr->isEnd;
}

void Insert(TrieNode *root , string &key ){
    TrieNode *curr = root;
    for(int i = 0 ; i<key.length() ; i++){
        int ind = key[i] - 'a';
        if(curr->children[ind]==NULL){
            curr->children[ind] = new TrieNode();
        }
        curr = curr->children[ind];
    }
    curr->isEnd = true;
}

int main(){

    

    return 0;
}