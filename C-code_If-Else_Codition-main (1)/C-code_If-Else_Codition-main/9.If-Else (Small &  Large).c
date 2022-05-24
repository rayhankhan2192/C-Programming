/*Write a program to find small and large number between one pairs number */

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first number = ");
    scanf("%d",&num1);

    printf("Enter second number = ");
    scanf("%d",&num2);

    if(num1>num2)
        printf("number-1 large = %d\n",num1);

    else if(num1<num2)
        printf("number-1 small =  %d\n",num1);

    if(num1<num2)
        printf("number-2 large = %d\n",num2);

    else if(num1>num2)
        printf("number-2 small = %d\n",num2);

    if(num1==num2)
        printf("Numbers are equal");

    getch();
}
