// this program will count the number of times each character appears in a string using hash maps

// IN ordered hash map it willl give output in an sequence manner but in under ordered hash map it will give output in random manner
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        
        hash[s[i]] += 1;
    }

    int q;
    cout<<"Enter the number of the characters";
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c] << endl;
    }
    return 0;
}
