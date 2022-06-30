/*write name by using fputs in file*/

#include<stdio.h>
int main()
{
    FILE *file;
    char name[30]="Rayhan Khan";
    int length = strlen(name);
    int i;
    file = fopen("test.txt","w");
    if(file == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File opened\n");
        for(i=0; i<=length; i++)
            fputc(name[i],file);
        printf("Done\n");
        fclose(file);
    }
    return 0;
}
