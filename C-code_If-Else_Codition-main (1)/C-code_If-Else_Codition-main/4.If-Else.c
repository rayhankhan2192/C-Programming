/* find the small number from 1 pairs number55*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first integer = ");
    scanf("%d",&num1);

    printf("Enter senond integer = ");
    scanf("%d",&num2);

    if(num1!=num2  && num1<num2)
          printf("The small number is = %d\n",num1);

    else
        printf("Enter number again.");

        getch();
}
