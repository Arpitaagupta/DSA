#include <stdio.h>
#include <stdlib.h>
struct polynomial{
    int coeeficient;
    int power;
    struct polynomial *next;
};typedef struct polynomial node;
void show(node *head){
  printf("%dx^%d\n",head->coeeficient,head->power);
    if(head->next!=NULL)
    {
       show(head->next);
        
    }
    
}

int main() {
    node *a,*b,*c;
    a=(node*)malloc(sizeof(node));
    b=(node*)malloc(sizeof(node));
    c=(node*)malloc(sizeof(node));
    a->coeeficient=1;
    a->power=2;
    a->next=NULL;
    b->coeeficient=4;
    b->power=1;
    b->next=NULL;
    c->coeeficient=6;
    c->power=0;
    c->next=NULL;
    a->next=b;
    b->next=c;
    
    show(a);
    return 0;
}