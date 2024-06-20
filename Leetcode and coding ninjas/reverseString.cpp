// //Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.
// Example 1:
// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:
// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char> &s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start < end)
    {
        swap(s[start++], s[end--]);
    }
}

int main()
{
    vector<char> s;
    cout << "Enter the String you want to reverse : ";
    string input;
    cin >> input;
    for (char c : input)
    {
        s.push_back(c);
    }

    reverseString(s);

    cout << "The reversed String is : ";
    for (char c : s)
    {
        cout << c;
    }
    cout << endl;

    return 0;

    return 0;
}
