// list of patterns using below:
// 1.Simple Pyramid Pattern >
// 2.Flipped Simple Pyramid Pattern >
// 3.Inverted Pyramid
// 6.Inverted Triangle >


#include <iostream>
using namespace std;
void  FlippedsimplePyramid(){
    int n;
    int k;
    int j;
    cout << "\n Enter the size of the pyramid : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        j = i;
        while (j < n)
        {
            cout<< " ";
            j++;
        }
        k=1;
        while(k<=i){
            cout<<"*";
            k++;
        }
        cout << " " << endl;
        i++;
    }
}


void simplePyramid()
{
    int n;
    cout << "\n Enter the size of the pyramid : \n";
    cin >> n;
    int i = n;
    while (i <= 0)
    {
        int j = 1;
        while (j < i)
        {
            cout << "*";
            j--;
        }
        cout << " " << endl;
        i++;
    }
}

void Invertedpyramid(){
    int rows;
    cout<<"Enter the Size of the pyramid";
    cin>>rows;
    int i , j;
    while(i<=rows){
        j = 1;
        while(j<i){
            cout<<"*";
            j--;
        }
        cout<<endl;
        i++;
    }
}

void InvertedTraingle(){
    int rows;
    cout<<"Enter the Size of the pyramid";
    cin>>rows;
    int i = rows;
    int j;
    int k;
    while(i>0){
        j=0;
        while(j<rows-i){
            cout<<" ";
            j++;
        }
        k = i;
        while (k>0)
        {
            cout<<"* ";
            k--;
        }
        
        cout<<endl;
        i--;
    }
}

int main()
{
    int number;
    cout << endl;
    cout << " ************  Select the number of patterns from the list below : ************";
    cout << "\n 1. Click to get the simple pyramid. "<< endl;
    cout << "\n 2. Click to get the flipped simple pyramid. "<< endl;
    cout << "\n 3. Click to get the flipped simple pyramid. "<< endl;
    cout << "\n 6. Click to get the Inverted Triangle. "<< endl;
    
    // Taking the input from the user
    
    cout << "Enter the number of your choice : ";
    cin >> number;

    switch (number)
    {
    case 1:
        simplePyramid();
        break;
    case 2:
        FlippedsimplePyramid();
        break;
    case 3:
        Invertedpyramid();
        break;
    case 6:
        InvertedTraingle();
        break;

    default:
        cout << "Please Enter a valid Number to see the patterns";
        break;
    }
}