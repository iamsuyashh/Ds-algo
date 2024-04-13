#include <iostream>
using namespace std;

void bubSort(int arr[] , int n){
    for(int i = 1;i < n ; i++){
        for (int j = 0; j < n-i; j++)
        {
            if(arr[j] > arr[j+1])
            swap(arr[j] , arr[j+1]);
        }
        
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the Size of the array : ";
    cin >> size;
    int arr[10];
    cout << "Enter the elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        
    }
    bubSort(arr,size);
    printArray(arr,size);
    return 0;
}
