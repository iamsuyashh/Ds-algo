#include<iostream>
using namespace std;


void Sort(int arr[],int n){
        for(int i  = 0 ; i<n-1;i++){
            for(int j = i+1 ; j<n;j++){
                int minIndex = i;
                if(arr[j]<arr[minIndex]){
                    swap(arr[j],arr[minIndex]);
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
   Sort(arr,n);
    for(int i = 0;i<n;i++){
            cout<<""<<arr[i]<<" ";
    }
    
    return 0;
}
