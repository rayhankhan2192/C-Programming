/* Pattern type:
1
1 2
1 2 3
1 2
1
*/

#include<stdio.h>
int main()
{
    int num,col,row;
    printf("Enter the value = ");
   scanf("%d",&num);

     for(row=1; row<=num; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }


      for(row=num-1; row>=1; row--)
    // row = num - 1 means if user enter value 5 it will count 4 & print less 1 row.
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        printf("\n"); //WE can print column or Row wise.
    }


     getch();
}
