#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int Pos(const vector<int> &A, int B, bool flagfirst)
{
    int start = 0, end = A.size()-1;
    int pos = -1;
    while(start<=end)
    {
        int mid = start + (end - start)/2;
        if (A[mid] == B) 
        {
            pos = mid;
            if (flagfirst)          
                end = mid - 1;
            else
                start = mid + 1;
        }
        else if (B < A[mid])
            end = mid - 1;
        else 
            start = mid + 1;
    }
    return pos;
}

int Solution::findCount(const vector<int> &A, int B) {
      
    int i = Pos(A, B, true);
    if (i==-1)
        return 0;
    int j = Pos(A, B, false);
    return j - i + 1;
}