#include <iostream>
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
void insert(string word)
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
else
current=current->child[(int)word[i]-(int)'a'];
}
return current->prefix_count;

}
int main()
{
 init();
 insert("umesh");
 insert("bhat");
 word_with_prefix("umesh")?cout<<"found":cout<<"not found";
    return 0;
}
