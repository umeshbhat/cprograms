#include <iostream>

int nodes[4][4]={
    {0,5,2,999},
    {5,0,1,8},
    {2,1,0,6},
    {999,8,6,0},
    };
using namespace std;

void floyd()
{
for(int i=0;i<4;i++)
{
for(int k=0;k<4;k++)
{
for(int l=0;l<4;l++)
{
if(nodes[i][k]>nodes[i][l]+nodes[l][k])
{
nodes[i][k]=nodes[i][l]+nodes[l][k];
}
}
}
}
int i,j;
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
cout<<nodes[i][j]<<" ";
}
cout<<endl;
}
}
int main()
{

    floyd();
}
