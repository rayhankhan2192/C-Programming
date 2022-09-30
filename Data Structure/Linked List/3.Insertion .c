#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void print_node(struct node *head);
void insert_node(struct node *head, int position, int value);


void print_node(struct node *head)
{
    struct node *temp = head;
    while (temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n\n");
}
void insert_node(struct node *head, int position, int value)
{
    struct node *temp1 = (struct node*)malloc(sizeof(struct node));
    temp1->data = value;
    temp1->next = NULL;
    if(position==1)
    {
        temp1->next = head;
        head = temp1;
    }
    else
    {
        struct node *temp2 = (struct node*)malloc(sizeof(struct node));
        temp2 = head;
        for (int i = 0; i < position-2; i++)
        {
            temp2 = temp2->next;
        }
        temp1->next = temp2 ->next;
        temp2 ->next = temp1;
    }
    printf("\nLinked list  after insertion: ");
    print_node(head);
}

int main()
{
    int position, value;
    struct node *head = NULL;
    struct node *a = NULL;
    struct node *b = NULL;
    struct node *c = NULL;
    struct node *d = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    a = (struct node*)malloc(sizeof(struct node));
    b = (struct node*)malloc(sizeof(struct node));
    c = (struct node*)malloc(sizeof(struct node));
    d = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    a->data = 20;
    b->data = 30;
    c->data = 40;
    d->data = 50;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;

    printf("\nLinked list before insertion: ");
    print_node(head);//called function for print
    printf("Position to insert : ");
    scanf("%d",&position);

    printf("Enter the value    : ");
    scanf("%d",&value);
    insert_node(head, position, value);//called function for insertion
    return 0;
}
