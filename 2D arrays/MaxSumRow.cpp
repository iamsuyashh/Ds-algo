// Gives the maximum row of which has highest sum;

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

int MaxSum(int arr[][3] , int row , int col){

    int maxi  =  INT8_MIN;
    int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if(sum>maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum is : "<<maxi<<endl;
    return rowIndex;
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
    int ansIndex = MaxSum(arr ,3 ,3);
    cout<<"the row Index is " << ansIndex;
    return 0;
}
