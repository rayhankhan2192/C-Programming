/*This code is stand for create pattern.
Patern type:
1 
1 2
1 2 3
*/

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter the value = ");
    scanf("%d",&n);

    for(row=1; row<=n; row=row+1)
    {
        for(col=1; col<=row; col=col+1)
        {
            printf("%d ",col);
            /*Here we can print row wise pattern number just change in print option.
            If we use col%2 it would be 1 0 1 0 formate*/
        }
        printf("\n");
    }

getch();

}
