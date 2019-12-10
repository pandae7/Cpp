// incompete...********* please focus on this Problem **************
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void solution(int arr[4][4],vector<int> path,vector<int> rand, int n)
{
    int x = 0;
    int y = 0;
    while(x > 0 && y > 0 && x <= n-1 && y <= n-1){
        if(arr[x+1][y] = 1){
            path.push_back('D');
            x++;
            solution(arr,path,rand,n);
            path.pop_back();

        }

    }

}




int main(){
    int arr[4][4] = {};
    int n = 4;
    vector<int> path;
    vector<int> rand;
    return 0;
}