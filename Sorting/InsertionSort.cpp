// Optimized Insertion sort code

#include <iostream>
using namespace std;

// InsertSort function: This function implements the Insertion Sort algorithm.
// It takes an array arr and its size n as input.
// It sorts the array in ascending order by repeatedly inserting each element
// into its correct position in the sorted part of the array.
// The function uses a loop to iterate through each element of the array.
// Within each iteration, it sets the variable j to the index of the current element.
// Then, it uses a while loop to compare the current element with the elements
// to its left in the sorted part of the array. If the current element is smaller
// than the element at index j-1, it swaps the elements and decrements j by 1.
// This process continues until the current element is in its correct position
// in the sorted part of the array, or until j becomes 0.
void InsertSort(int arr[], int n)
{
    // Iterate through each element of the array
    for (int i = 0; i < n; i++)
    {
        // Set j to the index of the current element
        int j = i;
        // Compare the current element with the elements to its left in the sorted part of the array
        while (j > 0 && arr[j - 1] > arr[j])
        {
            // Swap the current element with the element at index j-1 if the current element is smaller
            swap(arr[j], arr[j - 1]);
            // Decrement j by 1 to move to the next element in the sorted part of the array
            j--;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the size of the array";
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    InsertSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << "" << arr[i] << " ";
    }

    return 0;
}