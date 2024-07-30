// Problem statement
// You have been given an array ‘a’ of ‘n’ non-negative integers.You have to check whether the given array is sorted in the non-decreasing order or not.
// Your task is to return 1 if the given array is sorted. Else, return 0.
// Example :
// Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
// Output: 1
// The given array is sorted in non-decreasing order; hence the answer will be 1.


#include<iostream>
using namespace std;

int isSorted(int arr[], int n){
    for(int i = 1 ; i<n ; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    cout<<isSorted(arr, n);
    return 0;
}
