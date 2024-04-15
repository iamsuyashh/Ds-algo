#include <iostream>
using namespace std;

void insertionSort(int arr[] , int n)
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {

            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j + 1] = temp;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

int main(){
    int size;
    cout << "Enter the Size of the array : ";
    cin >> size;
    int arr[10];
    cout << "Enter the elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    insertionSort(arr,size);
    printArray(arr,size);
}
