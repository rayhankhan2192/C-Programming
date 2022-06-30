/*Read from file by use fgetc */
#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    file = fopen("test.txt","r");
    if(file==NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is opend\n\n");
        while(!feof(file))
        {
            //fgetc(file_pointer)
            ch = fgetc(file);
            printf("%c",ch);
        }
        printf("\n\nFile read successfully.\n");
        fclose(file);
    }
    getch();
}
