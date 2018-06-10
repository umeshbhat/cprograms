#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a[]={8, 7, 2, 5, 3, 1};

    for(auto i:a)
   cout<<i<<"\t";
   int i,j;
   int sum;
   cin>>sum;
   for(i=0;i<5;i++)
   {
   for(j=i+1;j<6;j++)
   {
   if(a[i]+a[j]==sum)
   {
   cout<<a[i]<<" "<<a[j]<<endl;
   }
   }
   }
    return 0;
}
