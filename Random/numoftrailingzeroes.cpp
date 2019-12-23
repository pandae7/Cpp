#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int zeroes(int n){
    // int A = n;
    int count;
    int temp = n/5;
    while(temp >= 5){
        count = count + temp;
        temp = temp/5;
    }
    return count+temp;    
}

int main(){
    int n = 9247;
    int count = zeroes(n);
    cout << count;
    return 0;
}