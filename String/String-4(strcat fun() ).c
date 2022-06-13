//addition between two string with  strcat() function
//reverse string with strrev() function

#include<stdio.h>
int main()
{
    char ch[]="My name is ";
    char ch1[]="Rayhan khan";
    //addition 2 string
    strcat(ch,ch1);
    printf("%s\n\n",ch);
    
    //reverse string
    strrev(ch1);
    printf("Reverse string is = %s\n\n",ch1);

    return 0;
}