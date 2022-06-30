/*write name age by using fprintf in file*/

#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    int age;
    file = fopen("test.txt","a");
    if(file == NULL)
    {
        printf("File doesn't exist.");
    }
    else
    {
        printf("File is open.\n");
        printf("Enter your name = ");
        gets(name);
        printf("Enter your age = ");
        scanf("%d",&age);
        //fprintf(file_pointer,formate_specifier,variable_name);
        fprintf(file,"Name : %s\nAge = %d\n",name,age);
        printf("\nFile is written successfully.\n\n");
    }
    
    return 0;


}
