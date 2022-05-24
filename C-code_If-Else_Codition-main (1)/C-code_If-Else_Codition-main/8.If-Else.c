/*Write a program to find Even Odd & Positive negative between one pairs number */

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first number = ");
    scanf("%d",&num1);

    printf("Enter second number = ");
    scanf("%d",&num2);

    if(num1>0 && num1%2==0)
         printf("The first number is positive & Even\n");

    else if(num1>0 && num1%2!=0)
         printf("The first number is positive & odd\n");

    else if(num1<0 && num1%2==0)
         printf("The first number is negative & Even\n");

    else if(num1<0 && num1%2!=0)
         printf("The first number is negative & Odd\n");

    else if(num1==0)
        printf("The first number is Zero\n");

    if(num2>0 && num2%2==0)
        printf("The second number is Positive & Even\n");

    else if(num2>0 && num2%2!=0)
        printf("The second number is negative & Odd\n");

    else if(num2<0 && num2%2==0)
        printf("The second number is negative & Even\n");


    else if(num2<0 && num2%2!=0)
        printf("The second number is negative & Odd\n");

    else if(num2==0)
        printf("The second number is Zero\n");


    getch();

}
