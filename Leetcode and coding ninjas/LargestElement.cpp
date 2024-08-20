// Problem statement
// Given an array ‘arr’ of size ‘n’ find the largest element in the array.
// Example:

// Input: 'n' = 5, 'arr' = [1, 2, 3, 4, 5]
// Output: 5
// Explanation: From the array {1, 2, 3, 4, 5}, the largest element is 5.

#include<iostream>
using namespace std;

int largest(int arr[],int n){
    int largest = arr[0];
    for(int i = 0 ; i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    cout<<largest(arr,n);
    return 0;
}
