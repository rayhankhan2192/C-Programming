/*  Pattern Type :

    1
  1 2
1 2 3
  1 2
    1
     */

#include<stdio.h>
int main()
{
    int num,row,col;
    printf("Enter the value = ");
    scanf("%d",&num);

    for(row=1; row<=num; row++)
    {
        for(col=1; col<=num-row; col++)
        {
            printf("  ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }


    for(row=num-1; row>=1; row--)
    {
        for(col=1; col<=num-row; col++)
        {
            printf("  ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
}
