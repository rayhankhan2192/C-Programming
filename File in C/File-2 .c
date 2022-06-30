/*write name by using fputs in file*/
#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    file = fopen("test.txt","a");
    if(file==NULL)
    {
        printf("File doesn't exist.");
    }
    else
    {
        printf("File opened\n");
        printf("Enter your name = ");
        gets(name);
        fputs(name,file);
        fputs("\n",file);
        printf("\nFile is written successfully.\n");
        fclose(file);

    }

}
