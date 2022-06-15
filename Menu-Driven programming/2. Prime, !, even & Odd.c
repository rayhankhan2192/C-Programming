/*1.Write a menu driven program which has following options:
1) Factorial of a number
2) Prime or not
3) odd or even
4) exit
*/

#include<stdio.h>
int main()
{
    printf("\n\t\t========== WELCOME TO MATH WORLD ==========\n\n");
    printf("1. Factorial number\n");
    printf("2. Prime number\n");
    printf("3. Even or Odd\n");
    printf("4. Exit\n\n");
    int number,num,i,count=0,fact=1;
    printf("Select an option = ");
    scanf("%d",&number);

    switch(number)
    {
    case 1:
        printf("\n\n");
        printf("\t\t========== FIND FACTORIAL NUMBER ==========\n\n");
        printf("Enter the value = ");
        scanf("%d",&num);
        for(i=1; i<=num; i++)
        {
            fact = fact*i;
        }
        printf("\nAnswer : %d! = %d\n ",num,fact);
        break;

    case 2:
        printf("\n\n");
        printf("\t\t========== FIND PRIME NUMBER ==========\n\n");
        printf("Enter the value = ");
        scanf("%d",&num);
        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                count++;
                break;

            }
        }
        if(count==0)
        {
            printf("\nAnswer : prime number\n");
        }
        else
        {
            printf("\nAnswer : Not prime number\n");
        }
        break;

    case 3:
        printf("\n\n");
        printf("\t\t========== FIND EVEN & ODD NUMBER ==========\n\n");
        printf("Enter the value = ");
        scanf("%d",&num);
        if(num%2==0)
        {
            printf("\nAnswer : Even Number\n");
        }
        else
        {
            printf("\nAnswer : Odd Number\n");
        }
        break;

    case 4:
        printf("\n");
        printf("Click Cross for exit from page.\n");
        break;
    default :
        printf("\n\t  TRY AGAIN  \n");

    }
}