/*Write a code to find positive & negative number */

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number= ");
    scanf("%d",&num);

    if(num>0)
        printf("positive");

    else if(num<0)
        printf("Negative");

    else
        printf("Zero");

    getch();


}
