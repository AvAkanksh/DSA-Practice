#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Title of the Program
const int R = 5;
const int C = 5;

void printSnake(int arr[5][5])
{
    for (int i = 0; i < R; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < C; j++)
            {
                cout << arr[i][j] << "\t";
            }
        }
        else
        {
            for (int j = C - 1; j >= 0; j--)
            {
                cout << arr[i][j] << "\t";
            }
        }
        // cout<<endl;
    }
}

int main()
{
    // cout<<R<<C<<endl;
    int arr[R][C] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15},
                     {16, 17, 18, 19, 20},
                     {21, 22, 23, 24, 25}};

    printSnake(arr);

    return 0;
}