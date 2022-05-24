#include<stdio.h>
int main()
{
    int num,row,col;
    printf("Enter the value = ");
    scanf("%d",&num);

    for(row=num; row>=1; row--)
    {
        for(col=1; col<=num-row; col++)
        {
          //printf("");

            /*Without space in printf that would be
             1 2 3
             1 2
             1

             */


             //printf(" ");

             /*For 1 space in printf that would be
             1 2 3
              1 2
               1
                  */


             printf("  ");

             /* For 2 space in printf that would be

           1 2 3
             1 2
               1

               */

        }

        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }
    getch();
}

