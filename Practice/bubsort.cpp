#include<iostream>
using namespace std;

void bubSort(int arr[],int n){
    for(int i = n-1 ; i>=1;i++){
        for(int j = 0 ; j<=i;j++){
              if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        
    }

}
}

int main(){
    int n;
    cout<<"Enter the size";
    cin>>n;
    int arr[10];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    bubSort(arr,n);
     for(int i = 0 ; i<n ; i++){
        cout<<arr[i];
    }
    
    return 0;
}
