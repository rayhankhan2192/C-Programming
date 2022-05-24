/*Write a program to calculate 5 numbers */

#include<stdio.h>
int main()
{
        int num[5],sum=0,i;

        printf("Enter Five numbers = ");

        for(i=0; i<5; i++)
        {
        scanf("%d",&num[i]);
        }

        for(i=0; i<5; i++)

    {
        sum = sum + num[i];
        }
        printf("%d\n",sum);
        printf("Average = %.1f\n",(float)sum/5);

    getch();
}
