#include <iostream>
#include<stack>

using namespace std;


int check(string input)
{
stack<char>s;
char element;
 for(unsigned int i=0;i<input.length();i++)
    {
    element=input.at(i);


     if(element=='{' || element=='(' || element=='[')
    {
    s.push(element);
    }
    else{
    if(element==']' && s.top()=='[')
    {
   s.pop();
    }
    else  if(element==')' && s.top()=='(')
    {
   s.pop();
    }
    else  if(element=='}' && s.top()=='{')
    {
   s.pop();
    }else
    return 0;
    }
    }
    if(s.empty())
    return 1;
    else
    return 0;
}

int main()
{
int n;
cin>>n;
    for(int i=0;i<n;i++){string input;
     cin>>input;
   if(check(input))cout<<"YES"<<endl;
   else cout<<"NO"<<endl;}


    return 0;
}
