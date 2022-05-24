/*This code is stand for create pattern.
Patern type:

1 2 3
1 2
1
Here we can print the number Row or column wise.
*/

#include<stdio.h>
int main()
{
    int num,row,col;
    printf("Enter the value = ");
    scanf("%d",&num);

    for(row=num; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        printf("\n");
    }

    getch();
}
