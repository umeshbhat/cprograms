#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]= { 2, 0, 2, 1, 4, 5, 1, 0 };
    int n=8;
    int p,q;
    int maxlen=1,temp;
    for(int i=0;i<n-1;i++)
    {
    int mn=a[i];int mx=a[i];
    for(int j=i+1;j<n;j++)
    {
   mn=min(mn,a[j]);
   mx=max(mx,a[j]);
   if(mx-mn==j-i)
   {
   maxlen=max(maxlen,j-i+1);

   }
    }
    }
    cout<<maxlen;

    return 0;
}
