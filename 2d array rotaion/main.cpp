#include <iostream>
using namespace std;

int main()
{
    int mat[4][4]={
    {1,2,3,4},
    {5,6,7,8},
    { 9,10,11,12},
    {13,14,15,16}
    };

    for(int i=0;i<4;i++)
    {
    for(int j=0;j<4;j++)
    {
    cout<<mat[i][j]<<"\t";
    }
    cout<<endl;
    }
    cout<<"*********************after rotation********************"<<endl;

    int newmat[4][4];
    for(int i=0;i<4;i++)
    {
    for(int j=0;j<4;j++)
    {
    int newcol=4-i-1;
    int newrow=j;
    newmat[newrow][newcol]=mat[i][j];
    }
    }

    for(int i=0;i<4;i++)
    {
    for(int j=0;j<4;j++)
    {
    cout<<newmat[i][j]<<"\t";
    }
    cout<<endl;
    }
    return 0;
}
