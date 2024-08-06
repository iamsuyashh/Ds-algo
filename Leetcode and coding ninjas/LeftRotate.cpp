// Problem statement
// Given an array 'arr' containing 'n' elements, rotate this array left once and return it.
// Rotating the array left by one means shifting all elements by one place to the left and moving the first element to the last position in the array.
// Example:
// Input: 'a' = 5, 'arr' = [1, 2, 3, 4, 5]
// Output: [2, 3, 4, 5, 1]




#include<iostream>
using namespace std;

int rotate(int arr[],int n){
    int temp = arr[0];
    for(int i = 1 ; i<n ;i++ ){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}

int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    cout<<"The rotated array is :";
    rotate(arr,n);
    return 0;
}
