/* write a program thats find small & large number */

#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter first Number=");
    scanf("%d",&num1);

    printf("Enter second Number =");
    scanf("%d",&num2);


    if(num1>num2)
        printf("Large number = %d\n",num1);
    else if(num1<num2)
        printf("Small number = %d\n",num1);
    else
       printf("Numbers are equal."); //if the two if codition do not work then Else condition work.


    getch();
}
