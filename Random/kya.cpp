#include <iostream>
#include <algorithm>
#include <bits/stdc++.h> 
#include <utility>

using namespace std;

void show(int arr[], int n) 
{ 
    for(int i = 0; i < n ; ++i) 
        cout << arr[i] << " "; 
} 
  

// int mindifference(int arr[], int n)
// {
//     sort(arr, arr+n);
//     show(arr,n);
//     int min = arr[0];
//     for(int i=0 ; i < n-1 ; i++)
//         { 
//          if ((arr[i+1] - arr[i]) < min);
//          min = arr[i+1] - arr[i];   
//         }
//     return min;
// }

int minjumps(int fb[], int* ip[], int n )
{   
    vector<int> counter;
    int diff = ip[n] - ip[-1];
    int* p1 = bsearch



}

int main()
{   
    int arr[6] = {1,1,0,0,1,1};
    int n =  sizeof(arr) / sizeof(arr[0]);

    vector<int*> ip;
    ip.push_back(&arr[-1]);
    for(int i = 0 ; i < 6 ; i++)
        {
         if (arr[i] == 1)
         { 
             ip.push_back(&arr[i]);
         }   

        }
    ip.push_back(&arr[n]);
    cout << "\n ip Vector elements are: "; 
    for (auto it = ip.begin(); it != ip.end(); it++) 
        cout << *it << " "; 
    vector<int> fb;
    int sum = 0;
    fb.push_back(0);
    fb.push_back(1);
    // cout << fb[1] ;
    for(int i = 1; i < n ; i++)
        {
            sum = fb[i] + fb[i-1];
            // sum += fb[i];
            fb.push_back(sum);
        }
    cout << "\n fb Vector elements are: "; 
    for (auto it = fb.begin(); it != fb.end(); it++) 
        cout << *it << " "; 
    
    
    
    // cout << "\n" << ip[0] << " " << ip[1] << " " <<ip[2] << "\n";
    cout << "\n" <<ip.end() - ip.begin() << endl;
    return 0 ;
} 


