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
    char user_name[20];
    char password[30];
    char Re_enter_pass[30];
} user;
void cont_loop(int n)
{
    printf("\t\t\t\t\t1.Back\n\t\t\t\t\t2.Exit\n");
    printf("\t\t\t\t\tChoose an option: ");
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
    printf("\t\t\t\t\t Apply for Create AC\n");
    printf("\t\t\t\t\t_____________________\n\n");
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

        printf("'\n\t\t\t\t\tApplied Successfully!\n\n");
    }
    if(n==2)
    {
        printf("\n\t\t\t\t\tSuccessfuly Cancled!\n\n");
    }
}

void crecate_Admin_Ac(FILE *file,char createFile[30],int n)
{
    fgetc(stdin);

    printf("\t\t\t\t\tEnter your name\t\t: ");
    fgets(user.name,30,stdin);
    user.name[strlen(user.name)-1]=0;

    printf("\t\t\t\t\tEnter your number\t: ");
    fgets(user.phonenumber,15,stdin);
    user.phonenumber[strlen(user.phonenumber)-1] = 0;

    printf("\t\t\t\t\tEnter your NID\t\t: ");
    fgets(user.nid,20,stdin);
    user.nid[strlen(user.nid)-1] = 0;

    printf("\t\t\t\t\tEnter your Gmail\t: ");
    fgets(user.gmail,30,stdin);
    user.gmail[strlen(user.gmail)-1] = 0;

    printf("\t\t\t\t\tCreate username\t\t: ");
    fgets(user.user_name,20,stdin);
    user.user_name[strlen(user.user_name)-1] = 0;

    strcpy(createFile,user.user_name);
    file = fopen(strcat(createFile,".docx"),"r");
    fread(&user,sizeof(struct userinfo),1,file);
    fclose(file);
    if(file!=NULL)
    {
        printf("\t\t\t\t\tUsername taken before! Try again\n\n");
    }
    else
    {
        printf("\t\t\t\t\tCreate password\t\t: ");
        fgets(user.password,30,stdin);
        user.password[strlen(user.password)-1]=0;

        printf("\t\t\t\t\tReEnter password\t: ");
        fgets(user.Re_enter_pass,30,stdin);
        user.Re_enter_pass[strlen(user.Re_enter_pass)-1]=0;

        if(!strcmp(user.password,user.Re_enter_pass))
        {
            strcpy(createFile,user.user_name);
            file = fopen(strcat(createFile,".docx"),"w");
            fwrite(&user,sizeof(struct userinfo),1,file);
            fclose(file);
            if(fwrite!=NULL)
            {
                printf("\n\t\t\t\t\tAccount registered successfully!\n");
            }
            else
            {
                printf("\n\t\t\t\t\tSomething went wrong! Please try again.\n");
            }
        }
    }
}

