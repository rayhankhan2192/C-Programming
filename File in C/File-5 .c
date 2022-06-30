/*Read from file by use fgets */

#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt","r");
    char ch[30];
    if(file == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File opened\n\n");
        while(!feof(file))
        {
            //fgets(variable,string size,file pointer)
            fgets(ch,40,file);
            printf("%s",ch);
        }
        printf("\n\nFile read successfully.\n");
        fclose(file);
    }
    getch();
}
