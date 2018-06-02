#include <iostream>
#include<queue>
#include<vector>

using namespace std;
 vector<int> v[100];
 bool visited[100];

 void dfs(int start)
 {
 visited[start]=true;
 cout<<start<<"-->";
 vector<int>::iterator itr;
 for(itr=v[start].begin();itr!=v[start].end();itr++)
 {
 if(visited[*itr]==false)
 {
 visited[*itr]=true;
 dfs(*itr);
 }
 }
 }

int main()
{
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
int start;
std::fill(visited,visited+100,false);
cout<<"Enter the starting vertex for dfs traversal";
cin>>start;
dfs(start);
    return 0;
}
