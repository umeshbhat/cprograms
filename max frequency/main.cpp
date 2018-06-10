#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string data="ssssrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrraaccccccccabbc";
    map<char,int> d;
    map<char,int>::iterator itr,track;
    for(int i=0;i<data.length();i++)
    {
    if(d.find(data[i])!=d.end())
    {
   d[data[i]]+=1;
    }
    else
    {
     d.insert(pair<char,int>(data[i],1));
    }
    }

    for(itr=d.begin();itr!=d.end();itr++)
    {
    cout<<itr->first<<" "<<itr->second<<endl;
    }
cout<<"*****************"<<endl;

track=d.begin();

for(itr=d.begin();itr!=d.end();itr++)
    {
    if(itr->second>=track->second)
    {
   track=itr;
    }
    }
cout<<track->first;

    return 0;
}
