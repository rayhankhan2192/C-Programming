/*Write a program to find ((small Large & Even or Odd)) number between 4 numbers */

#include<stdio.h>
int main()
{
    int num1,num2,num3,num4;
    printf("Enter first number = " );
    scanf("%d",&num1);

    printf("Enter second number = " );
    scanf("%d",&num2);

    printf("Enter Third number = " );
    scanf("%d",&num3);

    printf("Enter Fourth number = " );
    scanf("%d",&num4);

    if(num1>num2 && num1>num3 && num1>num4 && num1%2==0)
        printf("First number Large & Ever = %d\n",num1);
    else if(num1>num2 && num1>num3 && num1>num4 && num1%2!=0)
        printf("First number Large & Odd = %d\n",num1);


        if(num2>num1 && num2>num3 && num2>num4 && num2%2==0)
        printf("Second number Large & Ever = %d\n",num2);
    else if(num2>num1 && num2>num3 && num2>num4 && num2%2!=0)
        printf("Second number Large & Odd = %d\n",num2);



        if(num3>num1 && num3>num2 && num3>num4 && num3%2==0)
        printf("Third number Large & Ever = %d\n",num3);
    else if(num3>num1 && num3>num2 && num3>num4 && num3%2!=0)
        printf("Third number Large & Odd = %d\n",num3);



        if(num4>num1 && num4>num2 && num4>num3 && num4%2==0)
        printf("Fourth number Large & Ever = %d\n",num4);
    else if(num4>num1 && num4>num2 && num4>num3 && num4%2!=0)
        printf("Fourth number Large & Odd = %d\n",num4);

    else if(num1==num2 && num2==num3 && num3==num4 && num4==num1)
        printf("Numbers are equal");




    getch();


}

