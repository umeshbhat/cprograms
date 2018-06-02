#include <iostream>

#include<cstring>
using namespace std;

string dictionary[]={"umebt","shoe","she"};
char boggle[3][3]={
    {'u','m','e'},{'s','h','b'},{'h','a','t'}
    };
    int visited[3][3];

    int n = sizeof(dictionary)/sizeof(dictionary[0]);


bool isWord(string &str)
{
    for (int i=0; i<n; i++)
        if (str.compare(dictionary[i]) == 0)
          return true;
    return false;
}
   void findword(int i,int j,string &str)
   {
   visited[i][j]=1;
   str=str+boggle[i][j];
   if(isWord(str))
        cout << str << endl;

        for (int row=i-1; row<=i+1 && row<3; row++)
      {
      for(int col=j-1; col<=j+1 && col<3; col++)

       { if (row>=0 && col>=0 && !visited[row][col])

          findword(row, col, str);
}
}
    // Erase current character from string and mark visited
    // of current cell as false
    str.erase(str.length()-1);
    visited[i][j] = false;
   }

void lookup()
    {
    string str="";
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
    visited[i][j]=0;
    }
    }
    for(int i=0;i<3;i++)
    {
    for(int j=0;j<3;j++)
    {
    findword(i,j,str);
    }
    }
    }
int main()
{
    lookup();
    return 0;
}
