// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// input 0,1,0,3,12
#include <iostream>
#include<vector>
using namespace std;

int moveZeros(int arr[], int n)
{  
    int i  = 0;
    for(int j = 1 ; j<n; j++ ){
        if(arr[j] != 0){
            swap(arr[j] , arr[i]);
            i++;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
}

int main()
{
    int arr[10];
    int size;
    cout << "Enter the size of the Array";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the elements";
        cin >> arr[i];
    }
    moveZeros(arr, size);
    printArray(arr,size);

    return 0;
}
