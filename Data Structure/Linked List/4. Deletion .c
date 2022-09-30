#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void print_node(struct node *head);
void delete_node(struct node *head, int position);
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
void delete_node(struct node *head, int position)
{
    struct node *num_1 = head;
    if(position==1)
    {
        //now head points to 2nd node
        head = num_1->next;
        free(num_1);
    }
    else
    {
        for(int i=0; i < position-2; i++)
        {
            //num_1 points to(n-1)th node
            num_1 = num_1->next;
        }
        struct node *num_2 = num_1->next; //n th node
        num_1->next = num_2 ->next;//(n+1)th node
        free(num_2);
    }
    printf("\nLinked list after  deletion: ");
    print_node(head);
}

int main()
{
    int position;
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

    printf("\nLinked list before deletion: ");
    print_node(head);//called function for print
    printf("Position to delete : ");
    scanf("%d",&position);

    delete_node(head, position);//called function for insertion

    return 0;
}
