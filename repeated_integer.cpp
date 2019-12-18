#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// int solution(const vector<int> &A)
void repeatedNumber(const vector<int> &A) {
    vector<bool> v(A.size(), true);
    for (auto i = 0; i < A.size(); ++i) {
        if (v[A[i]]){
            cout << v[A[i]];
            v[A[i]] = false;}
        else
            cout << A[i];
    }
    cout << "-1";
}

int main(){
    vector<int> A = {1,2,4,5,6,4,5,2,5};
    repeatedNumber(A);
    // cout << n;
    return 0;
}
