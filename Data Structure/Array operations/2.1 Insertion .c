#include<stdio.h>
int main()
{
    int i,n=5,position,num,number;
    int array[50] = {10,20,30,40,50};
    printf("\nArray before inserting: ");
    for(i=0; i<n; i++)
    {
        printf("%d \t",array[i]);
    }
    printf("\n\nHow many numbers to insert: ");
    scanf("%d",&number);
    for(int k=0; k<number; k++)
    {
        n++;
        printf("\n\nEnter the position to insert-%d: ",k+1);
        scanf("%d",&position);
        printf("Enter the value to insert: ");
        scanf("%d",&num);
        for(i=n; i>=position; i--)
        {
            array[i]=array[i-1];
        }
        array[position-1] = num;

        printf("\nArray after inserting: ");
        for(i=0; i<n; i++)
        {
            printf("%d\t",array[i]);
        }
    }
    printf("\n\n");
    return 0;
}

