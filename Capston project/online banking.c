#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct userinfo
{
    char name[30];
    char phonenumber[15];
    char nid[20];
    char gmail[30];
    char address[50];
    char date[10];
} user;
void cont_loop(int n)
{
    printf("1.Back\n2.Exit\n");
    printf("Choose an option: ");
    scanf("%d",&n);

    if(n==1)
    {
    }
    if(n==2)
    {
        exit(0);
    }
}

void apply_user_Ac(FILE *file,char createFile[30],int n)
{
    system("cls");
    printf("\t\t\t\t Apply for Create AC\n");
    printf("\t\t\t\t_____________________\n\n");
    printf("Enter your name\t\t\t: ");
    fgets(user.name,30,stdin);
    user.name[strlen(user.name)-1]=0;

    printf("Enter your number\t\t: ");
    fgets(user.phonenumber,15,stdin);
    user.phonenumber[strlen(user.phonenumber)-1] = 0;

    printf("Enter your NID\t\t\t: ");
    fgets(user.nid,20,stdin);
    user.nid[strlen(user.nid)-1] = 0;

    printf("Enter your Gmail\t\t: ");
    fgets(user.gmail,30,stdin);
    user.gmail[strlen(user.gmail)-1] = 0;

    printf("Your Address\t\t\t: ");
    fgets(user.address,50,stdin);
    user.address[strlen(user.address)-1] = 0;

    printf("\n\nDo you want to submit: \n1.Yes\n2.NO");
    scanf("%d",&n);
    if(n==1)
    {
        strcpy(user.date,__DATE__);
        strcpy(createFile,user.date);
        file = fopen(strcat(createFile,".txt"),"a+");
        fprintf(file,"%s\t\t\t\t%s\t\t\t\t%s\t\t\t\t%s\t\t\t\t%s\n",user.name,user.phonenumber,user.nid,user.gmail,user.address);
        fclose(file);

        printf("'\n\nApplied Successfully!\n\n");
    }
    if(n==2)
    {
        printf("\nSuccessfuly Cancled!\n\n");
    }
}
int main()
{
    int n;
    struct userinfo user;
    char createFile[30];
    char cont= 'y',ch;
    FILE *file;


    while(cont=='y' || cont=='Y')
    {

        printf("\n\t\t\t\t  Online Banking System\n");
        printf("\t\t\t\t__________________________\n\n");

        printf("\t\t\t\t1.Apply for Create AC\n");
        printf("\t\t\t\t2.Login into user AC\n");
        printf("\t\t\t\t3.Bank Managment\n");
        printf("\t\t\t\t__________________________\n\n");

        printf("\t\t\t\tChoose an option: ");
        scanf("%d",&n);

        fgetc(stdin);
        if(n==1)
        {
            apply_user_Ac(file,createFile,n);
            printf("\n\n");
            cont_loop(n);
        }
        if(n==2)
        {
            n=0;
            system("cls");
            printf("\n\nUpcoming\n\n");
            cont_loop(n);
        }
        if(n==3)
        {
            n=0;
            system("cls");
            printf("\n\t\t\t\t1.Login Into Management AC\n");
            printf("\t\t\t\t2.Admin Pannel\n");
            printf("\t\t\t\t3.Back\n");
            printf("\t\t\t\t4.Exit\n\n");
            cont_loop(n);
        }
        cont = 'y';
        system("cls");
        continue;
    }
}

