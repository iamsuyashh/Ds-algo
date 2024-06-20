#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (num == arr[i])
        {
            cout << "Element is present at : ";
            return i; // Return index of the element found
        }
    }
    cout << "Element is not present";
    return -1; // Return -1 if element not found
}

int main()
{
    cout << "Enter the Size" << endl;
    int size;
    cin >> size;
    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element you want to search";
    int num;
    cin >> num;
    
    int result = linearSearch(arr, size, num);
    cout << result; // Output the index of the element found (-1 if not found)
    return 0;
}
