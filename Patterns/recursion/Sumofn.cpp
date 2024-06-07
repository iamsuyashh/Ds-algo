// Sum of n using recurison

#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return sum(n - 1) + n;
}

int main()
{
    int n = 3;
    cout<<sum(n);
    return 0;
}
