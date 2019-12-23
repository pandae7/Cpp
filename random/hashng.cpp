#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int,int> mp;
    mp.insert(make_pair(1,100));
    mp.insert(make_pair(3,600));
    mp.insert(make_pair(4,100));
    mp.insert(make_pair(6,900));

    for(auto i = mp.begin(); i != mp.end() ; i++){
        cout << i->first << "\t" << i->second << "\n" ;
    }
}
