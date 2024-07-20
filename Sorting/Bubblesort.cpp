#include<iostream>
using namespace std;


/**
 * @brief Sorts an array of integers using the bubble sort algorithm
 * 
 * @param arr The array of integers to be sorted
 * @param n The size of the array
 */
void bubsort(int arr[], int n) {
    // Outer loop for traversing the array
    for (int i = 0; i < n - 1; i++) {
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // Swapping if the current element is greater than the next element
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
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
   bubsort(arr,n);
    for(int i = 0;i<n;i++){
            cout<<""<<arr[i]<<" ";
    }
    
    return 0;
}
