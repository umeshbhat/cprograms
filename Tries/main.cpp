#include<bits/stdc++.h>
#include<vector>
#include<iterator>
#include<map>
int a[100][100];
using namespace std;
void color(int p,int q,int k,int m,int n)
{
    if(p<m && p>=0 && q<n && q>=0)
    {
        int oldcol=a[p][q];
        a[p][q]=k;
        if(p-1>=0 && a[p-1][q]==oldcol)
        {
            color(p-1,q,k,m,n);
        }
        if(p+1<m && a[p+1][q]==oldcol)
        {
            color(p+1,q,k,m,n);
        }
        if(q-1>=0 && a[p][q-1]==oldcol)
        {
            color(p,q-1,k,m,n);
        }
        if(q+1<n && a[p][q+1]==oldcol)
        {
            color(p,q+1,k,m,n);
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>m>>n;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }
        int p,q,k;
        cin>>p>>q>>k;
        color(p,q,k,m,n);
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;

    }
    return 0;

}
