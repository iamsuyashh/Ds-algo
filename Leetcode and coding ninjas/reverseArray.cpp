// practicing vector
// reversed array using vector
// Problem statement
// Given an array/list 'ARR' of integers and a position ‘M’. You have to reverse the array after that position.

// Example:

// We have an array ARR = {1, 2, 3, 4, 5, 6} and M = 3 , considering 0 
// based indexing so the subarray {5, 6} will be reversed and our 
// output array will be {1, 2, 3, 4, 6, 5}.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 10
// 0 <= M <= N <= 5*10^4
// -10^9 <= ARR[i] <= 10^9

// Time Limit: 1 sec
// Sample Input 1:
// 2
// 6 3
// 1 2 3 4 5 6
// 5 2
// 10 9 8 7 6

#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size() - 1;
    while (s <= e)
    {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    int input;
    cout << "Enter the size of the vector: ";
    cin >> size;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        cin >> input;
        v.push_back(input);
    }

    vector<int> ans = reverse(v);
    print(ans);
    return 0;
}
