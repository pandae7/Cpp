#include<iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> B){
    int n = B.size();
    pair<int,int> pp;
    map<int,pair<int,int>> hash;
    int i,j;
    for(int i = 0; i< n ; i++){
        for(int j = i+1;j<n;j++){
            int sum = B[i] + B[j];
            if(hash.find(sum) == hash.end()){
                hash[sum] = make_pair(i,j); 
            }
            else{
                pp = hash[sum];
                return;
            }
        }
    }
    return {pp.first,pp.second,i,j};

}