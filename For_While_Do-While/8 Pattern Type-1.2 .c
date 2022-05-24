// This program is stand for print Capital Alphabet pattern.
//For print small Alphabet pattern just start ACII number form 96 to 121

#include<stdio.h>
int main()
{
    int n,row,col;/*column*/
    printf("Enter the value = ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col=col+1)
        {
            //column=col+64;
            //we can also use that formate. Must declare the variable before print.
            printf("%c ",col+64);
            /*Here 64 to 90 is ASCI number of Capital alphabet.
            During print character must be used %c */

        }

         printf("\n");
    }
    getch();
}
