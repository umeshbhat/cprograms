#include <iostream>
#include<stdlib.h>
#include<map>
#include<iterator>

using namespace std;

map<string,int>data;
map<string,int>::iterator itr;
void insertdata(string str)
{
for(itr=data.begin();itr!=data.end();itr++)
{
if((*itr).first==str)
{
(*itr).second++;
break;
}else
{
data.insert(pair<string,int>(str,0));}
}
}
void check(string str)
{
for(itr=data.begin();itr!=data.end();itr++)
{
if((*itr).first==str)
{
cout<<(*itr).second<<endl;
break;
}
else cout<<0<<endl;
}
}
int main()
{
cout<<"Enter the size";
    int n;
    cin>>n;
  string input[1000000];
  for(int i=0;i<n;i++)
  {
  cin.ignore();
  cin>>input[i];
  }
  for(int i=0;i<n;i++)
  {
  insertdata(input[i]);
  }
  int q;
  cin>>q;
  string query[100000];
  for(int i=0;i<q;i++)
  {
  cin.ignore();
  cin>>query[i];
  }
  for(int i=0;i<q;i++)
  {
  check(query[i]);
  }
    return 0;
}
