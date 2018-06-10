#include <iostream>
#include<bits/stdc++.h>

using namespace std;
struct node
{
int data;
struct node *left,*right;
};
void printVerticalLine(node *head,int line_no,int hd)
{
if(head==NULL)
return;

if (hd == line_no)
        cout << head->data << " ";

    // Recur for left and right subtrees
    printVerticalLine(head->left, line_no, hd-1);
    printVerticalLine(head->right, line_no, hd+1);
}

void topView(struct node *root,int *min,int *max,int hd)
{
if(root==NULL)return;

if(hd<*min)
*min=hd;
else
{
if(hd>*max)
*max=hd;
}
topView(root->left,min,max,hd-1);
topView(root->right,min,max,hd+1);
}

void travel(node *root)
{

int min=0,max=0,hd=0;
topView(root,&min,&max,0);
for(int line_no = min; line_no <=max; line_no++)
    {
        printVerticalLine(root, line_no, 0);
        cout << endl;
    }

}

struct node *getnode(int data)
{
node *temp=new node;
temp->data=data;
temp->left=NULL;
temp->right=NULL;
return temp;
}
int main()
{
    node *root=getnode(10);
    root->left=getnode(5);
    root->left->left=getnode(15);
    root->right=getnode(51);
    root->right->right=getnode(120);
    travel(root);
    return 0;
}
