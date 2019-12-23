#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
// Function to reverse a string 
void reverseStr(string& str) 
{ 
    int n = str.length(); 
  
    // Swap character starting from two 
    // corners 
    for (int i=0, j=n-1; i<j; i++,j--) 
        swap(str[i], str[j]);   
} 
  
// Driver program 
int main() 
{ 
    string str = "amanpandae"; 
    reverseStr(str); 
    cout << str; 
    return 0; 
} 