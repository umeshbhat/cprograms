#include <iostream>
#include<string>

using namespace std;
    struct node
    {
    struct node *child[26];
    bool isendofword;
    }*root;

    struct node *getnode(void)
    {
    struct node *pnode=new node();

    pnode->isendofword=false;
    for(int i=0;i<26;i++)
    {
    pnode->child[i]=NULL;
    }
    return pnode;
    }

    void insertkeys(string key)
    {
    struct node *pCrawl;
    pCrawl=root;
    for(unsigned int i=0;i<key.length();i++)
    {
    int index=key[i]-'a';
    if(!pCrawl->child[index])
    pCrawl->child[index]=getnode();
    pCrawl=pCrawl->child[index];
    }
    pCrawl->isendofword=true;
    }

    int search(string key)
    {
    struct node *crawler;
    crawler=root;
    int index;
  unsigned   int len=key.length();
    for(unsigned int i=0;i<len;i++)
    {
    index=key[i]-'a';
    if(crawler->child[index]==NULL)
    return 0;
     crawler=crawler->child[index];
     }
    if(crawler!=NULL && crawler->isendofword==true)
    {return 1;
    }
    }

int main()
{
    string keys[]={"hello","abc","aare","you"};
    int n=sizeof(keys)/sizeof(keys[0]);
    root=getnode();
    for(int i=0;i<n;i++)
    {
    insertkeys(keys[i]);
    }
    while(1)
    {
    cout<<"\nEnter the key to search in dictionary\n";
    string  word;
    cin>>word;
    search(word)?cout<<word<<" is in the list\n":cout<<word<<" is not present\n";
    }
    return 0;
}
