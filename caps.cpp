#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void firstCAP(string str)
{   
    vector<int> vec;
    for(int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i])){
            vec.push_back(i);
            // break;
        }
    }
    cout << str[vec[0]] << " " << str[vec[1]];
}

int main()
{
    string str = "amaNpanDae";
    firstCAP(str);
}