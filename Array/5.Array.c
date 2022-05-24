/* Write a code to calculate 100 numbers(only +)b at a time */

#include<stdio.h>
int main()
{
    int num[100],sum=0,i,n;

    printf("In this phase you can calculate 100 numbers at a time.\n");

    printf("How many numbers you want to calculate = ");
    scanf("%d",&n);
    printf("Enter numbers = ");

    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0; i<n; i++)

    {
        sum = sum+num[i];
    }
    printf("%d\n",sum);
    //printf("Average = %.1f\n",(float)sum/5);

    getch();
}

