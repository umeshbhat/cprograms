#include <bits/stdc++.h>
#include <string>
using namespace std;



int main()
{
    vector<string>magazine;
    vector<string>ransome;
    int a,b;
    cin>>a>>b;
    string iMagazine,iRansome;
    for(int i=0;i<a;i++)
    {
    cin>>iMagazine;
    magazine.push_back(iMagazine);
    }
    for(int i=0;i<b;i++)
    {
    cin>>iRansome;
    ransome.push_back(iRansome);
    }
    map<string,int>data;
    for( int i=0;i<magazine.size();i++)
    {
    string word=magazine[i];
    data[word]++;
    }
    int flag=1;
    for(auto i:ransome)
    {
    if(data[i]>0)
    data[i]--;
    else {flag=0;break;}
    }
    if(flag==1)
    cout<<"Yes";
    else
    cout<<"No";
}
