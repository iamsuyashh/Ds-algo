// Maximum and minimum array 


#include <iostream>
using namespace std;

int max(int arr[], int n)
{
    int max = INT8_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int min(int arr[], int n)
{
    int min = INT8_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << " The Maximum value is " << max(arr, size);
    cout << " The Minimum value is " << min(arr, size);
    return 0;
}