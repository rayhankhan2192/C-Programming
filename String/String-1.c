#include<stdio.h>
int main()
{
    char ch[30],ch1[30];
    printf("Enter your name - ");
    gets(ch);
    printf("Enter your father name - ");
    gets(ch1);
    printf("\n\nYour name - %s\n",ch);
    printf("Father name - %s\n\n",ch1);

    return 0;
}