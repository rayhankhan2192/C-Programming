/*File in C programming*/

#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    char name1[30];
    int ID,phone_number,i,num;
    file = fopen("student info.txt","a");

    if(file == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File opened.\n");
        printf("Enter number of Student = ");
        scanf("%d",&num);
        for(i=1; i<=num; i++)
        {
            printf("\nStudent NO-%d:\n",i);
            printf("Enter student name (First & last name) = ");
            scanf("%s %s",&name,&name1);
            printf("Enter ID: ");
            scanf("%d",&ID);
            printf("Enter Phone number: ");
            scanf("%d",&phone_number);
            fprintf(file,"\n%d.%s %s\t\t\t%d\t\t\t%d\n",i,name,name1,ID,phone_number);

        }
        printf("\nWritten successfully.");
        fclose(file);

    }
    return 0;
}
