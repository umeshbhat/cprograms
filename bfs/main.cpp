#include <iostream>
#include<queue>
#include<vector>
using namespace std;


int main()
{
vector<int> v[100];
cout<<"\nEnte the number of the vertices\n";
int vert,a,b,edges;
cin>>vert;
cout<<"\nEnter the number of the edges\n";
cin>>edges;
for(int i=0;i<edges;i++)
{
cout<<"\nEnter the edge number \n"<<i+1;
cin>>a>>b;
v[a].push_back(b);
v[b].push_back(a);
}
int visited[100];
for(int i=0;i<100;i++)
{
visited[i]=0;
}
queue<int> q;
int start;
cout<<"\nEnter the starting point for traversal\n";
cin>>start;
q.push(start);
visited[start]=1;


while(!q.empty())
{
int element=q.front();
q.pop();
cout<<element<<"-->";
vector<int>::iterator itr;
for(itr=v[element].begin();itr!=v[element].end();itr++)
{
if(visited[*itr]==0){
q.push(*itr);
visited[*itr]=1;
}
}
}

    return 0;
}
