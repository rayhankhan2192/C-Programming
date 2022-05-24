//write a program with For loop this code will a series(1+2+3+4+.....+n)

#include<stdio.h>
int main()

{
    {
        while(1) //
        {
            int i,sum=0,n;
            printf("Enter last number of the series = ");
            scanf("%d",&n);
            printf("1+2+3+.....+%d",n);

            for(i=1; i<=n; i=i+1)
            {
                sum = sum + i;

            }
            printf("=%d\n",sum);
        }

    }


    getch();
}
