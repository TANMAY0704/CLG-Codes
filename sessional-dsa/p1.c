#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node * left;
struct node * right;
} tnode;
tnode * insert(tnode *t, int x)
{
    if(t==NULL)
    printf("NO ELEMENT PRESENT \n");
    else if(x<t->data)
    t->left=insert(t->left,x);
    else if(x >t->data)
    t->right=insert(t->right,x);
    
return t;
}
tnode * Search(tnode *t, int x)
{
if (t== NULL)
{ printf("\n No element in the tree");
return t;
}
else if ( t->data==x)
return t;
else if (x< t->data)
return Search(t->left,x);
else
return Search(t->right,x);

}