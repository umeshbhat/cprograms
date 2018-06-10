#include <iostream>

using namespace std;

int main()
{
    int a[] = { 5, 6, -6, -4, 3, 5, 3, -2, 5},n=9;
    int check=11,start=0,ends=0,sum=0;
    int len=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
        sum=sum+a[j];
        if(sum==check)
        {
        len=j-i+1;

        }
        if(j-i>len)
        {
        start=i;ends=j;
        len=j-i;
        }
        }
        sum=0;
    }

    for(int i=start;i<=ends;i++)
    cout<<a[i]<<" ";
    return 0;
}
