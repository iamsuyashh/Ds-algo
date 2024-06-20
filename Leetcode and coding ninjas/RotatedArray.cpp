// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

// Example 1:

// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
// Example 2:

// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation:
// rotate 1 steps to the right: [99,-1,-100,3]
// rotate 2 steps to the right: [3,99,-1,-100]

#include <iostream>
using namespace std;

void rotate(int arr[], int k, int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];                                     
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}
        
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size = 7;
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(arr, k, size);
    printArray(arr, size);

    return 0;
}
