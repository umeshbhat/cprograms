#include <iostream>

using namespace std;

int main()
{
char data[]={'a','b','c','d'};
int n=4;
for(int i=0;i<(1<<4);i++)
{
for(int j=0;j<n;j++){
if((i & (1<<j))>0)
cout<<data[j];
}cout<<endl;
}

}
