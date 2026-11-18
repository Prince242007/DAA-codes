#include<bits/stdc++.h>
using namespace std;
int main(){
    map<pair<int,int>,int> mp;
    mp[{0,1}]=2;
    mp[{0,2}]=2;
    mp[{0,3}]=2;
    mp[{1,4}]=4;
    mp[{2,3}]=3;
    mp[{2,4}]=1;

    unordered_set<int> source={0,1,2,3,4};
    unordered_set<int> destination={};
    int mst=0;
    for(auto it : mp)
    {
        int s=it.first.first;//source
        int d=it.first.second;//destination
        int w=it.second;//weight
        mst+=w;
        if(source.find(s)!=source.end())
        {
            destination.insert(d);
        }
    }

    cout<<mst;

    return 0;
}
