#include <iostream>
#include<stdlib.h>
#include<map>
#include<iterator>

using namespace std;

map<string,int> data;
map<string,int>::iterator itr;
void insertdata(string str)
{
itr=data.find(str);
if(itr!=data.end())
{
(*itr).second++;

cout<<"duplicate found"<<(*itr).second;
}else
data.insert(pair<string,int>(str,1));

}
void check(string str)
{
int count=0;
for(itr=data.begin();itr!=data.end();itr++)
{
if((*itr).first==str)
{
count++;
}

}
cout<<count<<endl;
}
int main()
{
    int n;
    cin>>n;
  string input[1000];
  for(int i=0;i<n;i++)
  {
  cin>>input[i];
  }
  for(int i=0;i<n;i++)
  {
  insertdata(input[i]);
  }
  int q;
  cin>>q;
  string query[1000];
  for(int i=0;i<q;i++)
  {
  cin>>query[i];
  }
  for(int i=0;i<q;i++)
  {
  check(query[i]);
  }
    return 0;
}
