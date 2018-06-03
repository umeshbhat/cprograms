#include <bits/stdc++.h>
#include<iterator>
#include<set>
#include<string>
#include<unordered_set>


using namespace std;

// Complete the minimumNumber function below.


int main()
{
  int passsize;
    cin>>passsize;
    unordered_set<char> data;
    unordered_set<char>::iterator itr;
    string str;
    cin>>str;
    for(unsigned int i=0;i<str.length();i++)
    {
    char c;
    c=str[i];
    data.insert(c);
    }

    int count=0;
    string numbers = "0123456789";
string lower_case = "abcdefghijklmnopqrstuvwxyz";
string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string special_characters = "!@#$%^&*()-+";
int found=0;

    for(unsigned int i=0;i<numbers.length();i++)
    {
    for(itr=data.begin();itr!=data.end();itr++)
    {
     char x=numbers.at(i);
    if(x==*itr)
    {
     found=1;
    break;

    }
    if(found==1)break;
    }
    }
    if(found==0)count++;
    found=0;

  for(unsigned int i=0;i<lower_case.length();i++)
    {

    for(itr=data.begin();itr!=data.end();itr++)
    {
     char x=lower_case.at(i);
    if(x==*itr)
    {
     found=1;
    break;

    }
    if(found==1)break;
    }
    }
    if(found==0)count++;
    found=0;
      for(unsigned int i=0;i<upper_case.length();i++)
    {

    for(itr=data.begin();itr!=data.end();itr++)
    {
     char x=upper_case.at(i);
    if(x==*itr)
    {
     found=1;
    break;

    }
    if(found==1)break;
    }
    }
    if(found==0)count++;
    found=0;
      for(unsigned int i=0;i<special_characters.length();i++)
    {

    for(itr=data.begin();itr!=data.end();itr++)
    {
     char x=special_characters.at(i);
    if(x==*itr)
    {
     found=1;
    break;

    }
    if(found==1)break;
    }
    }
    if(found==0)count++;
    found=0;

    if(passsize+count>5)
    {
    cout<<count;
    }
    else
    {
    int req=6-(passsize+count);
    cout<<(count+req);
        }
    return 0;
}
