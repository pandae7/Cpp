#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool palindromecheck(string& str) 
{ 
    int n = str.length(); 
  
    // check character starting from two 
    // corners
    int count = 0; 
    for (int i=0, j=n-1; i<j; i++,j--) 
    {
        if(str[i] == str[j]){
            count++;
        }   

    }
    if (count == n/2){
        return true;
    }
    else{
        return false;
    }
} 


// //Recursive Code
bool recursive(string str,int s , int e)
{   
    if (s == e)
        return true;

    if (str[s] != str[e])
        return false;
    if (s < e)
        return recursive(str,s+1,e-1);

}  


// Driver program 
int main() 
{ 
    string str = "ma"; 
    int n = str.length(); 
    cout << palindromecheck(str);
    cout << "\nsecond output\n";
    cout << recursive(str,0,n-1) ;
    return 0; 
} 