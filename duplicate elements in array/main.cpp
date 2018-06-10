#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a[] = {1,2,3,4,5,2,7,8,9,2};
   map<int,int> v;
   for(int i=0;i<10;i++)
   {
   if(v.find(a[i])!=v.end())
   {
   cout<<a[i];
   }
   else
   {
   v.insert(std::pair<int,int>(a[i],1));
   }
   }
    return 0;
}
