#include<iostream>
using namespace std;

int main(){
int n = 5;
   int i = n;
    while (i > 0) {
        int j = n - i;
        while (j > 0) {
            cout << "  ";
            j--;
        }

        int k = i;
        while (k > 0) {
            cout << "* ";
            k--;
        }

        cout << endl;
        i--;
    }
    return 0;
}
