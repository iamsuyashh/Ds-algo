#include<iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key){
    int start = 0;
    int end = size-1;
    int mid = (start + end) / 2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start + end)/2;
    }
    return -1;
}

int main(){
    int key;
    int size;
    int arr[10];
    cout<<"Enter the size of the elements"<<endl;
    cin>>size;
    for(int i = 0;i<size;i++){
        cout<<"Enter the elements"<<endl;
        cin>>arr[i];
    }
    cout<<"Enter the Key element";
    cin>>key;
    int result = binarySearch(arr,size,key);
    cout<<"The element is found at index : " <<result;
    return 0;
}