#include<stdio.h>
#include<stdlib.h>
struct node *linkedlist(int array[], int size);

struct node
{
    int data;
    struct node *next;
};
int  main()
{
    int array[] = {2,4,6,8};
    int size = 4;
    struct node *top;
    top = linkedlist( array, size);
    while(top!=NULL)
    {
        printf("%d -> ",top->data);
        top = top->next;
    }
    return 0;

}

struct node *linkedlist(int array[], int size)
{
    int i;
    struct node *top = NULL, *temp = NULL, *current = NULL;

    for(i=0; i < size; i++)
    {
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = array[i];
        temp->next = NULL;
        if(top == NULL)
        {
            top = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
    }
    return top;
}