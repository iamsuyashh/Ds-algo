#include<iostream>
using namespace std;

int main(){
    int arr[5] = {0,2,0,1,0};
    int n = 5;
    int i = 0;
    for(int j = 1 ; j<n;j++){
        if(arr[j] != 0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
