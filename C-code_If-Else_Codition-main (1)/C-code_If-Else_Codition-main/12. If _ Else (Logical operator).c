/*Write a program to find vowel & consonant with logical operator */

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter : ");
    scanf("%c",&ch);

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("Vowel");

    else if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("Vowel");

    else
        printf("Consonant");


    getch();


}
