#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int num){
    for(int i = 0 ; i<n;i++){
        if(num == arr[i]);
        return i;
    }
    return -1;}



int main(){
    cout<<"Enter the Size"<<endl;
    int size;
    cin>>size;
    int arr[100];
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search";
    int num;
    cin>>num;
    return 0;
    int result = linearSearch(arr,size,num);
    cout<<result;
}
