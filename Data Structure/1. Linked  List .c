#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *a = NULL;
    struct node *b = NULL;
    struct node *c = NULL;
    struct node *d = NULL;
    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));
    d = (struct node*)malloc(sizeof(struct node));
    a->data = 10;
    b->data = 20;
    c->data = 30;
    d->data = 300;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;
    while (a!=NULL)
    {
        printf("%d ",a->data);
        a = a->next;
    }
    
}