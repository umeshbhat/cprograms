#include <iostream>
#include<map>
#include<iterator>

using namespace std;

int main()
{
    string str="hey i am getting good control over the programming";
    for(int i=str.length()-1;i>=0;i--)
    {
    if(str[i]==' ')
    {
    str[i]='\0';
    printf("%s\n ", &(str[i])+1);
    }

    }
     printf("%s",&str[0]);
}
