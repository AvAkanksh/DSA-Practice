#include <iostream>
#include <vector>

using namespace std;

void displayMatrix(vector<vector<int>> mat){
    for(int i = 0 ; i < mat.size(); i++){
        for(int j = 0 ; j < mat[0].size(); j++){
            cout<<mat[i][j]<<'\t';
        }
        cout<<'\n';
    }
}

void rotateMatrix(vector<vector<int>> &mat){
    int l = 0 ;
    int h = mat.size()-1;
    while(l<h){
        for(int i = 0 ; i< mat[0].size(); i++ ){
            int temp = mat[l][i];
            mat[l][i] = mat[h][i];
            mat[h][i] = temp;
        }
        l++;
        h--;
    }
    for(int i = 0 ; i < mat.size(); i++){
        for(int j = 0 ; j < i ; j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

}

int main()
{
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};
    displayMatrix(mat);
    cout<<"-----------"<<endl;
    rotateMatrix(mat);
    displayMatrix(mat);
    return 0;
}