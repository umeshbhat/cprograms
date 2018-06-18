#include <iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

struct node
{
bool is_end;
int prefix_count;
struct node * child[26];
}*head;
void init()
{
head=new node();
head->prefix_count=0;
head->is_end=false;
}
void inserts(string word)
{
node* current=head;
current->prefix_count++;
for(unsigned int i=0;i<word.length();i++)
{
int letter=(int)word[i]-(int)'a';
if(current->child[letter]==NULL)
{
current->child[letter]=new node();
}
current->child[letter]->prefix_count++;
current=current->child[letter];
}
current->is_end=true;
}

bool search(string word)
{
node * current=head;
for(unsigned  int i=0;i<word.length();i++)
{
if(current->child[(int)word[i]-(int)'a']==NULL)
return false;
current=current->child[(int)word[i]-(int)'a'];
}
return current->is_end;
}
int word_with_prefix(string word)
{
node * current=head;
for( unsigned  int i=0;i<word.length();i++)
{
if(current->child[(int)word[i]-(int)'a']==NULL)
return false;
current=current->child[(int)word[i]-(int)'a'];
}
return true;

}
int namewith(string str)
{
node *crawl=head;
for(unsigned int i=0;i<str.length();i++)
{
int index=(int)str[i]-(int)'a';
if(crawl->child[index]==NULL)
return 0;
crawl=crawl->child[index];
}

return crawl->prefix_count;
}
int main()
{
 init();
 int n;
 cin>>n;
 cin.ignore();
 for(int i=0;i<n;i++)
 {
 string inp;
 getline(cin,inp);
 char c;
 c=(char)inp[0];
 if(c == 'f')
 {
 cout<<"inside find"<<endl;
 string str;
 str=inp.substr(4);
 int count;
 count=namewith(str);
 cout<<count<<endl;
 }
 else if(c =='a')
 {
 cout<<"inside add"<<endl;
 string op;
 op=inp.substr(3);
 inserts(op);
 }
 else cout<<"Invalid input";
 }
    return 0;
}
