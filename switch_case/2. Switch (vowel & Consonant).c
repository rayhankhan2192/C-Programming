// Write a program to find Vowel & consonant with use SWITCH statement

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a letter : ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O' :
        case 'U':

            printf("Vowel\n");
            break;

        default :
            printf("Consonant");


    }

    getch();

}
