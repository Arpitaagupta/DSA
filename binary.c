#include<stdio.h>
#include<stdlib.h>
struct binarytree
{
int data;
struct binarytree *left, *right;
};
typedef struct binarytree node;

int main()
{
    node *a, *b, *c;
    a=(node *)malloc(sizeof(node));
    b=(node *)malloc(sizeof(node));
    c=(node *)malloc(sizeof(node));
    a->data = 10;
    a->left=NULL;
    a->right=NULL;
    b->data = 10;
    b->left=NULL;
    b->right=NULL;
    c->data = 10;
    c->left=NULL;
    c->right=NULL;
    a->left=b;
    a->right=c;

}

void show(node *head)
{
    if(head->next!=NULL)
    {
        printf("%d",head->data);
        show(head->next);
    }
}
