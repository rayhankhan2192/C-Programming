// Write a program to find small & capital letter

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a Letter : ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
        printf("Small leter");

    else if(ch>='A' && ch<='Z')
        printf("Capital letter");

    else
        printf("Please enter a letter");

    getch();


}
