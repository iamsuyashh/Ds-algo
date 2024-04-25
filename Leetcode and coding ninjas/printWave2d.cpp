//  Print Like A Wave

// For a given two-dimensional integer array/list ‘ARR’ of size (N x M), print the ‘ARR’ in a sine wave order, i.e., print the first column top to bottom, next column bottom to top, and so on.

// For eg:-

// The sine wave for the matrix:-
// 1 2
// 3 4
// will be [1, 3, 4, 2].

// 1 2 3 4 5 6 7 8 9 10 11 12

#include <iostream>
using namespace std;

void printwave(int arr[][4], int mrow, int mcol)
{
    for (int col = 0; col < mcol; col++)
    {
        if (col & 1)
        {
            for (int row = mrow - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
        else
        {
            for (int row = 0; row < mrow; row++)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                     {9, 10, 11, 12}};
    int row = 3;
    int col = 4;
    printwave(arr, row, col);
    return 0;
}
