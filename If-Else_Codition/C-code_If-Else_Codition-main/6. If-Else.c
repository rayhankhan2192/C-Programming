/* find even odd between 2 integer*/

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the first number = ");
    scanf("%d",&num1);

    printf("Enter the second number = ");
    scanf("%d",&num2);


    if(num1>num2 && num1%2==0)
        printf("First number Even\n");

    else if(num1>!num2 && num1%2==0)
        printf("First  number Even\n");

    else if(num1>num2 && num1%2!=0)
        printf("First  number Odd\n");

    else if(num1>!num2 && num1%2!=0)
        printf("First  number Odd\n");

    else if(num1==num2 && num1%2==0)
        printf("First number Even\n");

    else if(num1!=num2 && num1%2!=0)
        printf("First number odd\n");



     if(num2>num1 && num2%2==0)
        printf("Second number Even\n");

    else if(num2>!num1 && num2%2==0)
        printf("Second number Even\n");

    else if(num2>num1 && num2%2!=0)
        printf("Second number Odd\n");

    else if(num2>!num1 && num2%2!=0)
        printf("Second number Odd\n");

    else if(num2==num1 && num2%2==0)
        printf("Second number Even\n");

    else if(num2!=num1 && num2%2!=0)
        printf("Second number Odd\n");

    getch();

}
