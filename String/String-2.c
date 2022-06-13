/*Write a code that can print string to character 
and find total word*/
#include<stdio.h>
int main()
{
   char ch[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i=0;
    while(ch[i]!='\0'){
        printf("%c\n\n",ch[i]);
        i++;
    }
    //find the total word with strlen() function
    int len = strlen(ch);
    printf("Total word is = %d\n\n",len);

    //find the total word without strlen() function and using ioop
    while(ch[i]!=0){
        i++;
    }
    printf("Total word is = %d\n\n",i);



}