#include<iostream>
using namespace std;
/**
 * @brief Sorts an array of integers using the selection sort algorithm
 * 
 * @param arr The array of integers to be sorted
 * @param n The size of the array
 */
void Sort(int arr[], int n) {
    // Iterate through the array from the first element to the second last element
    for (int i = 0; i < n - 1; i++) {
        // Initialize the minimum index to the current element
        int minIndex = i;
        // Iterate through the array from the current element + 1 to the last element
        for (int j = i + 1; j < n; j++) {
            // If the current element is greater than the element at the minimum index
            if (arr[j] < arr[minIndex]) {
                // Set the minimum index to the current element
                minIndex = j;
            }
        }
        // Swap the element at the minimum index with the element at the current index
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
//    Sort(arr,n);
    for(int i = 0;i<n;i++){
            cout<<""<<arr[i]<<" ";
    }
    
    return 0;
}
