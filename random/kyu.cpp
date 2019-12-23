#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > prettyPrint(int A) 
{ 
    if(A == 0){cout << "0";}
    if(A > 0)
    {
    int arraySize = A * 2 - 1; 
    int result[arraySize][arraySize] = {0}; 
          
    // Fill the values 
    for(int i = 0; i < arraySize; i++) 
    { 
        for(int j = 0; j < arraySize; j++) 
        { 
            if(abs(i - (arraySize / 2)) > abs(j - (arraySize / 2))) 
                result[i][j] = (abs(i - (arraySize / 2)) + 1); 
            else
                result[i][j] = (abs(j-(arraySize / 2)) + 1); 
              
        } 
    } 
          
    // Print the array 
    for(int i = 0; i < arraySize; i++) 
    { 
        for(int j = 0; j < arraySize; j++) 
        { 
            cout << result[i][j] << " "; 
        } 
        cout << endl; 
    } 

    }    
} 


int main() {
   int A = 5;
   prettyPrint(A);
   return 0;
}