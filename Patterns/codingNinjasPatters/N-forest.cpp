// Patterns followed from Strivers sheet : - https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/

#include <iostream>
using namespace std;

void pattern1(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void pattern2(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void pattern3(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern4(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern5(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < size - i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void pattern6(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size - i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
void pattern7(int size)
{
    for (int i = 0; i < size; i++)
    {
        // space
        for (int j = 0; j < size - i - 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < size - i - 1; j++)
        {
            cout << " ";
        }
        cout<<endl;
    }
}

int main()
{
    int size;
    cout << "Enter the size of the pattern";
    cin >> size;
    // pattern1(size);
    // pattern2(size);
    // pattern3(size);
    // pattern4(size);
    // pattern5(size);
    // pattern6(size);
    pattern7(size);

    return 0;
}
