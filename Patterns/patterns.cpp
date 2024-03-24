// list of patterns using below:
// 1.Simple Pyramid Pattern
// 2.Flipped Simple Pyramid Pattern
// 3.Inverted Pyramid


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
    cout << "\n Enter the size of the pyramid : ";
    cin >> n;
    int i = 0;
    while (i <= n)
    {
        int j = 0;
        while (j < i)
        {
            cout << "*";
            j++;
        }
        cout << " " << endl;
        i++;
    }
}

void Invertedpyramid(){
    int rows;
    cout<<"Enter the Size of the pyramid";
}

int main()
{
    int number;
    cout << endl;
    cout << " ************  Select the number of patterns from the list below : ************";
    cout << "\n 1. Click to get the simple pyramid.\n"<< endl;
    cout << "\n 2. Click to get the flipped simple pyramid.\n"<< endl;
    
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

    default:
        cout << "Please Enter a valid Number to see the patterns";
        break;
    }
}