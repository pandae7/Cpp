// Check for a Sub array whose sum is equal to given Number, Array consists of negative integers
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h> 
#include <utility>
using namespace std;


void indexrange(int arr[], int n, int sum)
{   
    int min1 = INT32_MAX;
    for(int i = 0; i < n ; i++)
    {
        min1 = min(arr[i],min1);
    }
    min1 = abs(min1);
    
    for(int i = 0; i < n ; i++)
    {
        arr[i] = arr[i] + min1;
    }
    
    
    int cur_sum = arr[0];
    int K = sum;
    int i = 1;
    int j = 0;
    while (true)
    {
        // cout << "working4";
        if (i == n){
            cout << "subarray doesn't exist";
            break;
        }
        
        
        if (cur_sum < K){
            cur_sum = cur_sum + arr[i];
            K = K+(i*min1);
            i++;
            // cout << "working1";
        }
        
        // cout << "beech ka";
        
        if (cur_sum > K){
            cur_sum = cur_sum - arr[j];
            j++;
            K = K - min1; 
            // cout << "working2";
        }
        
        if (cur_sum == K){
            cout << "subarray between " << j+1 << " and " << i;
            break;
        }
        // cout << "working3";
    }
    // cout << "kya chal raha hai?";
}

int main()
{
    int arr[6] = {1,-3,15,-5,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = -2;
    indexrange(arr,n,sum);

    return 0;
} 