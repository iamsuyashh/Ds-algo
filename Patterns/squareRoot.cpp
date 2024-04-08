#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the Size of the Array : ";
    cin>>size;
    int arr[100];
    cout<<"Enter the elements";
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }    
    return 0;
}

