// row wise and coloumn wise sum print

#include <iostream>
using namespace std;

// row wise sum
int rowSum(int arr[][3], int row, int col)
{
    cout<<"the row sum is : ";
    for (int row = 0; row < 3; row++)
        
    {int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

// coloumn wise sum
int Colsum(int arr[][3], int row, int col)
{
    cout<<"the col wise sum is ";
    for (int col = 0; col < 3; col++)
    {int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[3][3];
    cout << "Enter the elements separated by spaces:" << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cin >> arr[row][col];
        }
    }

    rowSum(arr, 3, 3);
    Colsum(arr, 3, 3);
    return 0;
}
