//write a programe that can calculate two numbers
// This program works like a calculator
#include<stdio.h>
int main()
{
    double num1,num2;
    char operatore;

    printf("Enter an operatore = +,-,*,/ : ");
    scanf("%c",&operatore);

     printf("Enter two numbers : ");
    scanf("%lf %lf",&num1,&num2);


    switch(operatore)
    {

    case '+' :
        {
        printf("%lf + %lf = %lf\n",num1,num2,num1 + num2);
        break;
        }

    case '-' :
        {
            printf("%lf - %lf = %lf\n",num1,num2,num1 - num2);
            break;
        }

    case '*' :
        {
            printf("%lf * %lf = %lf\n",num1,num2,num1 * num2);
            break;
        }

    case '/' :
        {
            printf("%lf / %lf = %lf\n",num1,num2,num1 / num2);
            break;
        }

    default :
        {
           printf("Not a valid operatore\n");
           printf("Please try again with valid operatore\n");
        }

    }


    getch();
}
