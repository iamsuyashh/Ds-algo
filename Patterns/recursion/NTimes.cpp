// Print numbers from 1 to N without the help of loops.

// Example 1:

// Input:
// N = 10
// Output: 1 2 3 4 5 6 7 8 9 10

// Example 2:

// Input:
// N = 5
// Output: 1 2 3 4 5

#include<iostream>
using namespace std;

int recur(int i , int n){
    if(i<=n){
        cout<<i<<" ";
    }
    recur(i+1,n);
}


int main(){
    int i = 1;
    int n = 10;
    recur(i,n);
    return 0;
}
