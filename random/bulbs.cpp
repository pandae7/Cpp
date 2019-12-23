#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int switches(vector<int> A)
{
    int count = 0;
    int n = A.size();
    int toggle = 0;
    for(auto i = 0;i<n;i++){
        if(toggle) A[i] = 1 - A[i];
        if(A[i] == 0){
            if(toggle) toggle = 0;
            else toggle = 1;
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> A = {0};
    int count = switches(A);
    cout << count << endl;
    return 0;
}