//write a program to find C to F, F to c temperature

#include<stdio.h>
int main()
{
int temp;
float temp1,temp2,celsius,fahrenheit;

    printf("Welcome to Temperature conversion menu.\n");
    printf("1.Fahrenheit to Celsius.\n");
    printf("2.Celsius to Fahrenheit.\n");
    printf("Enter your choice : ");
    scanf("%d",&temp);

    switch (temp)
    {

case 1:
    {
        printf("Enter Fahrenheit Temperature : ");
        scanf("%f",&temp1);
        celsius = (temp1-32)/1.8;
        printf("The temperature in celsius is= %.2f\n",celsius);
        break;
    }

case 2:
    {
        printf("Enter Celsius Temperature : ");
        scanf("%f",&temp2);
        fahrenheit = (1.8*temp2)+32;
        printf("The temperature in Fahrenheit is= %.2f\n",fahrenheit);
        break;
    }

default :
    printf("Follow the instructions & Enter valid number.\n");
    printf("Thank you");

    }


getch();

}
