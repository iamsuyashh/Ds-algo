#include<iostream>
using namespace std;

void SelecSort(int arr[] , int n){
    for(int i = 0;i < n - 1;i++){
        int minIndex = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex] , arr[i]);
    }
}

void printArray(int arr[], int n)
{
for (int i = 0; i < n; i++)
{
cout << " " <<arr[i] ;
}
cout << endl;
    
}


int main(){
    int size;
    cout<<"Enter the size of the array\n";
    cin>>size;
    int arr[10];
    cout<<"Enter the Elements of the Array\n";
    for(int i = 0  ; i < size ; i++ )
    {
        cin>>arr[i];
    }
    SelecSort(arr,size);
    printArray(arr,size);
    return 0;
}
