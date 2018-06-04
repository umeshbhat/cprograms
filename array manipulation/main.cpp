#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int q;
    cin>>q;
    int **a=new int*[4];
    std::fill(a,a+n+1,0);
    int query[100000][5];
    for(int i=1;i<=q;i++)
    {
    for(int j=1;j<=3;j++)
    {
  cin>>query[i][j];
    }
    }
   //int count=0;
    for(int i=1;i<=q;i++)
    {
    int sp=query[i][1];

    int fp=query[i][2];
    int value=query[i][3];

    for(int j=sp;j<=fp;j++)
    {
    a[j]+=value;
    }
    }

    cout<<*std::max_element(a,a+1000000);
    return 0;
}
