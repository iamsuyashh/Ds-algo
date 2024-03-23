// Coding ninjas problem  :  Find Unique : --> The logic of the problem is that we have used Xor operation where th logic of using it that there are 2m+1 condition given where the 2 elements of 2 pairs will be same and 1 will be unique so ill assign ans = 0 as the initial value and perform  xor operation [0^arr[i]] so it non zero value will be remaing


#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}


int main()
{
    int size;
    cout<<"Enter the Size of the element : ";
    cin >> size;
    int arr[10];
    for (int i = 0; i <size; i++)
    {
        cout<<"Enter the elements : ";
        cin >> arr[i];
    }
    cout<<findUnique(arr,size);
}
