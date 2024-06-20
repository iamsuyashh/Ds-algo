#include <iostream>
using namespace std;

bool palindromeString(char arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (arr[s] != arr[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
        return 1;
    }
}

int getLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char arr[20];
    cout << "Enter the string : ";
    cin >> arr;
    int len = getLength(arr);

    cout << "Palindrome or not : " << palindromeString(arr, len);
    return 0;
}
