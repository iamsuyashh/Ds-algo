// the logic same as reversearray of swapping the change here is that instead of swapping 1 nd last element we will swap i'th element  and i+1 and incrementing it by i+= 2element that is element next to it

#include <iostream>
using namespace std;

void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the array : " << endl;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    swapalternate(arr, size);
    printArray(arr, size);
}
