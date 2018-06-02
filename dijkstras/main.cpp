#include <iostream>
#include <stdlib.h>

#define V 9
using namespace std;
void printSolution(int distance[])
{
cout<<"\ncost from given source is\n";
for(int i=0;i<9;i++)
{
cout<<i<<" node at distance "<<distance[i]<<endl;
}
}
int findmin(int distance[], int visited[])//for finding adjacent node with miniumum distance.so ssearch for minimum elemnet by iterating all the nodes and checking their distance from src
{
int minvalue=999;//because we havent reached there yet
int minindex; //this we have to find and return
for(int v=0;v<9;v++) //we will only assign the values to nodes which are possible to reach
{
if(visited[v]==0 && distance[v]<=minvalue)//in our first run , we get this distance[v]=0<999 because of distance[src]=0
{
minvalue=distance[v];
minindex=v;
}
}
return minindex;

}





void dijkstra(int graph[V][V], int src)
{
int visited[9];
std::fill(visited,visited+9,0);
int distance[9];
std::fill(distance,distance+9,999);
distance[src]=0;//as its the source
//visited[src]=1//as its the source

for(int i=0;i<9;i++)
{
//Pick the minimum distance vertex from the set of vertices not
       // yet processed. u is always equal to src in the first iteration.
//find the index of one with minimum distance corresponding to the element which is visite (in begining its source)
int u=findmin(distance,visited);
visited[u]=1;
//now that ive got the minimum indexed nodes,ill now try to update the distance of adjacent value if its less than distance of
//node u  and those who are adjacent by for loop;
for(int count=0;count<9;count++)
{
if(visited[count]==0 && graph[u][count]!=0 && distance[u]+graph[u][count]<=distance[count])
{
distance[count]=distance[u]+graph[u][count];
}
}
}
printSolution(distance);
}
int main()
{

   int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                      {4, 0, 8, 0, 0, 0, 0, 11, 0},
                      {0, 8, 0, 7, 0, 4, 0, 0, 2},
                      {0, 0, 7, 0, 9, 14, 0, 0, 0},
                      {0, 0, 0, 9, 0, 10, 0, 0, 0},
                      {0, 0, 4, 14, 10, 0, 2, 0, 0},
                      {0, 0, 0, 0, 0, 2, 0, 1, 6},
                      {8, 11, 0, 0, 0, 0, 1, 0, 7},
                      {0, 0, 2, 0, 0, 0, 6, 7, 0}
                     };

    dijkstra(graph, 0);

    return 0;
}
