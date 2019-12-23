#include<iostream>
#include<bits/stdc++.h>

using namespace std;

 

int solution(const vector<int> &A)
{   
    int n = A.size();
    if (n == 0) return 0;
    int T1[A.size()] = {0};
    int T2[A.size()] = {0};
    for(auto i = 0;i < A.size();i++) T1[i] = 1  ;
    for(auto i = 0;i < A.size();i++) T2[i] = 1  ;
    // for (auto i : T) cout << i << "\t" ;
    // cout << "\n";
    for(int i = 1;i < n;i++){
    
        for(int j = 0;j<i;j++){
            if (A[j] < A[i]){
                T1[i] = max(T1[i],T1[j]+1);
            }
            // else break;
        }
    }
    // for (auto i : T1) cout << i << "\t" ;
    // cout << "\n";
    for(int i = n-2;i > 0;i--){
        for(int j = n-1;j>i;j--){
            if (A[j] < A[i]){
                T2[i] = max(T2[i],T2[j]+1);
            }
            // else break;
        }
    }
    
    // for (auto i : T2) cout << i << "\t" ;
    for(int i = 0;i < n ; i++) T2[i] = T2[i] + T1[i] - 1;
    // cout << "\n";
    // for (auto i : T2) cout << i << "\t" ;
    return *max_element(T2,T2+n); 
}
    
    



int main(){
    const vector<int> A = {1, 3, 5, 6, 4, 8, 4, 3, 2, 1};
    int n = solution(A);
    // solution(A);
    cout << "longest Subsequence " << n << endl; 
}
