#include <iostream>

using namespace std;

void printallSubarrays(int arr[],int n)
{
int sum=0;
for(int i=0;i<n;i++)
{
for(int j=i;j<n;j++)
{
sum+=arr[j];
if(sum==0)
{
cout<<"lb "<<i<<" ub "<<j<<" ";
for(int k=i;k<=j;k++)
cout<<arr[k]<<"\t";
cout<<endl;
}
}cout<<endl;sum=0;
}

}
int main()
{
     int arr[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n = sizeof(arr)/sizeof(arr[0]);

    printallSubarrays(arr, n);
    return 0;
}
