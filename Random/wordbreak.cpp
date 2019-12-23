#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

bool search(string A,vector<string> B){
    for (int i = 0; i < B.size() ; i++){
        if(B[i] == A) return true;
    }
    return false;
}

int solution(string A,vector<string> B)
{
    if (A.size() == 0) return 0;
    int n = A.size();
    vector<int> temp(n+1,0);
    temp[n] = 1;
    for(int i = n-1; i >= 0; i--){
        for(int j = i;j < n;j++){
            string s = A.substr(i,j-1+1);
            if(temp[j+1] && search(s,B)){
                temp[i] = 1;
            }
        }
    }
    return temp[0];
}