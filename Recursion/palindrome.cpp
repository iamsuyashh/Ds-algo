#include<iostream>
using namespace std;

bool palindrome(string s, int start, int end){
    if(start >= end){
        cout << "start: " << start << ", end: " << end << ", returning true" << endl;
        return true ;
    }   
    if(s[start] != s[end]){
        cout << "start: " << start << ", end: " << end << ", returning false" << endl;
        return false;
    }
    cout << "start: " << start << ", end: " << end << ", calling palindrome recursively" << endl;
    return palindrome(s, start+1, end-1);
}

int main(){
    string s = "MADAM";
    bool isPalindrome = palindrome(s, 0, s.length()-1);
    if(isPalindrome){
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}