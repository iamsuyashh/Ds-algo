#include<iostream>
using namespace std;

int getLength(char arr[]){
    int count = 0;
    for(int i  = 0 ; arr[i] != '\0' ; i++){
        count++;
    }
    return count;
}

int main(){
    char arr[20];
    cout<<"Enter the Name : ";
    cin>>arr;
    cout<<"Length is : "<<getLength(arr);

    return 0;
}
