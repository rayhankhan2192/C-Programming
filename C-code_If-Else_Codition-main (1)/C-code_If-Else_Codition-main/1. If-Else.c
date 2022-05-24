#include<stdio.h>
int main()
{
    int num1,num2,num3,num4;
    printf("Enter an integer =");
    scanf("%d",&num1);

    printf("Enter an integer =");
    scanf("%d",&num2);

    printf("Enter an integer =");
    scanf("%d",&num3);

    printf("Enter an integer =");
    scanf("%d",&num4);

    if(num1%2==0)
        printf("Even\n");
    if(num1%2!=0)
        printf("Odd\n");

    if(num2%2==0)
        printf("Even\n");
    if(num2%2!=0)
        printf("Odd\n");

    if(num3%2==0)
        printf("Even\n");
    if(num3%2!=0)
        printf("Odd\n");

    if(num4%2==0)
        printf("Even\n");
    if(num4%2!=0)
        printf("Odd\n");


    getch(0);
}


