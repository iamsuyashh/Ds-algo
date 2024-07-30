// Problem statement
// Given an array ‘arr’ of size ‘n’ find the largest element in the array.
// Example:

// Input: 'n' = 5, 'arr' = [1, 2, 3, 4, 5]
// Output: 5
// Explanation: From the array {1, 2, 3, 4, 5}, the largest element is 5.


#include<iostream>
using namespace std;

int findLargestElement(int arr[], int n){
    int max = arr[0];
    for(int i  = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }

    }
    return max;
    }

int main(){
    int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = findLargestElement(arr2, n);
  cout << "The largest element in the array is: " << max<<endl;
  return 0;
}

