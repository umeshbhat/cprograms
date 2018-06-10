#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[] = { 0, 1, 1, 1, 1, 1, 0, 1, 0, 0 };
    int n = sizeof(a)/sizeof(a[0]);
    int count=0;
    for(int i=0;i<n;i++)
    {
    if(a[i]==0)
    count++;
    }

    for(int i=0;i<n;i++)
    {
    if(i<count)a[i]=0;
    else a[i]=1;
    }

    for(int  i:a)
    cout<<i;

    return 0;
}
