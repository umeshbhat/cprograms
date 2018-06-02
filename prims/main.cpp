#include <iostream>

using namespace std;

#define V 5
void printsol(int parent[V],int graph[V][V])
{
 printf("Edge   Weight\n");
   for (int i = 1; i < V; i++)
      printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
}


int countmin(int key[V],int visited[V])
{
int min=999;
int index;
for(int i=0;i<V;i++)
{
if(visited[i]==0 && key[i]<min)
{
index=i;
min=key[i];
}
}
return index;
}



void prim(int graph[V][V])
{
int visited[V];
int parent[V];
int key[V];
for(int i=0;i<V;i++)
{
visited[i]=0;
key[i]=999;
}
parent[0]=-1;
key[0]=0;

for(int count=0;count<V-1;count++)
{
int u=countmin(key,visited);
visited[u]=1;
for(int v=0;v<V;v++)
{
if(graph[u][v] && !visited[v] && graph[u][v]<key[v])
{
parent[v]=u;key[v]=graph[u][v];
}
}
}
printsol(parent,graph);
}
int main()
{
    int graph[V][V] = {{0, 2, 0, 6, 0},
                      {2, 0, 3, 8, 5},
                      {0, 3, 0, 0, 7},
                      {6, 8, 0, 0, 9},
                      {0, 5, 7, 9, 0},
                     };

    // Print the solution
    prim(graph);
    return 0;
}
