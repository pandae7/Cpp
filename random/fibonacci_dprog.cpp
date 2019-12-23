#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int mem[100] = {0};

int solution(int n){
    if (n <= 1) return n;
    if (mem[n] != 0 ) return mem[n];

    mem[n] = solution(n-1) + solution(n-2);
    return mem[n];
}

int main(){
    int n = 6;
    cout << "fiboacci number is " << solution(n);
    return 0;   
}