void crecate_management_Ac(FILE *file,char createFile[30],int n)
{
    fgetc(stdin);

    printf("\t\t\t\t\tEnter your name\t\t: ");
    fgets(user.name,30,stdin);
    user.name[strlen(user.name)-1]=0;

    printf("\t\t\t\t\tEnter your number\t: ");
    fgets(user.phonenumber,15,stdin);
    user.phonenumber[strlen(user.phonenumber)-1] = 0;

    printf("\t\t\t\t\tEnter your NID\t\t: ");
    fgets(user.nid,20,stdin);
    user.nid[strlen(user.nid)-1] = 0;

    printf("\t\t\t\t\tEnter your Gmail\t: ");
    fgets(user.gmail,30,stdin);
    user.gmail[strlen(user.gmail)-1] = 0;

    printf("\t\t\t\t\tCreate username\t\t: ");
    fgets(user.user_name,20,stdin);
    user.user_name[strlen(user.user_name)-1] = 0;

    strcpy(createFile,user.user_name);
    file = fopen(strcat(createFile,".dat"),"r");
    fread(&user,sizeof(struct userinfo),1,file);
    fclose(file);
    if(file!=NULL)
    {
        printf("\t\t\t\t\tUsername taken before! Try again\n\n");
    }
    else
    {
        printf("\t\t\t\t\tCreate password\t\t: ");
        fgets(user.password,30,stdin);
        user.password[strlen(user.password)-1]=0;

        printf("\t\t\t\t\tReEnter password\t: ");
        fgets(user.Re_enter_pass,30,stdin);
        user.Re_enter_pass[strlen(user.Re_enter_pass)-1]=0;

        if(!strcmp(user.password,user.Re_enter_pass))
        {
            strcpy(createFile,user.user_name);
            file = fopen(strcat(createFile,".dat"),"w");
            fwrite(&user,sizeof(struct userinfo),1,file);
            fclose(file);
            if(fwrite!=NULL)
            {
                printf("\n\t\t\t\t\tAccount registered successfully!\n");
            }
            else
            {
                printf("\n\t\t\t\t\tSomething went wrong! Please try again.\n");
            }
        }
    }
}
int main()
{
    system("COLOR B");
    int n;
    struct userinfo user;
    char login_password[30],login_userName[30];
    char createFile[30];
    char cont= 'y',ch;
    FILE *file;

    while(cont=='y')
    {

        printf("\n\t\t\t\t\t  ONLINE BANKING SYSTEM\n");
        printf("\t\t\t\t\t__________________________\n\n");
        printf("\t\t\t\t\t1.Apply for Create AC\n");
        printf("\t\t\t\t\t2.Login into user AC\n");
        printf("\t\t\t\t\t3.Bank Managment\n");
        printf("\t\t\t\t\t4.Exit\n");
        printf("\t\t\t\t\t__________________________\n\n");
        printf("\t\t\t\t\tChoose an option: ");
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
            printf("\t\t\t\t\t________________________________________\n\n");
            printf("\t\t\t\t\t Upcoming features will available soon!\n\n");
            printf("\t\t\t\t\t________________________________________\n\n");
            cont_loop(n);
        }
        if(n==3)
        {
            while(cont=='y')
            {
                n=0;
                system("cls");
                printf("\t\t\t\t\t__________________________\n");
                printf("\n\t\t\t\t\t1.Login Into Management AC\n");
                printf("\t\t\t\t\t2.Admin Pannel\n");
                printf("\t\t\t\t\t3.Back\n");
                printf("\t\t\t\t\t4.Exit\n");
                printf("\t\t\t\t\t__________________________\n\n");
                printf("\t\t\t\t\tChoose an option: ");
                scanf("%d",&n);
                // cont_loop(n);

                if(n==1)
                {
                    while(cont=='y')
                    {
                        n=0;
                        system("cls");
                        printf("\t\t\t\t\t  Login Into Management Pannel\n\n");
                        printf("\t\t\t\t\t___________________________\n\n");
                        printf("\t\t\t\t\tEnter User Name: ");
                        scanf("%s",&login_userName);
                        strcpy(createFile,login_userName);
                        file = fopen(strcat(createFile,".dat"),"r");
                        fread(&user,sizeof(struct userinfo),1,file);
                        fclose(file);

                        if(file==NULL)
                        {
                            printf("\n\t\t\t\t\tAccount Invalid\n\n");
                            cont_loop(n);
                        }
                        else
                        {
                            fgetc(stdin);
                            printf("\t\t\t\t\tEnter Password : ");
                            fgets(login_password,30,stdin);
                            login_password[strlen(login_password)-1]=0;
                            if(!strcmp(user.password,login_password))
                            {
                                while(cont=='y')
                                {
                                    system("cls");
                                    printf("\t\t\t\t\t________________________________________\n\n");
                                    printf("\t\t\t\t\t      Welcome to Management AC\n");
                                    printf("\t\t\t\t\t________________________________________\n\n");
                                    printf("\t\t\t\t\tAccount holder name: %s\n\n",user.name);
                                    printf("\t\t\t\t\t1.USER INFO\n");
                                    printf("\t\t\t\t\t2.LOGIN USER AC\n");
                                    printf("\t\t\t\t\t3.CREATR USER AC\n");
                                    printf("\t\t\t\t\t4.USER APPLY\n\n");
                                    printf("\t\t\t\t\t5.MANAGEMENT INFO\n");
                                    printf("\t\t\t\t\t6.CHANGE YOUR PASSWORD\n");
                                    printf("\t\t\t\t\t7.BACK\n");
                                    printf("\t\t\t\t\t8.EXIT\n");
                                    printf("\t\t\t\t\t________________________________________\n");
                                    printf("\t\t\t\t\tChoose an option: ");
                                    scanf("%d",&n);
                                    if(n==7)
                                    {
                                        n=0;
                                        break;
                                    }
                                }
                            }
                            cont_loop(n);
                        }
                        if(n==3)
                        {
                            n=0;
                            break;
                        }
                        if(n==4)
                        {
                            n=0;
                            exit(1);
                        }
                        cont = 'y';
                        system("cls");
                        continue;
                    }
                }
                fgetc(stdin);
                if(n==2)
                {
                    while(cont=='y' || cont=='Y')
                    {
                        n=0;
                        system("cls");
                        printf("\n\t\t\t\t\t Welcome to Admin Pannel\n");
                        printf("\t\t\t\t\t__________________________\n\n");
                        printf("\t\t\t\t\t1.Create Admin pannel AC\n");
                        printf("\t\t\t\t\t2.Login Into Admin Pannel\n");
                        printf("\t\t\t\t\t3.Back\n");
                        printf("\t\t\t\t\t4.Exit\n");
                        printf("\t\t\t\t\t__________________________\n");
                        printf("\t\t\t\t\tChoose an option: ");
                        scanf("%d",&n);
                        //Create Admin panel AC
                        //Create Admin panel AC
                        if(n==1)
                        {
                            system("cls");
                            printf("\t\t\t\t\tCreate Admin panel AC\n");
                            printf("\t\t\t\t\t_______________________\n\n");

                            crecate_Admin_Ac(file,createFile,n);
                            cont_loop(n);
                        }
                        //Login into admin AC
                        //Login into admin AC
                        if(n==2)
                        {
                            n=0;
                            system("cls");
                            printf("\t\t\t\t\t  Login Into Admin Pannel\n");
                            printf("\t\t\t\t\t___________________________\n\n");

                            printf("\t\t\t\t\tEnter User Name: ");
                            scanf("%s",&login_userName);

                            strcpy(createFile,login_userName);
                            file = fopen(strcat(createFile,".docx"),"r");
                            fread(&user,sizeof(struct userinfo),1,file);
                            fclose(file);

                            if(file==NULL)
                            {
                                printf("\n\t\t\t\t\tAccount Invalid\n\n");
                                cont_loop(n);
                            }
                            else
                            {
                                fgetc(stdin);
                                printf("\t\t\t\t\tEnter Password : ");
                                fgets(login_password,30,stdin);
                                login_password[strlen(login_password)-1]=0;
                                if(!strcmp(user.password,login_password))
                                {
                                    while(cont=='y')
                                    {
                                        system("cls");
                                        printf("\t\t\t\t\t________________________________________\n");
                                        printf("\n\t\t\t\t\t      WELCOME TO ADMIN PANNEL \n");
                                        printf("\t\t\t\t\t________________________________________\n\n");

                                        printf("\t\t\t\t\t1.CLIENT INFOEMATION\n");
                                        printf("\t\t\t\t\t2.RECOVER CLIENT INFOEMATION\n\n");
                                        printf("\t\t\t\t\t3.MANAGEMENT INFORMATION\n");
                                        printf("\t\t\t\t\t4.RECOVER MANAGEMENT INFORMATION\n");
                                        printf("\t\t\t\t\t5.CREATE MANAGEMENT AC\n\n");
                                        printf("\t\t\t\t\t6.TOTAL BALANCE\n\n");
                                        printf("\t\t\t\t\t7.CHANGE YOUR PASSWORD\n");
                                        printf("\t\t\t\t\t8.Back\n");
                                        printf("\t\t\t\t\t9.Exit\n");
                                        printf("\t\t\t\t\t________________________________________\n\n");
                                        printf("\t\t\t\t\tChoose an option: ");
                                        scanf("%d",&n);
                                        //fgetc(stdin);
                                        if(n==5)
                                        {
                                            system("cls");
                                            n=0;
                                            printf("\t\t\t\t\t_______________________________\n");
                                            printf("\n\t\t\t\t\t CREATE MANAGEMENT AC\n");
                                            printf("\t\t\t\t\t_______________________________\n");

                                            crecate_management_Ac(file,createFile,n);
                                            cont_loop(n);
                                        }
                                        if(n==8)
                                        {
                                            n=0;
                                            break;
                                        }
                                        cont = 'y';
                                        system("cls");
                                        continue;
                                    }
                                }
                            }
                        }
                        if(n==3)
                        {
                            n=0;
                            break;
                        }
                        if(n==4)
                        {
                            exit(1);
                        }
                        cont = 'y';
                        system("cls");
                        continue;
                    }
                }
                if(n==3)
                {
                    n=0;
                    break;
                }
                if(n==4)
                {
                    exit(1);
                }
                cont = 'y';
                system("cls");
                continue;
            }
        }
        if(n==4)
        {
            exit(1);
        }
        cont = 'y';
        system("cls");
        continue;
    }
}
