#include <iostream>
#include<stdlib.h>
#include<map>
#include<iterator>

using namespace std;
int main()
{
int n;
cin>>n;
if(n & 1)cout<<"Weird";
else if (n>=2 && n<=5)cout<<"Not Weird";
else if (n>=6 && n<=20)cout<<"Weird";
else cout<<"Not Weird";

return 0;
}
