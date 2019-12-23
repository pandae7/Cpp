// Checking if we can recursively empty the string with a sub-string
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool deletion(string str, string sub)
{
    while(str.size() > 0){
        int idx = str.find(sub);
        if(idx == -1)
            break;
        
        str.erase(idx, sub.size());
         
    }
    return (str.size() == 0);
}

int main()
{
    string str = "GEEGEEKSKS";
    string sub = "GEEKS"; 
    cout << deletion(str,sub);
}
