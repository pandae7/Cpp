#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int mem[100] = {0};
int combo(vector<int> &A,int B,int current){
    int ncombos = 0;
    if(B == 0){ 
        return 1;
    }
    if(B < 0) return 0;
    for(int i = current; i < A.size();i++){   
        ncombos += combo(A,B-A[i],i);
    }
    // cout << mem[2];
    return ncombos;

}

int main(){
    vector<int> A={1,2,3};
    int B = 4;
    cout << combo(A,B,0);
}