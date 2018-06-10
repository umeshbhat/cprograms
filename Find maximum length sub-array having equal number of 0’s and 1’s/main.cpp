#include <iostream>

using namespace std;

int main()
{
    int a[]={ 0, 0, 1, 0, 1, 0, 0 };
    int n=sizeof(a[])/sizeof(a[0]);
        for(int i=0;i<n;i++)
    {if(a[i]==0)
    a[i]=-1;
    }cout<<"umesh"<<len;
    int sum=0,sp,fp,len=0,temp=0;
    for(int i=0;i<n;i++)
    {
    sp=i;
    for(int j=i;j<n;j++)
    {
    sum+=a[j];
    if(sum==0)
    {
   if (len < j - i + 1)
                {
                    len =  j - i + 1;
                    fp = j;
                }
    }
    }
    }
    cout<<"umesh"<<len;
    return 0;
}
