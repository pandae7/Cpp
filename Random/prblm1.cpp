//Kth smallest Integer
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

void show(int arr[], int n) 
{ 
    for(int i = 0; i < n ; ++i)
        cout << arr[i] << " "; 
} 

int KthsmallestInteger(int arr[], int k, int n)
{
    sort(arr,arr+n);
    // show(arr,n); 
    if(k == 1){
    return arr[0];}
    else{
        vector<int> temp;
        int var = 0;
        for(int i = 0; i<n ; i++){
            // int var = 0;
            if(arr[i] != var){
                temp.push_back(arr[i]);
                var = arr[i];

            }
        }
    
    return temp[k];

    }
}
int main(){
    int arr[5] = {8,4,5,3,3};
    int k = 1;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "kya chal raha hai" << "\n";
    cout << KthsmallestInteger(arr,k,n);

}