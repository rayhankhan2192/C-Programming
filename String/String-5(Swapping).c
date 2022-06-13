#include<stdio.h>
int main()
{
    char string1[]="Money";
    char string2[]="Heist";
    char temp[20];

    printf("\n\nBefore swapping\n");
    printf("string 1 = %s\n",string1);
    printf("String 2 = %s\n\n",string2);
    //swapping
    strcpy(temp,string1);
    strcpy(string1,string2);
    strcpy(string2,temp);

    printf("After swapping\n");
    printf("string 1 = %s\n",string1);
    printf("String 2 = %s\n\n",string2);

}