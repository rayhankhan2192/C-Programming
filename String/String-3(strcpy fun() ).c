// copy string one variable to another

#include<stdio.h>
int main()
{
    char main[]="Don't try to copy";
    char copied[20];
    //copy text to using strcpy() function
    strcpy(copied,main);
    printf("\n\nMain text : %s\n\n",main);
    printf("Duplicate : %s\n\n",copied);

    return 0;
}