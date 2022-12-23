#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
struct userinfo
{
    char name[30];
    char user_name[20];
    char phonenumber[15];
    char nid[20];
    char gmail[30];
    char password[30];
    char Re_enter_pass[30];
    char address[50];
    char pass_1[30];
    char pass_2[30];
    char date[10];
    char login_pass[15];
    float balance_;
} user;
struct adminInfo
{
    char name[30];
    char user_name[20];
    char phonenumber[15];
    char nid[20];
    char gmail[30];
    char password[30];
    char Re_enter_pass[30];
    char address[50];
    char pass_1[30];
    char pass_2[30];
    char date[30];
    char login_pass[15];
} admin;
struct manageInfo
{
    char name[30];
    char user_name[20];
    char phonenumber[15];
    char nid[20];
    char gmail[30];
    char password[30];
    char Re_enter_pass[30];
    char address[50];
    char pass_1[30];
    char pass_2[30];
    char date[10];
    char login_pass[15];
} management;
struct balance
{
    float balance;
} total_balance;
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
    printf("\t\t\t\t\t____________________________________\n\n");
    printf("\t\t\t\t\t      APPLY FOR ACCOUNT\n");
    printf("\t\t\t\t\t____________________________________\n\n");
    printf("\t\t\t\t\tEnter Name\t: ");
    fgets(user.name,30,stdin);
    user.name[strlen(user.name)-1]=0;
    printf("\t\t\t\t\tEnter Number\t: ");
    fgets(user.phonenumber,15,stdin);
    user.phonenumber[strlen(user.phonenumber)-1] = 0;
    printf("\t\t\t\t\tEnter NID\t: ");
    fgets(user.nid,20,stdin);
    user.nid[strlen(user.nid)-1] = 0;
    printf("\t\t\t\t\tEnter Gmail\t: ");
    fgets(user.gmail,30,stdin);
    user.gmail[strlen(user.gmail)-1] = 0;
    printf("\t\t\t\t\tYour Address\t: ");
    fgets(user.address,50,stdin);
    user.address[strlen(user.address)-1] = 0;
    printf("\t\t\t\t\t____________________________________\n\n");
    printf("\t\t\t\t\tDo you want to submit: \n\t\t\t\t\t1.Yes\n\t\t\t\t\t2.NO\n");
    scanf("%d",&n);
    if(n==1)
    {
        strcpy(user.date,__DATE__);
        strcpy(createFile,user.date);
        file = fopen(strcat(createFile,".txt"),"a+");
        fprintf(file,"%s\t\t\t%s\t\t\t%s\t\t\t%s\t\t\t\t%s\n",user.name,user.phonenumber,user.nid,user.gmail,user.address);
        fclose(file);
        system("cls");
        printf("\t\t\t\t\t____________________________________\n\n");
        printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
        printf("\t\t\t\t\t____________________________________\n");
        printf("'\n\t\t\t\t\t Successfully Applied !\n\n");
        printf("\t\t\t\t\t____________________________________");
    }
    if(n==2)
    {
        system("cls");
        printf("\t\t\t\t\t____________________________________\n\n");
        printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
        printf("\t\t\t\t\t____________________________________\n");
        printf("\n\t\t\t\t\tApplication Successfully Canceled!\n\n");
        printf("\t\t\t\t\t____________________________________");
    }
}
void crecate_user_Ac(FILE *file,char createFile[30],int n)
{
    fgetc(stdin);
    printf("\t\t\t\t\tEnter Name\t : ");
    fgets(user.name,30,stdin);
    user.name[strlen(user.name)-1]=0;
    printf("\t\t\t\t\tEnter Number\t : ");
    fgets(user.phonenumber,15,stdin);
    user.phonenumber[strlen(user.phonenumber)-1] = 0;
    printf("\t\t\t\t\tEnter NID\t : ");
    fgets(user.nid,20,stdin);
    user.nid[strlen(user.nid)-1] = 0;
    printf("\t\t\t\t\tEnter Gmail\t : ");
    fgets(user.gmail,30,stdin);
    user.gmail[strlen(user.gmail)-1] = 0;
    printf("\t\t\t\t\tEnter Address\t : ");
    fgets(user.address,30,stdin);
    user.address[strlen(user.address)-1] = 0;
    strcpy(createFile,user.phonenumber);
    file = fopen(strcat(createFile," "),"r");
    fread(&user,sizeof(struct userinfo),1,file);
    fclose(file);
    if(file!=NULL)
        printf("\t\t\t\t\tAccount registered before!\n\n");
    else
    {
        printf("\t\t\t\t\tCreate Password\t : ");
        fgets(user.password,30,stdin);
        user.password[strlen(user.password)-1]=0;
        printf("\t\t\t\t\tReEnter Password : ");
        fgets(user.Re_enter_pass,30,stdin);
        user.Re_enter_pass[strlen(user.Re_enter_pass)-1]=0;
        if(!strcmp(user.password,user.Re_enter_pass))
        {
            strcpy(createFile,user.phonenumber);
            file = fopen(strcat(createFile," "),"w");
            fwrite(&user,sizeof(struct userinfo),1,file);
            fclose(file);
            if(fwrite!=NULL)
                printf("\n\t\t\t\t\tAccount registered successfully!\n");
            else
                printf("\n\t\t\t\t\tSomething went wrong! Please try again.\n");
        }
    }
}
void crecate_Admin_Ac(FILE *file,char createFile[30],int n)
{
    fgetc(stdin);
    printf("\t\t\t\t\tEnter Name\t\t: ");
    fgets(admin.name,30,stdin);
    admin.name[strlen(admin.name)-1]=0;
    printf("\t\t\t\t\tEnter Number\t\t: ");
    fgets(admin.phonenumber,15,stdin);
    admin.phonenumber[strlen(admin.phonenumber)-1] = 0;
    printf("\t\t\t\t\tEnter NID\t\t: ");
    fgets(admin.nid,20,stdin);
    admin.nid[strlen(admin.nid)-1] = 0;
    printf("\t\t\t\t\tEnter Gmail\t\t: ");
    fgets(admin.gmail,30,stdin);
    admin.gmail[strlen(admin.gmail)-1] = 0;
    printf("\t\t\t\t\tCreate UserName\t\t: ");
    fgets(admin.user_name,20,stdin);
    admin.user_name[strlen(admin.user_name)-1] = 0;
    strcpy(createFile,admin.user_name);
    file = fopen(strcat(createFile,".docx"),"r");
    fread(&admin,sizeof(struct adminInfo),1,file);
    fclose(file);
    if(file!=NULL)
        printf("\t\t\t\t\tUsername taken before! Try again\n\n");
    else
    {
        printf("\t\t\t\t\tCreate Password\t\t: ");
        fgets(admin.password,30,stdin);
        admin.password[strlen(admin.password)-1]=0;
        printf("\t\t\t\t\tReEnter Password\t: ");
        fgets(admin.Re_enter_pass,30,stdin);
        admin.Re_enter_pass[strlen(admin.Re_enter_pass)-1]=0;
        if(!strcmp(admin.password,admin.Re_enter_pass))
        {
            strcpy(createFile,admin.user_name);
            file = fopen(strcat(createFile,".docx"),"w");
            fwrite(&admin,sizeof(struct userinfo),1,file);
            fclose(file);
            if(fwrite!=NULL)
                printf("\n\t\t\t\t\tAccount registered successfully!\n");
            else
                printf("\n\t\t\t\t\tSomething went wrong! Please try again.\n");
        }
    }
}
void crecate_management_Ac(FILE *file,char createFile[30],int n)
{
    fgetc(stdin);
    printf("\t\t\t\t\tEnter Name\t\t: ");
    fgets(management.name,30,stdin);
    management.name[strlen(management.name)-1]=0;
    printf("\t\t\t\t\tEnter Number\t\t: ");
    fgets(management.phonenumber,15,stdin);
    management.phonenumber[strlen(management.phonenumber)-1] = 0;
    printf("\t\t\t\t\tEnter NID\t\t: ");
    fgets(management.nid,20,stdin);
    management.nid[strlen(management.nid)-1] = 0;
    printf("\t\t\t\t\tEnter Gmail\t\t: ");
    fgets(management.gmail,30,stdin);
    management.gmail[strlen(management.gmail)-1] = 0;
    printf("\t\t\t\t\tCreate Username\t\t: ");
    fgets(management.user_name,20,stdin);
    management.user_name[strlen(management.user_name)-1] = 0;
    strcpy(createFile,management.user_name);
    file = fopen(strcat(createFile,".dat"),"r");
    fread(&management,sizeof(struct manageInfo),1,file);
    fclose(file);
    if(file!=NULL)
        printf("\t\t\t\t\tUserName taken before! Try again\n\n");
    else
    {
        printf("\t\t\t\t\tCreate Password\t\t: ");
        fgets(management.password,30,stdin);
        management.password[strlen(management.password)-1]=0;
        printf("\t\t\t\t\tReEnter Password\t: ");
        fgets(management.Re_enter_pass,30,stdin);
        management.Re_enter_pass[strlen(management.Re_enter_pass)-1]=0;
        if(!strcmp(management.password,management.Re_enter_pass))
        {
            strcpy(createFile,management.user_name);
            file = fopen(strcat(createFile,".dat"),"w");
            fwrite(&management,sizeof(struct manageInfo),1,file);
            fclose(file);
            if(fwrite!=NULL)
                printf("\n\t\t\t\t\tAccount registered successfully!\n");
            else
                printf("\n\t\t\t\t\tSomething went wrong! Please try again.\n");
        }
    }
}

int main()
{
    system("COLOR B");
    int n;
    struct userinfo user,user_2nd;
    struct adminInfo admin;
    struct manageInfo management;
    struct balance total_balance;//for check total balance from admin panel
    char login_password[30],login_userName[30], login_user_ac[15];
    char createFile[30];
    char ch;
    char update_info[30],user_name_2[30];
    char create_state_file[30]; //create statement file
    float addamount;
    int n1=00,n2=00;//n1=100 for management password generator && n2=200 admin password generator
    FILE *file;
    FILE *pass_file;
    FILE *fp_amount;
    FILE *file_statement;

    time_t t = time(NULL);
    char *time_str = ctime(&t);
    time_str[strlen(time_str) - 1] = '\0';
    while(1)
    {
        printf("\t\t\t\t\t____________________________________\n\n");
        printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
        printf("\t\t\t\t\t____________________________________\n\n");
        printf("\t\t\t\t\t  1.APPLY FOR CREATE AC\n");
        printf("\t\t\t\t\t  2.LOGIN INTO USER AC\n");
        printf("\t\t\t\t\t  3.BANK MANAGEMENT\n");
        printf("\t\t\t\t\t  4.HELP LINE\n");
        printf("\t\t\t\t\t  5.EXIT\n");
        printf("\t\t\t\t\t____________________________________\n\n");
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
            printf("\t\t\t\t\t____________________________________\n\n");
            printf("\t\t\t\t\t        LOGIN INTO ACCOUNT\n");
            printf("\t\t\t\t\t____________________________________\n");
            printf("\n\t\t\t\t\tEnter AC Number:  ");
            scanf("%s",&login_user_ac);
            strcpy(createFile,login_user_ac);;
            file = fopen(strcat(createFile," "),"r");
            fread(&user,sizeof(struct userinfo),1,file);
            fclose(file);
            if(file==NULL)
            {
                system("cls");
                printf("\t\t\t\t\t____________________________________\n\n");
                printf("\t\t\t\t\t   GIVEN ACCOUNT NOT REGISTERED!\n");
                printf("\t\t\t\t\t____________________________________\n\n");
                cont_loop(n);
            }
            else
            {
                fgetc(stdin);
                printf("\t\t\t\t\tEnter Password :  ");
                fgets(user.login_pass,15,stdin);
                user.login_pass[strlen(user.login_pass)-1] = 0;
                if(strcmp(user.password,user.login_pass))
                {
                    system("cls");
                    printf("\t\t\t\t\t____________________________________\n\n");
                    printf("\t\t\t\t\t       WRONG PASSWORD! TRY AGAIN\n");
                    printf("\t\t\t\t\t____________________________________\n\n");
                    cont_loop(n);
                }
                else
                {
                    while(1)
                    {
                        system("cls");
                        printf("\t\t\t\t\t____________________________________\n\n");
                        printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                        printf("\t\t\t\t\t____________________________________\n");
                        printf("\t\t\t\t\tAC Holder Name: %s\n\n",user.name);
                        printf("\t\t\t\t\t 1.GO TO TRANSACTION PAGE\n");
                        printf("\t\t\t\t\t 2.CHANGE PASSWORD\n");
                        printf("\t\t\t\t\t 3.YOUR DETAILS\n");
                        printf("\t\t\t\t\t 4.BACK\n");
                        printf("\t\t\t\t\t 5.EXIT\n");
                        printf("\t\t\t\t\t____________________________________\n");
                        printf("\t\t\t\t\tChoose an option: ");
                        scanf("%d",&n);
                        if(n==1)
                        {
                            while(1)
                            {
                                n=0;
                                system("cls");
                                printf("\t\t\t\t\t____________________________________\n\n");
                                printf("\t\t\t\t\t       TRANSACTION PAGE\n");
                                printf("\t\t\t\t\t____________________________________\n");
                                printf("\t\t\t\t\tAC Holder Name: %s\n\n",user.name);
                                printf("\t\t\t\t\t 1.CHECK BALANCE\n");
                                printf("\t\t\t\t\t 2.WITHDRAW AMOUNT\n");
                                printf("\t\t\t\t\t 3.TRANSFER AMOUNT\n");
                                printf("\t\t\t\t\t 4.STATEMENT\n");
                                printf("\t\t\t\t\t 5.BACK\n");
                                printf("\t\t\t\t\t 6.EXIT\n");
                                printf("\t\t\t\t\t____________________________________\n");
                                printf("\t\t\t\t\tChoose an option: ");
                                scanf("\t\t\t\t\t\t%d",&n);
                                if(n==1)
                                {
                                    system("cls");
                                    printf("\t\t\t\t\t____________________________________\n\n");
                                    printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                                    printf("\t\t\t\t\t____________________________________\n");
                                    printf("\n\t\t\t\t\tCurrent Balance: $ %.2f\n\n",user.balance_);
                                    printf("\t\t\t\t\t____________________________________\n");
                                    cont_loop(n);
                                }
                                //withdraw amount
                                if(n==2)
                                {
                                    n=0;
                                    system("cls");
                                    printf("\t\t\t\t\t____________________________________\n\n");
                                    printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                                    printf("\t\t\t\t\t____________________________________\n");
                                    printf("\t\t\t\t\tEnter the amount: ");
                                    scanf("%f",&addamount);
                                    fp_amount = fopen("Total_Balance","r");
                                    fread(&total_balance,sizeof(struct balance),1,fp_amount);
                                    fclose(fp_amount);
                                    if(addamount > user.balance_)
                                    {
                                        printf("\t\t\t\t\tNot enough balance\n\n");
                                        cont_loop(n);
                                    }
                                    else
                                    {
                                        if(fread!=NULL)
                                        {
                                            printf("\t\t\t\t\tDo you want to confirm:\n");
                                            printf("\t\t\t\t\t1.YES\n\t\t\t\t\t2.NO\n");
                                            printf("\t\t\t\t\tChoose an option: ");
                                            scanf("%d",&n);
                                            if(n==1)
                                            {
                                                user.balance_ -= addamount;
                                                file = fopen(createFile,"w");
                                                fwrite(&user,sizeof(struct userinfo),1,file);
                                                fclose(file);
                                                total_balance.balance -= addamount;
                                                fp_amount = fopen("Total_Balance","w");
                                                fwrite(&total_balance,sizeof(struct balance),1,fp_amount);
                                                fclose(fp_amount);
                                                char withdraw_file[30];//open statement file
                                                strcpy(withdraw_file,createFile);
                                                file_statement = fopen(strcat(withdraw_file,".statement"),"a+");
                                                fprintf(file_statement,"You've Debited amount    = $ %.2f  \t\t\t%s\n",addamount,time_str);
                                                fclose(file_statement);
                                                strcpy(create_state_file,__DATE__);
                                                file_statement = fopen(strcat(create_state_file,".statement"),"a+");
                                                fprintf(file_statement,"%s have debited amount  = $ %.2f \t\t\t%s\n",user.phonenumber,addamount,time_str);
                                                fclose(file_statement);
                                                printf("\n\t\t\t\t\t Successfully debited $ %.2f\n\n",addamount);
                                                cont_loop(n);
                                            }
                                        }
                                    }
                                }
                                //transfer amount
                                if(n==3)
                                {
                                    char transfer_AC[15];
                                    n=0;
                                    system("cls");
                                    printf("\t\t\t\t\t____________________________________\n\n");
                                    printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                                    printf("\t\t\t\t\t____________________________________\n");
                                    printf("\n\t\t\t\t\tEnter the AC Number: ");
                                    scanf("%s",&transfer_AC);
                                    strcpy(createFile, transfer_AC);
                                    file = fopen(strcat(createFile," "),"r");
                                    if(file==NULL)
                                    {
                                        printf("\n\t\t\t\t\tGiven AC not registered\n\n");
                                        cont_loop(n);
                                    }
                                    else
                                    {
                                        printf("\n\t\t\t\t\tEnter the amount   : ");
                                        scanf("%f",&addamount);
                                        fread(&user_2nd,sizeof(struct userinfo),1,file);
                                        fclose(file);
                                        if(addamount > user.balance_)
                                        {
                                            printf("\t\t\t\t\tNot enough balance\n\n");
                                            cont_loop(n);
                                        }
                                        else
                                        {
                                            printf("\t\t\t\t\tDo you want to confirm:\n");
                                            printf("\t\t\t\t\t1.YES\n\t\t\t\t\t2.NO\n");
                                            printf("\t\t\t\t\tChoose an option: ");
                                            scanf("%d",&n);
                                            if(n==1)
                                            {
                                                user_2nd.balance_+=addamount;
                                                file = fopen(createFile,"w");
                                                fwrite(&user_2nd,sizeof(struct userinfo),1,file);
                                                fclose(file);
                                                file_statement = fopen(strcat(createFile,".statement"),"a+");
                                                fprintf(file_statement,"You've received amount   = $ %.2f from %s \t\t%s\n",addamount,user.phonenumber,time_str);
                                                fclose(file_statement);
                                                if(fwrite!=NULL)
                                                {
                                                    printf("\n\t\t\t\t\tSuccessfully Transfered $ %.2f to %s\n\n",addamount,transfer_AC);
                                                    strcpy(createFile, user.phonenumber);
                                                    user.balance_-=addamount;
                                                    file = fopen(strcat(createFile," "),"w");
                                                    fwrite(&user,sizeof(struct userinfo),1,file);
                                                    fclose(file);
                                                    strcpy(create_state_file,createFile);
                                                    file_statement = fopen(strcat(create_state_file,".statement"),"a+");
                                                    fprintf(file_statement,"You've transfered amount = $ %.2f to %s \t\t%s\n",addamount,transfer_AC,time_str);
                                                    fclose(file_statement);
                                                    strcpy(create_state_file,__DATE__);
                                                    file_statement = fopen(strcat(create_state_file,".statement"),"a+");
                                                    fprintf(file_statement,"%s've transfered amount = $ %.2f to %s \t\t%s\n",user.phonenumber,addamount,transfer_AC,time_str);
                                                    fclose(file_statement);
                                                    cont_loop(n);
                                                }
                                                else
                                                {
                                                    printf("\n\t\t\t\t\tTransaction failed!\n\n");
                                                    cont_loop(n);
                                                }
                                            }
                                        }
                                    }
                                }
                                if(n==4)
                                {
                                    n=0;
                                    system("cls");
                                    printf("\t\t\t______________________________________________\n\n");
                                    printf("\t\t\t                YOUR STATEMENT\n");
                                    printf("\t\t\t______________________________________________\n\n");
                                    char withdraw_file[30];
                                    strcpy(withdraw_file,createFile);
                                    file_statement = fopen(strcat(withdraw_file,".statement"),"r");

                                    while(!feof(file_statement))
                                    {
                                        ch = fgetc(file_statement);
                                        printf("%c",ch);
                                    }
                                    printf("\n\n");
                                    cont_loop(n);
                                }
                                if(n==5)
                                {
                                    n=0;
                                    break;
                                }
                                if(n==6)
                                {
                                    n=0;
                                    exit(0);
                                }
                            }
                        }
                        if(n==2)
                        {
                            n=0;
                            char old_pass[30];
                            file = fopen(createFile,"r");
                            fread(&user,sizeof(struct userinfo),1,file);
                            fclose(file);
                            system("cls");
                            printf("\t\t\t\t\t________________________________________\n");
                            printf("\n\t\t\t\t\t      CHANGE  USER PASSWORD\n");
                            printf("\t\t\t\t\t________________________________________\n");
                            printf("\t\t\t\t\tEnter old password : ");
                            scanf("%s",&old_pass);
                            if(!strcmp(old_pass,user.password))
                            {
                                printf("\t\t\t\t\tEnter new password : ");
                                scanf("%s",&user.password);
                                printf("\t\t\t\t\tReEnter password   : ");
                                scanf("%s",&user.Re_enter_pass);
                                if(!strcmp(user.password,user.Re_enter_pass))
                                {
                                    file = fopen(createFile,"w");
                                    fwrite(&user,sizeof(struct userinfo),1,file);
                                    fclose(file);
                                    if(fwrite!=NULL)
                                        printf("\n\t\t\t\t\tPassword Successfully Changed\n\n");
                                    else
                                        printf("\n\t\t\t\t\tSomething Went Wrong!\n\n");
                                }
                                else
                                    printf("\n\t\t\t\t\tPassword doesn't matched!\n\n");
                            }
                            else
                                printf("\n\t\t\t\t\tPrevious password doesn't matched\n\n");
                            cont_loop(n);
                        }
                        if(n==3)
                        {
                            n=0;
                            system("cls");
                            printf("\t\t\t\t\t______________________________________________\n\n");
                            printf("\t\t\t\t\t                YOUR DETAILS\n");
                            printf("\t\t\t\t\t______________________________________________\n\n");
                            printf("\t\t\t\t\tAC Holder\t: %s\n",user.name);
                            printf("\t\t\t\t\tAC Number\t: %s\n",user.phonenumber);
                            printf("\t\t\t\t\tAC NID\t\t: %s\n",user.nid);
                            printf("\t\t\t\t\tAC Gmail\t: %s\n",user.gmail);
                            printf("\t\t\t\t\tAddress \t: %s\n",user.address);
                            printf("\t\t\t\t\t______________________________________________\n\n");
                            cont_loop(n);
                        }
                        if(n==4)
                        {
                            n=0;
                            break;
                        }
                        if(n==5)
                        {
                            exit(0);
                        }
                    }
                }
            }
        }
        if(n==3)
        {
            system("cls");
            if(n1==100)
            {
                printf("\t\t\t\t\t____________________________________\n\n");
                printf("\t\t\t\t\t     GENERATE MANAGEMENT PASSWORD\n");
                printf("\t\t\t\t\t____________________________________\n\n");
                pass_file = fopen("manag_pass.txt","w");
                printf("\t\t\t\t\tCreate Password  : ");
                fgets(management.pass_1,30,stdin);
                management.pass_1[strlen(management.pass_1)-1]=0;
                printf("\t\t\t\t\tReEnter Password : ");
                fgets(management.pass_2,30,stdin);
                management.pass_2[strlen(management.pass_2)-1]=0;
                fwrite(&management,sizeof(struct manageInfo),1,pass_file);
                fclose(pass_file);
                system("cls");
                printf("\t\t\t\t\t____________________________________\n\n");
                printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                printf("\t\t\t\t\t____________________________________\n\n");
                printf("\t\t\t\t\tPassword Successfully Setup!\n");
                printf("\t\t\t\t\t      !!Warning!!\n");
                printf("\t\t\t\t\tStop Password generator after setup.\n\n");
                printf("\t\t\t\t\t____________________________________\n\n");
                cont_loop(n);
            }
            else
            {
                pass_file = fopen("manag_pass.txt","r");
                fread(&management,sizeof(struct manageInfo),1,pass_file);
                printf("\t\t\t\t\t____________________________________\n\n");
                printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                printf("\t\t\t\t\t____________________________________\n\n");
                printf("\t\t\t\t\tEnter password: ");
                fgets(login_password,30,stdin);
                login_password[strlen(login_password)-1]=0;
                fclose(pass_file);
                if(!strcmp(management.pass_2,login_password))
                {
                    while(1)
                    {
                        n=0;
                        system("cls");
                        printf("\t\t\t\t\t____________________________________\n\n");
                        printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                        printf("\t\t\t\t\t____________________________________\n\n");
                        printf("\t\t\t\t\t  1.LOGIN MANAGEMENT AC\n");
                        printf("\t\t\t\t\t  2.ADMIN PANEL\n");
                        printf("\t\t\t\t\t  3.BACK\n");
                        printf("\t\t\t\t\t  4.EXIT\n");
                        printf("\t\t\t\t\t____________________________________\n\n");
                        printf("\t\t\t\t\tChoose an option: ");
                        scanf("%d",&n);
                        if(n==1)
                        {
                            n=0;
                            system("cls");
                            printf("\t\t\t\t\t____________________________________\n\n");
                            printf("\t\t\t\t\t      LOGIN INTO MANAGEMENT AC\n");
                            printf("\t\t\t\t\t____________________________________\n\n");
                            printf("\t\t\t\t\tEnter User Name: ");
                            scanf("%s",&login_userName);
                            strcpy(createFile,login_userName);
                            file = fopen(strcat(createFile,".dat"),"r");
                            fread(&management,sizeof(struct manageInfo),1,file);
                            fclose(file);
                            if(file==NULL)
                            {
                                printf("\t\t\t\t\t____________________________________\n\n");
                                printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                                printf("\t\t\t\t\t____________________________________\n");
                                printf("\n\t\t\t\t\tAccount Invalid\n\n");
                                cont_loop(n);
                            }
                            else
                            {
                                fgetc(stdin);
                                printf("\t\t\t\t\tEnter Password : ");
                                fgets(login_password,30,stdin);
                                login_password[strlen(login_password)-1]=0;
                                if(!strcmp(management.password,login_password))
                                {
                                    while(1)
                                    {
                                        system("cls");
                                        printf("\t\t\t\t_____________________________________________________________\n\n");
                                        printf("\t\t\t\t                WELCOME TO MANAGEMENT PANEL\n");
                                        printf("\t\t\t\t_____________________________________________________________\n");
                                        printf("\t\t\t\tManagement Holder: %s\n\n",management.name);
                                        printf("\t\t\t\t--------------------                   --------------------\n");
                                        printf("\t\t\t\t  1.USER INFO                            2.LOGIN USER AC\n");
                                        printf("\t\t\t\t--------------------                   --------------------\n\n");
                                        printf("\t\t\t\t--------------------                   --------------------\n");
                                        printf("\t\t\t\t  3.USER APPLY                           4.CREATE USER AC\n");
                                        printf("\t\t\t\t--------------------                   --------------------\n\n");
                                        printf("\t\t\t\t--------------------                   --------------------\n");
                                        printf("\t\t\t\t  5.MANAGEMENT INFO                      6.CHANGE PASSWORD\n");
                                        printf("\t\t\t\t--------------------                   --------------------\n\n");
                                        printf("\t\t\t\t                        ----------\n");
                                        printf("\t\t\t\t                         7.BACK\n");
                                        printf("\t\t\t\t                        ----------\n\n");
                                        printf("\t\t\t\t                        ----------\n");
                                        printf("\t\t\t\t                         8.EXIT\n");
                                        printf("\t\t\t\t                        ----------\n");
                                        printf("\t\t\t\t_____________________________________________________________\n\n");
                                        printf("\t\t\t\tChoose an option: ");
                                        scanf("%d",&n);
                                        if(n==1)
                                        {
                                            system("cls");
                                            printf("\t\t\t\t\t_______________________________\n");
                                            printf("\n\t\t\t\t\t   CLIENT INFORMATIION\n");
                                            printf("\t\t\t\t\t_______________________________\n");
                                            printf("\n\t\t\t\t\tEnter AC number: ");
                                            scanf("%s",&login_user_ac);
                                            strcpy(createFile,login_user_ac);
                                            file = fopen(strcat(createFile," "),"r");
                                            fread(&user,sizeof(struct userinfo),1,file);
                                            fclose(file);
                                            if(file==NULL)
                                                printf("\n\t\t\t\t\tAccount Invalid\n");
                                            else
                                            {
                                                system("cls");
                                                printf("\t\t\t\t\t_______________________________________\n");
                                                printf("\n\t\t\t\t\t       CLIENT INFORMATIION\n");
                                                printf("\t\t\t\t\t_______________________________________\n");
                                                printf("\t\t\t\t\tTotal Balance : $ %.2f\n\n",user.balance_);
                                                printf("\t\t\t\t\tAC Name       : %s\n",user.name);
                                                printf("\t\t\t\t\tAC Number     : %s\n",user.phonenumber);
                                                printf("\t\t\t\t\tNID Number    : %s\n",user.nid);
                                                printf("\t\t\t\t\tAC Gmail      : %s\n\n",user.gmail);
                                                printf("\t\t\t\t\t_______________________________________\n");
                                            }
                                            cont_loop(n);
                                        }
                                        if(n==2)
                                        {
                                            n=0;
                                            system("cls");
                                            printf("\t\t\t\t\t____________________________________\n\n");
                                            printf("\t\t\t\t\t       LOGIN INTO USER ACCOUNT\n");
                                            printf("\t\t\t\t\t____________________________________\n");
                                            printf("\n\t\t\t\t\tEnter AC Number:  ");
                                            scanf("%s",&login_user_ac);
                                            strcpy(createFile,login_user_ac);;
                                            file = fopen(strcat(createFile," "),"r+");
                                            fread(&user,sizeof(struct userinfo),1,file);
                                            fclose(file);
                                            if(file==NULL)
                                            {
                                                system("cls");
                                                printf("\t\t\t\t\t____________________________________\n\n");
                                                printf("\t\t\t\t\t   GIVEN ACCOUNT NOT REGISTERED!\n");
                                                printf("\t\t\t\t\t____________________________________\n\n");
                                                cont_loop(n);
                                            }
                                            else
                                            {
                                                //fgetc(stdin);
                                                //printf("\t\t\t\t\tEnter Password :  ");
                                                //fgets(user.login_pass,15,stdin);
                                                //user.login_pass[strlen(user.login_pass)-1] = 0;
                                                if(strcmp(user.password,user.Re_enter_pass))
                                                    /*for open pass system just open all function below else && change the variable
                                                    Re_enter_pass to user.login_pass in if condition.*/
                                                {
                                                    system("cls");
                                                    printf("\t\t\t\t\t____________________________________\n\n");
                                                    printf("\t\t\t\t\t       WRONG PASSWORD! TRY AGAIN\n");
                                                    printf("\t\t\t\t\t____________________________________\n\n");
                                                    cont_loop(n);
                                                }
                                                else
                                                {
                                                    while(1)
                                                    {
                                                        system("cls");
                                                        printf("\t\t\t\t\t____________________________________\n\n");
                                                        printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                                                        printf("\t\t\t\t\t____________________________________\n");
                                                        printf("\t\t\t\t\tAC Holder Name: %s\n\n",user.name);
                                                        printf("\t\t\t\t\t 1.GO TO TRANSACTION PAGE\n");
                                                        printf("\t\t\t\t\t 2.RESET USER PASSWORD\n");
                                                        printf("\t\t\t\t\t 3.YOUR DETAILS\n");
                                                        printf("\t\t\t\t\t 4.BACK\n");
                                                        printf("\t\t\t\t\t 5.EXIT\n");
                                                        printf("\t\t\t\t\t____________________________________\n");
                                                        printf("\t\t\t\t\tChoose an option: ");
                                                        scanf("%d",&n);
                                                        if(n==1)
                                                        {
                                                            while(1)
                                                            {
                                                                n=0;
                                                                system("cls");
                                                                printf("\t\t\t\t\t____________________________________\n\n");
                                                                printf("\t\t\t\t\t       TRANSACTION PAGE\n");
                                                                printf("\t\t\t\t\t____________________________________\n");
                                                                printf("\t\t\t\t\tAC Holder Name: %s\n\n",user.name);
                                                                printf("\t\t\t\t\t 1.CHECK BALANCE\n");
                                                                printf("\t\t\t\t\t 2.ADD AMOUNT\n");
                                                                printf("\t\t\t\t\t 3.WITHDRAW AMOUNT\n");
                                                                printf("\t\t\t\t\t 4.TRANSFER AMOUNT\n");
                                                                printf("\t\t\t\t\t 5.STATEMENT\n");
                                                                printf("\t\t\t\t\t 6.BACK\n");
                                                                printf("\t\t\t\t\t 7.EXIT\n");
                                                                printf("\t\t\t\t\t____________________________________\n");
                                                                printf("\t\t\t\t\tChoose an option: ");
                                                                scanf("\t\t\t\t\t\t%d",&n);
                                                                if(n==1)
                                                                {
                                                                    system("cls");
                                                                    printf("\t\t\t\t\t____________________________________\n\n");
                                                                    printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                                                                    printf("\t\t\t\t\t____________________________________\n");
                                                                    printf("\n\t\t\t\t\tCurrent Balance: %.2f $\n\n",user.balance_);
                                                                    printf("\t\t\t\t\t____________________________________\n");
                                                                    cont_loop(n);
                                                                }
                                                                //add amount
                                                                if(n==2)
                                                                {
                                                                    n=0;
                                                                    system("cls");
                                                                    printf("\t\t\t\t\t____________________________________\n\n");
                                                                    printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                                                                    printf("\t\t\t\t\t____________________________________\n");
                                                                    printf("\t\t\t\t\tEnter the amount: ");
                                                                    scanf("%f",&addamount);
                                                                    fp_amount = fopen("Total_Balance","r");
                                                                    fread(&total_balance,sizeof(struct balance),1,fp_amount);
                                                                    fclose(fp_amount);

                                                                    if(fread!=NULL)
                                                                    {
                                                                        printf("\t\t\t\t\tDo you want to confirm:\n");
                                                                        printf("\t\t\t\t\t1.YES\n\t\t\t\t\t2.NO\n");
                                                                        printf("\t\t\t\t\tChoose an option: ");
                                                                        scanf("%d",&n);
                                                                        if(n==1)
                                                                        {
                                                                            user.balance_ += addamount;
                                                                            file = fopen(createFile,"w");
                                                                            fwrite(&user,sizeof(struct userinfo),1,file);
                                                                            fclose(file);
                                                                            total_balance.balance += addamount;
                                                                            fp_amount = fopen("Total_Balance","w");
                                                                            fwrite(&total_balance,sizeof(struct balance),1,fp_amount);
                                                                            fclose(fp_amount);
                                                                            char add_amount_file[30];//open statement file
                                                                            strcpy(add_amount_file,createFile);
                                                                            file_statement = fopen(strcat(add_amount_file,".statement"),"a+");
                                                                            fprintf(file_statement,"You've credited amount   = $ %.2f  \t\t\t%s\n",addamount,time_str);
                                                                            fclose(file_statement);
                                                                            strcpy(create_state_file,__DATE__);
                                                                            file_statement = fopen(strcat(create_state_file,".statement"),"a+");
                                                                            fprintf(file_statement,"%s have credited amount = $ %.2f \t\t\t%s\n",user.phonenumber,addamount,time_str);
                                                                            fclose(file_statement);
                                                                            printf("\n\t\t\t\t\t Successfully credited $ %.2f\n\n",addamount);
                                                                            cont_loop(n);
                                                                        }
                                                                    }
                                                                }
                                                                //withdraw amount
                                                                if(n==3)
                                                                {
                                                                    n=0;
                                                                    system("cls");
                                                                    printf("\t\t\t\t\t____________________________________\n\n");
                                                                    printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                                                                    printf("\t\t\t\t\t____________________________________\n");
                                                                    printf("\t\t\t\t\tEnter the amount: ");
                                                                    scanf("%f",&addamount);
                                                                    fp_amount = fopen("Total_Balance","r");
                                                                    fread(&total_balance,sizeof(struct balance),1,fp_amount);
                                                                    fclose(fp_amount);
                                                                    if(addamount > user.balance_)
                                                                    {
                                                                        printf("\t\t\t\t\tNot enough balance\n\n");
                                                                        cont_loop(n);
                                                                    }
                                                                    else
                                                                    {
                                                                        if(fread!=NULL)
                                                                        {
                                                                            printf("\t\t\t\t\tDo you want to confirm:\n");
                                                                            printf("\t\t\t\t\t1.YES\n\t\t\t\t\t2.NO\n");
                                                                            printf("\t\t\t\t\tChoose an option: ");
                                                                            scanf("%d",&n);
                                                                            if(n==1)
                                                                            {
                                                                                user.balance_ -= addamount;
                                                                                file = fopen(createFile,"w");
                                                                                fwrite(&user,sizeof(struct userinfo),1,file);
                                                                                fclose(file);
                                                                                total_balance.balance -= addamount;
                                                                                fp_amount = fopen("Total_Balance","w");
                                                                                fwrite(&total_balance,sizeof(struct balance),1,fp_amount);
                                                                                fclose(fp_amount);
                                                                                char withdraw_file[30];//open statement file
                                                                                strcpy(withdraw_file,createFile);
                                                                                file_statement = fopen(strcat(withdraw_file,".statement"),"a+");
                                                                                fprintf(file_statement,"You've Debited amount    = $ %.2f  \t\t\t%s\n",addamount,time_str);
                                                                                fclose(file_statement);
                                                                                strcpy(create_state_file,__DATE__);
                                                                                file_statement = fopen(strcat(create_state_file,".statement"),"a+");
                                                                                fprintf(file_statement,"%s have debited amount  = $ %.2f \t\t\t%s\n",user.phonenumber,addamount,time_str);
                                                                                fclose(file_statement);
                                                                                printf("\n\t\t\t\t\t Successfully debited $ %.2f\n\n",addamount);
                                                                                cont_loop(n);
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                if(n==4)
                                                                {
                                                                    char transfer_AC[15];
                                                                    n=0;
                                                                    system("cls");
                                                                    printf("\t\t\t\t\t____________________________________\n\n");
                                                                    printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                                                                    printf("\t\t\t\t\t____________________________________\n");
                                                                    printf("\n\t\t\t\t\tEnter the AC Number: ");
                                                                    scanf("%s",&transfer_AC);
                                                                    strcpy(createFile, transfer_AC);
                                                                    file = fopen(strcat(createFile," "),"r");
                                                                    if(file==NULL)
                                                                    {
                                                                        printf("\n\t\t\t\t\tGiven AC not registered\n\n");
                                                                        cont_loop(n);
                                                                    }
                                                                    else
                                                                    {
                                                                        printf("\n\t\t\t\t\tEnter the amount: ");
                                                                        scanf("%f",&addamount);
                                                                        fread(&user_2nd,sizeof(struct userinfo),1,file);
                                                                        fclose(file);
                                                                        if(addamount > user.balance_)
                                                                        {
                                                                            printf("\t\t\t\t\tNot enough balance\n\n");
                                                                            cont_loop(n);
                                                                        }
                                                                        else
                                                                        {
                                                                            printf("\t\t\t\t\tDo you want to confirm:\n");
                                                                            printf("\t\t\t\t\t1.YES\n\t\t\t\t\t2.NO\n");
                                                                            printf("\t\t\t\t\tChoose an option: ");
                                                                            scanf("%d",&n);
                                                                            if(n==1)
                                                                            {
                                                                                user_2nd.balance_+=addamount;
                                                                                file = fopen(createFile,"w");
                                                                                fwrite(&user_2nd,sizeof(struct userinfo),1,file);
                                                                                fclose(file);
                                                                                time_t t = time(NULL);
                                                                                char *time_str = ctime(&t);
                                                                                time_str[strlen(time_str) - 1] = '\0';
                                                                                file_statement = fopen(strcat(createFile,".statement"),"a+");
                                                                                fprintf(file_statement,"You've received amount   = $ %.2f from %s \t\t%s\n",addamount,user.phonenumber,time_str);
                                                                                fclose(file_statement);
                                                                                if(fwrite!=NULL)
                                                                                {
                                                                                    printf("\n\t\t\t\t\tSuccessfully Transfered $ %.2f to %s\n\n",addamount,transfer_AC);
                                                                                    strcpy(createFile, user.phonenumber);
                                                                                    user.balance_-=addamount;
                                                                                    file = fopen(strcat(createFile," "),"w");
                                                                                    fwrite(&user,sizeof(struct userinfo),1,file);
                                                                                    fclose(file);
                                                                                    strcpy(create_state_file,createFile);
                                                                                    file_statement = fopen(strcat(create_state_file,".statement"),"a+");
                                                                                    fprintf(file_statement,"You've transfered amount = $ %.2f to %s \t\t%s\n",addamount,transfer_AC,time_str);
                                                                                    fclose(file_statement);
                                                                                    strcpy(create_state_file,__DATE__);
                                                                                    file_statement = fopen(strcat(create_state_file,".statement"),"a+");
                                                                                    fprintf(file_statement,"%s've transfered amount = $ %.2f to %s \t\t%s\n",user.phonenumber,addamount,transfer_AC,time_str);
                                                                                    fclose(file_statement);
                                                                                    cont_loop(n);
                                                                                }
                                                                                else
                                                                                {
                                                                                    printf("\n\t\t\t\t\tTransaction failed!\n\n");
                                                                                    cont_loop(n);
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                if(n==5)
                                                                {
                                                                    n=0;
                                                                    system("cls");
                                                                    printf("\t\t\t______________________________________________\n\n");
                                                                    printf("\t\t\t                YOUR STATEMENT\n");
                                                                    printf("\t\t\t______________________________________________\n\n");
                                                                    char withdraw_file[30];
                                                                    strcpy(withdraw_file,createFile);
                                                                    file_statement = fopen(strcat(withdraw_file,".statement"),"r");

                                                                    while(!feof(file_statement))
                                                                    {
                                                                        ch = fgetc(file_statement);
                                                                        printf("%c",ch);
                                                                    }
                                                                    printf("\n\n");
                                                                    cont_loop(n);
                                                                }
                                                                if(n==6)
                                                                {
                                                                    n=0;
                                                                    break;
                                                                }
                                                                if(n==7)
                                                                {
                                                                    n=0;
                                                                    exit(0);
                                                                }
                                                            }
                                                        }
                                                        if(n==2)
                                                        {
                                                            n=0;
                                                            char old_pass[30];
                                                            file = fopen(createFile,"r");
                                                            fread(&user,sizeof(struct userinfo),1,file);
                                                            fclose(file);
                                                            system("cls");
                                                            printf("\t\t\t\t\t________________________________________\n");
                                                            printf("\n\t\t\t\t\t       RESET  USER PASSWORD\n");
                                                            printf("\t\t\t\t\t________________________________________\n");
                                                            //printf("\t\t\t\t\tEnter old password : ");
                                                            //scanf("%s",&old_pass);
                                                            //if(!strcmp(old_pass,user.password))
                                                            {
                                                                printf("\t\t\t\t\tEnter new password : ");
                                                                scanf("%s",&user.password);
                                                                printf("\t\t\t\t\tReEnter password   : ");
                                                                scanf("%s",&user.Re_enter_pass);
                                                                if(!strcmp(user.password,user.Re_enter_pass))
                                                                {
                                                                    file = fopen(createFile,"w");
                                                                    fwrite(&user,sizeof(struct userinfo),1,file);
                                                                    fclose(file);
                                                                    if(fwrite!=NULL)
                                                                        printf("\n\t\t\t\t\tPassword Successfully Changed\n\n");
                                                                    else
                                                                        printf("\n\t\t\t\t\tSomething Went Wrong!\n\n");
                                                                }
                                                                else
                                                                    printf("\n\t\t\t\t\tPassword doesn't matched!\n\n");
                                                            }
                                                            //else
                                                            //printf("\n\t\t\t\t\tPrevious password doesn't matched\n\n");
                                                            cont_loop(n);
                                                        }
                                                        if(n==3)
                                                        {
                                                            system("cls");
                                                            printf("\t\t\t\t\t________________________________________\n\n");
                                                            printf("\t\t\t\t\t            YOUR DETAILS\n");
                                                            printf("\t\t\t\t\t________________________________________\n");
                                                            printf("\n\t\t\t\t\tAC Holder\t: %s\n",user.name);
                                                            printf("\t\t\t\t\tAC number\t: %s\n",user.phonenumber);
                                                            printf("\t\t\t\t\tNID\t\t: %s\n",user.nid);
                                                            printf("\t\t\t\t\tGmail AC\t: %s\n",user.gmail);
                                                            printf("\t\t\t\t\t________________________________________\n");
                                                            cont_loop(n);
                                                        }
                                                        if(n==4)
                                                        {
                                                            n=0;
                                                            break;
                                                        }
                                                        if(n==5)
                                                        {
                                                            exit(0);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        fgetc(stdin);
                                        if(n==3)
                                        {
                                            system("cls");

                                            printf("\t\t\t\t\t______________________________________\n");
                                            printf("\n\t\t\t\t\t             USER APPLY\n");
                                            printf("\t\t\t\t\t______________________________________\n");
                                            printf("\t\t\t\t\tEnter Date : ");
                                            fgets(management.date,30,stdin);
                                            management.date[strlen(management.date)-1]=0;
                                            strcpy(createFile,management.date);
                                            file = fopen(strcat(createFile,".txt"),"r");
                                            if(file==NULL)
                                            {
                                                printf("\n\t\t\t\t\tApply not available on this day!\n\n");
                                            }
                                            else
                                            {
                                                printf("\n");
                                                while(!feof(file))
                                                {
                                                    ch = fgetc(file);
                                                    printf("%c",ch);
                                                }
                                                printf("\n\n");
                                            }
                                            cont_loop(n);

                                        }
                                        if(n==4)
                                        {
                                            n=0;
                                            system("cls");
                                            printf("\t\t\t\t\t_______________________________\n");
                                            printf("\n\t\t\t\t\t     CREATE USER AC\n");
                                            printf("\t\t\t\t\t_______________________________\n");
                                            crecate_user_Ac(file,createFile,n);
                                            cont_loop(n);
                                        }
                                        if(n==5)
                                        {
                                            n=0;

                                            system("cls");
                                            printf("\t\t\t\t\t_______________________________\n");
                                            printf("\n\t\t\t\t\t MANAGEMENT INFORMATIION\n");
                                            printf("\t\t\t\t\t_______________________________\n");
                                            printf("\n\t\t\t\t\tEnter UserName: ");
                                            scanf("%s",&login_user_ac);
                                            strcpy(createFile,login_user_ac);
                                            file = fopen(strcat(createFile,".dat"),"r");
                                            fread(&management,sizeof(struct manageInfo),1,file);
                                            fclose(file);
                                            if(file==NULL)
                                                printf("\n\n\t\t\t\t\tAccount Invalid\n\n");
                                            else
                                            {
                                                system("cls");
                                                printf("\t\t\t\t\t_______________________________________\n");
                                                printf("\n\t\t\t\t\t       MANAGEMENT INFORMATIION\n");
                                                printf("\t\t\t\t\t_______________________________________\n\n");
                                                printf("\t\t\t\t\tAC Name       : %s\n",management.name);
                                                printf("\t\t\t\t\tAC Number     : %s\n",management.phonenumber);
                                                printf("\t\t\t\t\tNID Number    : %s\n",management.nid);
                                                printf("\t\t\t\t\tAC Gmail      : %s\n\n",management.gmail);
                                                printf("\t\t\t\t\t_______________________________________\n");
                                            }
                                            cont_loop(n);
                                        }
                                        if(n==6)
                                        {
                                            n=0;
                                            char old_pass[30];
                                            file = fopen(createFile,"r");
                                            fread(&management,sizeof(struct manageInfo),1,file);
                                            fclose(file);
                                            system("cls");
                                            printf("\t\t\t\t\t________________________________________\n");
                                            printf("\n\t\t\t\t\t      CHANGE ADMIN PASSWORD\n");
                                            printf("\t\t\t\t\t________________________________________\n");
                                            printf("\t\t\t\t\tEnter old password : ");
                                            scanf("%s",&old_pass);
                                            if(!strcmp(old_pass,management.password))
                                            {
                                                printf("\t\t\t\t\tEnter new password : ");
                                                scanf("%s",&management.password);
                                                printf("\t\t\t\t\tReEnter password   : ");
                                                scanf("%s",&management.Re_enter_pass);
                                                if(!strcmp(management.password,management.Re_enter_pass))
                                                {
                                                    file = fopen(createFile,"w");
                                                    fwrite(&management,sizeof(struct manageInfo),1,file);
                                                    fclose(file);
                                                    if(fwrite!=NULL)
                                                        printf("\n\t\t\t\t\tPassword Successfully Changed\n\n");
                                                    else
                                                        printf("\n\t\t\t\t\tSomething Went Wrong!\n\n");
                                                }
                                                else
                                                    printf("\n\t\t\t\t\tPassword doesn't matched!\n\n");
                                            }
                                            else
                                                printf("\n\t\t\t\t\tPrevious password doesn't matched\n\n");
                                            cont_loop(n);
                                        }
                                        if(n==7)
                                        {
                                            n=0;
                                            break;
                                        }
                                    }
                                }
                                else
                                {
                                    system("cls");
                                    printf("\t\t\t\t\t____________________________________\n");
                                    printf("\t\t\t\t\t       WRONG PASSWORD! TRY AGAN\n");
                                    printf("\t\t\t\t\t____________________________________\n\n");
                                    cont_loop(n);
                                }
                            }
                        }
                        fgetc(stdin);
                        if(n==2)
                        {
                            system("cls");
                            if(n2==200)
                            {
                                printf("\t\t\t\t\t____________________________________\n\n");
                                printf("\t\t\t\t\t       GENERATE ADMIN PASSWORD\n");
                                printf("\t\t\t\t\t____________________________________\n\n");
                                pass_file = fopen("admin_pass.txt","w");
                                printf("\t\t\t\t\tCreate Password  : ");
                                fgets(admin.pass_1,30,stdin);
                                admin.pass_1[strlen(admin.pass_1)-1]=0;
                                printf("\t\t\t\t\tReEnter Password : ");
                                fgets(admin.pass_2,30,stdin);
                                admin.pass_2[strlen(admin.pass_2)-1]=0;
                                fwrite(&admin,sizeof(struct adminInfo),1,pass_file);
                                fclose(pass_file);
                                system("cls");
                                printf("\t\t\t\t\t____________________________________\n\n");
                                printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                                printf("\t\t\t\t\t____________________________________\n\n");
                                printf("\t\t\t\t\tPassword Successfully Setup!\n");
                                printf("\t\t\t\t\t      !!Warning!!\n");
                                printf("\t\t\t\t\tStop Password generator after setup.\n\n");
                                printf("\t\t\t\t\t____________________________________\n\n");
                                cont_loop(n);
                            }
                            else
                            {
                                pass_file = fopen("admin_pass.txt","r");
                                fread(&admin,sizeof(struct adminInfo),1,pass_file);
                                printf("\t\t\t\t\t____________________________________\n\n");
                                printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                                printf("\t\t\t\t\t____________________________________\n\n");
                                printf("\t\t\t\t\tEnter password: ");
                                fgets(login_password,30,stdin);
                                login_password[strlen(login_password)-1]=0;
                                fclose(pass_file);
                                if(!strcmp(admin.pass_2,login_password))
                                {
                                    while(1)
                                    {
                                        n=0;
                                        system("cls");
                                        printf("\t\t\t\t\t____________________________________\n\n");
                                        printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                                        printf("\t\t\t\t\t____________________________________\n\n");
                                        printf("\t\t\t\t\t1.CREATE ADMIN AC\n");
                                        printf("\t\t\t\t\t2.LOGIN ADMIN AC\n");
                                        printf("\t\t\t\t\t3.BACK\n");
                                        printf("\t\t\t\t\t4.EXIT\n");
                                        printf("\t\t\t\t\t____________________________________\n");
                                        printf("\t\t\t\t\tChoose an option: ");
                                        scanf("%d",&n);
                                        //Create Admin panel AC
                                        if(n==1)
                                        {
                                            system("cls");
                                            printf("\t\t\t\t\t____________________________________\n\n");
                                            printf("\t\t\t\t\t       CREATE ADMIN AC\n");
                                            printf("\t\t\t\t\t____________________________________\n\n");
                                            crecate_Admin_Ac(file,createFile,n);
                                            cont_loop(n);
                                        }
                                        //Login into admin AC
                                        if(n==2)
                                        {
                                            n=0;
                                            system("cls");
                                            printf("\t\t\t\t\t____________________________________\n\n");
                                            printf("\t\t\t\t\t       LOGIN INTO ADMIN AC\n");
                                            printf("\t\t\t\t\t____________________________________\n\n");
                                            printf("\t\t\t\t\tEnter User Name: ");
                                            scanf("%s",&login_userName);
                                            strcpy(createFile,login_userName);
                                            file = fopen(strcat(createFile,".docx"),"r");
                                            fread(&admin,sizeof(struct adminInfo),1,file);
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
                                                if(!strcmp(admin.password,login_password))
                                                {
                                                    while(1)
                                                    {
                                                        n=0;
                                                        system("cls");
                                                        printf("\t\t\t\t_______________________________________________________________\n\n");
                                                        printf("\t\t\t\t                   WELCOME TO ADMIN PANEL\n");
                                                        printf("\t\t\t\t_______________________________________________________________\n");
                                                        printf("\t\t\t\tAdmin Holder: %s\n\n",admin.name);
                                                        printf("\t\t\t\t--------------------                     ----------------------\n");
                                                        printf("\t\t\t\t  1.TOTAL BALANCE                          2.STATEMENT\n");
                                                        printf("\t\t\t\t----------------------                   ----------------------\n\n");
                                                        printf("\t\t\t\t----------------------                   ----------------------\n");
                                                        printf("\t\t\t\t  3.CLIENT INFO                            4.UPDATE CLIENT INFO\n");
                                                        printf("\t\t\t\t----------------------                   ----------------------\n\n");
                                                        printf("\t\t\t\t----------------------                   ----------------------\n");
                                                        printf("\t\t\t\t  5.MANAGEMENT INFO                        6.UPDATE MANAGE. INFO\n");
                                                        printf("\t\t\t\t----------------------                   ----------------------\n\n");
                                                        printf("\t\t\t\t----------------------                   ----------------------\n");
                                                        printf("\t\t\t\t  7.CREATE MANAGE. AC                      8.CHANGE PASSWORD\n");
                                                        printf("\t\t\t\t----------------------                   ----------------------\n\n");
                                                        printf("\t\t\t\t                          ----------\n");
                                                        printf("\t\t\t\t                           9.BACK\n");
                                                        printf("\t\t\t\t                          ----------\n\n");
                                                        printf("\t\t\t\t                          ----------\n");
                                                        printf("\t\t\t\t                           10.EXIT\n");
                                                        printf("\t\t\t\t                          ----------\n");
                                                        printf("\t\t\t\t_______________________________________________________________\n\n");
                                                        printf("\t\t\t\tChoose an option: ");
                                                        scanf("%d",&n);
                                                        if(n==1)
                                                        {
                                                            system("cls");
                                                            printf("\t\t\t\t\t_______________________________\n");
                                                            printf("\n\t\t\t\t\t     TOTAL BALANCE\n");
                                                            printf("\t\t\t\t\t_______________________________\n");
                                                            fp_amount = fopen("Total_Balance","r");
                                                            fread(&total_balance,sizeof(struct balance),1,fp_amount);
                                                            fclose(fp_amount);
                                                            printf("\n\t\t\t\t\tTotal Balance: $ %.2f\n",total_balance.balance);
                                                            printf("\t\t\t\t\t_______________________________\n");
                                                            cont_loop(n);
                                                        }
                                                        fgetc(stdin);
                                                        if(n==2)
                                                        {
                                                            system("cls");

                                                            printf("\t\t\t\t\t______________________________________\n");
                                                            printf("\n\t\t\t\t\t             STATEMENT\n");
                                                            printf("\t\t\t\t\t______________________________________\n");
                                                            printf("\t\t\t\t\tEnter Date : ");
                                                            fgets(admin.date,30,stdin);
                                                            admin.date[strlen(admin.date)-1]=0;
                                                            strcpy(create_state_file,admin.date);
                                                            file_statement = fopen(strcat(create_state_file,".statement"),"r+");
                                                            if(file_statement==NULL)
                                                            {
                                                                printf("\n\t\t\t\t\tStatement not available on this day!\n\n");
                                                            }
                                                            else
                                                            {
                                                                printf("\n");
                                                                while(!feof(file_statement))
                                                                {
                                                                    ch = fgetc(file_statement);
                                                                    printf("%c",ch);
                                                                }
                                                                printf("\n\n");
                                                            }
                                                            cont_loop(n);
                                                        }
                                                        if(n==3)
                                                        {
                                                            system("cls");
                                                            printf("\t\t\t\t\t_______________________________\n");
                                                            printf("\n\t\t\t\t\t   CLIENT INFORMATIION\n");
                                                            printf("\t\t\t\t\t_______________________________\n");
                                                            printf("\n\t\t\t\t\tEnter AC number: ");
                                                            scanf("%s",&login_user_ac);
                                                            strcpy(createFile,login_user_ac);
                                                            file = fopen(strcat(createFile," "),"r");
                                                            fread(&user,sizeof(struct userinfo),1,file);
                                                            fclose(file);
                                                            if(file==NULL)
                                                                printf("\n\t\t\t\t\tAccount Invalid\n");
                                                            else
                                                            {
                                                                system("cls");
                                                                printf("\t\t\t\t\t_______________________________________\n");
                                                                printf("\n\t\t\t\t\t       CLIENT INFORMATIION\n");
                                                                printf("\t\t\t\t\t_______________________________________\n");
                                                                printf("\t\t\t\t\tTotal Balance : $ %.2f\n\n",user.balance_);
                                                                printf("\t\t\t\t\tAC Name       : %s\n",user.name);
                                                                printf("\t\t\t\t\tAC Number     : %s\n",user.phonenumber);
                                                                printf("\t\t\t\t\tNID Number    : %s\n",user.nid);
                                                                printf("\t\t\t\t\tAC Gmail      : %s\n\n",user.gmail);
                                                                printf("\t\t\t\t\t_______________________________________\n");
                                                            }
                                                            cont_loop(n);
                                                        }
                                                        if(n==4)
                                                        {
                                                            system("cls");
                                                            printf("\t\t\t\t\t_______________________________________\n");
                                                            printf("\n\t\t\t\t\t    UPDATE CLIENT INFORMATIION\n");
                                                            printf("\t\t\t\t\t_______________________________________\n");
                                                            printf("\n\t\t\t\t\tEnter AC number: ");
                                                            scanf("%s",&login_user_ac);
                                                            strcpy(createFile,login_user_ac);
                                                            file = fopen(strcat(createFile," "),"r");
                                                            fread(&user,sizeof(struct userinfo),1,file);
                                                            fclose(file);
                                                            if(file==NULL)
                                                                printf("\n\t\t\t\t\tAccount Invalid\n");
                                                            else
                                                            {
                                                                while(1)
                                                                {
                                                                    system("cls");
                                                                    printf("\t\t\t\t\t_______________________________________\n");
                                                                    printf("\n\t\t\t\t\t    UPDATE CLIENT INFORMATIION\n");
                                                                    printf("\t\t\t\t\t_______________________________________\n");
                                                                    printf("\t\t\t\t\tAC Name: %s\n\n",user.name);
                                                                    printf("\t\t\t\t\t 1.Name\n");
                                                                    printf("\t\t\t\t\t 2.Gmail\n");
                                                                    printf("\t\t\t\t\t 3.NID\n");
                                                                    printf("\t\t\t\t\t 4.Number\n");
                                                                    //printf("\t\t\t\t\t 5.Address\n");
                                                                    printf("\t\t\t\t\t 5.Check Update\n\n");
                                                                    printf("\t\t\t\t\t 6.Back\n");
                                                                    printf("\t\t\t\t\t 7.Exit\n");
                                                                    printf("\t\t\t\t\t_______________________________________\n");
                                                                    printf("\t\t\t\t\tChoose an option: ");
                                                                    scanf("%d",&n);
                                                                    fgetc(stdin);
                                                                    if(n==1)
                                                                    {
                                                                        n=0;
                                                                        system("cls");
                                                                        printf("\t\t\t\t\t_______________________________________\n");
                                                                        printf("\n\t\t\t\t\t    UPDATE CLIENT INFORMATIION\n");
                                                                        printf("\t\t\t\t\t_______________________________________\n");
                                                                        printf("\t\t\t\t\tAC Name: %s\n\n",user.name);
                                                                        printf("\t\t\t\t\tPresent Name  : %s\n\n",user.name);
                                                                        printf("\t\t\t\t\tEnter New Name: ");
                                                                        fgets(update_info,30,stdin);
                                                                        update_info[strlen(update_info)-1]=0;
                                                                        printf("\t\t\t\t\tConfirm Submission: ");
                                                                        printf("\n\t\t\t\t\t1.YES\n\t\t\t\t\t2.NO\t\t\t\t\t\n");
                                                                        printf("\t\t\t\t\t_______________________________________\n");
                                                                        scanf("%d",&n);
                                                                        if(n==1)
                                                                        {
                                                                            n=0;
                                                                            strcpy(user.name,update_info);
                                                                            file = fopen(strcat(createFile," "),"w");
                                                                            fwrite(&user,sizeof(struct userinfo),1,file);
                                                                            fclose(file);
                                                                            if(fwrite!=NULL)
                                                                            {
                                                                                printf("\t\t\t\t\tName Successfully Updated!\n\n");
                                                                                printf("\t\t\t\t\t_______________________________________\n");
                                                                            }
                                                                            else
                                                                            {
                                                                                printf("\t\t\t\t\tSomething went wrong! Try again\n");
                                                                                printf("\t\t\t\t\t_______________________________________\n");
                                                                            }
                                                                        }
                                                                        if(n==2)
                                                                        {
                                                                            n=0;
                                                                            printf("\t\t\t\t\tSuccessfully canceled.\n");
                                                                            printf("\t\t\t\t\t_______________________________________\n");
                                                                        }
                                                                        cont_loop(n);
                                                                    }
                                                                    if(n==2)
                                                                    {
                                                                        system("cls");
                                                                        printf("\t\t\t\t\t_______________________________________\n");
                                                                        printf("\n\t\t\t\t\t    UPDATE CLIENT INFORMATIION\n");
                                                                        printf("\t\t\t\t\t_______________________________________\n");
                                                                        printf("\t\t\t\t\tAC Name: %s\n\n",user.name);
                                                                        printf("\t\t\t\t\tPresent Gmail: %s\n\n",user.gmail);
                                                                        printf("\t\t\t\t\tEnter new Gmail: ");
                                                                        fgets(update_info,30,stdin);
                                                                        update_info[strlen(update_info)-1]=0;
                                                                        printf("\t\t\t\t\tConfirm Submission: ");
                                                                        printf("\n\t\t\t\t\t1.YES\n\t\t\t\t\t2.NO\n");
                                                                        scanf("%d",&n);
                                                                        if(n==1)
                                                                        {
                                                                            n=0;
                                                                            strcpy(user.gmail,update_info);
                                                                            file = fopen(strcat(createFile," "),"w");
                                                                            fwrite(&user,sizeof(struct userinfo),1,file);
                                                                            fclose(file);
                                                                            if(fwrite!=NULL)
                                                                            {
                                                                                printf("\t\t\t\t\tGmail Successfully Updated!\n\n");
                                                                                printf("\t\t\t\t\t_______________________________________\n");
                                                                            }
                                                                            else
                                                                            {
                                                                                printf("\t\t\t\t\tSomething went wrong! Try again\n");
                                                                                printf("\t\t\t\t\t_______________________________________\n");
                                                                            }
                                                                        }
                                                                        if(n==2)
                                                                        {
                                                                            n=0;
                                                                            printf("\t\t\t\t\tSuccessfully canceled.\n");
                                                                            printf("\t\t\t\t\t_______________________________________\n");
                                                                        }
                                                                        cont_loop(n);
                                                                    }
                                                                    if(n==3)
                                                                    {
                                                                        n=0;
                                                                        system("cls");
                                                                        printf("\t\t\t\t\t_______________________________________\n");
                                                                        printf("\n\t\t\t\t\t    UPDATE CLIENT INFORMATIION\n");
                                                                        printf("\t\t\t\t\t_______________________________________\n");
                                                                        printf("\t\t\t\t\tAC Name: %s\n\n",user.name);
                                                                        printf("\t\t\t\t\tPresent NID    : %s\n\n",user.nid);
                                                                        printf("\t\t\t\t\tEnter new NID  : ");
                                                                        fgets(update_info,30,stdin);
                                                                        update_info[strlen(update_info)-1]=0;
                                                                        printf("\t\t\t\t\tConfirm Submission: ");
                                                                        printf("\n\t\t\t\t\t1.YES\n\t\t\t\t\t2.NO\n");
                                                                        scanf("%d",&n);
                                                                        if(n==1)
                                                                        {
                                                                            n=0;
                                                                            strcpy(user.nid,update_info);
                                                                            file = fopen(strcat(createFile," "),"w");
                                                                            fwrite(&user,sizeof(struct userinfo),1,file);
                                                                            fclose(file);
                                                                            if(fwrite!=NULL)
                                                                            {
                                                                                printf("\t\t\t\t\tNID Successfully Updated!\n\n");
                                                                                printf("\t\t\t\t\t_______________________________________\n");
                                                                            }
                                                                            else
                                                                            {
                                                                                printf("\t\t\t\t\tSomething went wrong! Try again\n");
                                                                                printf("\t\t\t\t\t_______________________________________\n");
                                                                            }
                                                                        }
                                                                        if(n==2)
                                                                        {
                                                                            n=0;
                                                                            printf("\t\t\t\t\tSuccessfully canceled.\n");
                                                                            printf("\t\t\t\t\t_______________________________________\n");
                                                                        }
                                                                        cont_loop(n);
                                                                    }
                                                                    if(n==4)
                                                                    {
                                                                        n=0;
                                                                        system("cls");
                                                                        printf("\t\t\t\t\t_______________________________________\n");
                                                                        printf("\n\t\t\t\t\t    UPDATE CLIENT INFORMATIION\n");
                                                                        printf("\t\t\t\t\t_______________________________________\n");
                                                                        printf("\t\t\t\t\tAC Name: %s\n\n",user.name);
                                                                        printf("\t\t\t\t\tPresent AC Number  : %s\n\n",user.phonenumber);
                                                                        printf("\t\t\t\t\tEnter New AC Number: ");
                                                                        fgets(update_info,15,stdin);
                                                                        update_info[strlen(update_info)-1]=0;
                                                                        printf("\t\t\t\t\tConfirm Submission: ");
                                                                        printf("\n\t\t\t\t\t1.YES\n\t\t\t\t\t2.NO\n\t\t\t\t\t");
                                                                        scanf("%d",&n);
                                                                        if(n==1)
                                                                        {
                                                                            n=0;
                                                                            strcpy(createFile,user.phonenumber);
                                                                            rename(createFile,update_info);
                                                                            strcpy(user.phonenumber,update_info);
                                                                            strcpy(createFile,user.phonenumber);
                                                                            file = fopen(strcat(createFile," "),"w");
                                                                            fwrite(&user,sizeof(struct userinfo),1,file);
                                                                            fclose(file);
                                                                            if(fwrite!=NULL)
                                                                            {
                                                                                printf("\t\t\t\t\tAC Number Successfully Updated!\n\n");
                                                                                printf("\t\t\t\t\t_______________________________________\n");
                                                                            }
                                                                            else
                                                                            {
                                                                                printf("\t\t\t\t\tSomething went wrong! Try again\n");
                                                                                printf("\t\t\t\t\t_______________________________________\n");
                                                                            }
                                                                        }
                                                                        if(n==2)
                                                                        {
                                                                            n=0;
                                                                            printf("\t\t\t\t\tSuccessfully canceled.\n");
                                                                            printf("\t\t\t\t\t_______________________________________\n");
                                                                        }
                                                                        cont_loop(n);
                                                                    }
                                                                    if(n==5)
                                                                    {
                                                                        system("cls");
                                                                        printf("\t\t\t\t\t________________________________________\n\n");
                                                                        printf("\t\t\t\t\t            CLIENT UPDATE DETAILS\n");
                                                                        printf("\t\t\t\t\t________________________________________\n\n");
                                                                        printf("\t\t\t\t\tAC Name    : %s\n",user.name);
                                                                        printf("\t\t\t\t\tAC Number  : %s\n",user.phonenumber);
                                                                        printf("\t\t\t\t\tAC NID     : %s\n",user.nid);
                                                                        printf("\t\t\t\t\tAC Gmail   : %s\n",user.gmail);
                                                                        printf("\t\t\t\t\t________________________________________\n");
                                                                        cont_loop(n);
                                                                    }
                                                                    if(n==6)
                                                                    {
                                                                        n=0;
                                                                        break;
                                                                    }
                                                                    if(n==7)
                                                                    {
                                                                        n=0;
                                                                        exit(0);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if(n==5)
                                                        {
                                                            system("cls");
                                                            printf("\t\t\t\t\t_______________________________\n");
                                                            printf("\n\t\t\t\t\t MANAGEMENT INFORMATIION\n");
                                                            printf("\t\t\t\t\t_______________________________\n");
                                                            printf("\n\t\t\t\t\tEnter UserName: ");
                                                            scanf("%s",&login_user_ac);
                                                            strcpy(createFile,login_user_ac);
                                                            file = fopen(strcat(createFile,".dat"),"r");
                                                            fread(&management,sizeof(struct manageInfo),1,file);
                                                            fclose(file);
                                                            if(file==NULL)
                                                                printf("\n\n\t\t\t\t\tAccount Invalid\n\n");
                                                            else
                                                            {
                                                                system("cls");
                                                                printf("\t\t\t\t\t_______________________________________\n");
                                                                printf("\n\t\t\t\t\t       MANAGEMENT INFORMATIION\n");
                                                                printf("\t\t\t\t\t_______________________________________\n\n");
                                                                printf("\t\t\t\t\tAC Name       : %s\n",management.name);
                                                                printf("\t\t\t\t\tAC Number     : %s\n",management.phonenumber);
                                                                printf("\t\t\t\t\tNID Number    : %s\n",management.nid);
                                                                printf("\t\t\t\t\tAC Gmail      : %s\n\n",management.gmail);
                                                                printf("\t\t\t\t\t_______________________________________\n");
                                                            }
                                                            cont_loop(n);
                                                        }
                                                        if(n==6)
                                                        {
                                                            n=0;
                                                            system("cls");
                                                            printf("\t\t\t\t\t_________________________________________\n");
                                                            printf("\n\t\t\t\t\t   UPDATE MANAGEMENT INFORMATIION\n");
                                                            printf("\t\t\t\t\t_________________________________________\n");
                                                            printf("\t\t\t\t\tEnter UserName: ");
                                                            scanf("%s",&login_userName);
                                                            strcpy(createFile,login_userName);
                                                            file = fopen(strcat(createFile,".dat"),"r");
                                                            fread(&management,sizeof(struct manageInfo),1,file);
                                                            if(file==NULL)
                                                            {
                                                                printf("\n\t\t\t\t\tAccount Invalid\n\n");
                                                                cont_loop(n);
                                                            }
                                                            else
                                                            {
                                                                while(1)
                                                                {
                                                                    system("cls");
                                                                    printf("\t\t\t\t\t_________________________________________\n");
                                                                    printf("\n\t\t\t\t\t   UPDATE MANAGEMENT INFORMATIION\n");
                                                                    printf("\t\t\t\t\t_________________________________________\n");
                                                                    printf("\t\t\t\t\tAC Name: %s\n\n",management.name);
                                                                    printf("\t\t\t\t\t 1.Name\n");
                                                                    printf("\t\t\t\t\t 2.Gmail\n");
                                                                    printf("\t\t\t\t\t 3.NID\n");
                                                                    printf("\t\t\t\t\t 4.Number\n");

                                                                    printf("\t\t\t\t\t 5.Check Update\n\n");
                                                                    printf("\t\t\t\t\t 6.Back\n");
                                                                    printf("\t\t\t\t\t 7.Exit\n");
                                                                    printf("\t\t\t\t\t_________________________________________\n");
                                                                    printf("\t\t\t\t\tChoose an option: ");
                                                                    scanf("%d",&n);
                                                                    fgetc(stdin);
                                                                    if(n==1)
                                                                    {
                                                                        n=0;
                                                                        system("cls");
                                                                        printf("\t\t\t\t\t_________________________________________\n");
                                                                        printf("\n\t\t\t\t\t   UPDATE MANAGEMENT INFORMATIION\n");
                                                                        printf("\t\t\t\t\t_________________________________________\n");
                                                                        printf("\t\t\t\t\tAC Name: %s\n\n",management.name);
                                                                        printf("\t\t\t\t\tPresent Name  : %s\n\n",management.name);
                                                                        printf("\t\t\t\t\tEnter New Name: ");
                                                                        fgets(update_info,30,stdin);
                                                                        update_info[strlen(update_info)-1]=0;
                                                                        printf("\t\t\t\t\tConfirm Submission: ");
                                                                        printf("\n\t\t\t\t\t1.YES\n\t\t\t\t\t2.NO\t\t\t\t\t\n");
                                                                        printf("\t\t\t\t\t_________________________________________\n");
                                                                        scanf("%d",&n);
                                                                        if(n==1)
                                                                        {
                                                                            n=0;
                                                                            strcpy(management.name,update_info);
                                                                            file = fopen(createFile,"w");
                                                                            fwrite(&management,sizeof(struct manageInfo),1,file);
                                                                            fclose(file);
                                                                            if(fwrite!=NULL)
                                                                            {
                                                                                printf("\t\t\t\t\tName Successfully Updated!\n\n");
                                                                                printf("\t\t\t\t\t_________________________________________\n");
                                                                            }
                                                                            else
                                                                            {
                                                                                printf("\t\t\t\t\tSomething went wrong! Try again\n");
                                                                                printf("\t\t\t\t\t_________________________________________\n");
                                                                            }
                                                                        }
                                                                        if(n==2)
                                                                        {
                                                                            n=0;
                                                                            printf("\t\t\t\t\tSuccessfully canceled.\n");
                                                                            printf("\t\t\t\t\t_________________________________________\n");
                                                                        }
                                                                        cont_loop(n);
                                                                    }
                                                                    if(n==2)
                                                                    {
                                                                        system("cls");
                                                                        printf("\t\t\t\t\t_________________________________________\n");
                                                                        printf("\n\t\t\t\t\t   UPDATE MANAGEMENT INFORMATIION\n");
                                                                        printf("\t\t\t\t\t_________________________________________\n");
                                                                        printf("\t\t\t\t\tAC Name: %s\n\n",management.name);
                                                                        printf("\t\t\t\t\tPresent Gmail  : %s\n\n",management.gmail);
                                                                        printf("\t\t\t\t\tEnter new Gmail: ");
                                                                        fgets(update_info,30,stdin);
                                                                        update_info[strlen(update_info)-1]=0;
                                                                        printf("\t\t\t\t\tConfirm Submission: ");
                                                                        printf("\n\t\t\t\t\t1.YES\n\t\t\t\t\t2.NO\n");
                                                                        scanf("%d",&n);
                                                                        if(n==1)
                                                                        {
                                                                            n=0;
                                                                            strcpy(management.gmail,update_info);
                                                                            file = fopen(createFile,"w");
                                                                            fwrite(&management,sizeof(struct manageInfo),1,file);
                                                                            fclose(file);
                                                                            if(fwrite!=NULL)
                                                                            {
                                                                                printf("\t\t\t\t\tName Successfully Updated!\n\n");
                                                                                printf("\t\t\t\t\t_________________________________________\n");
                                                                            }
                                                                            else
                                                                            {
                                                                                printf("\t\t\t\t\tSomething went wrong! Try again\n");
                                                                                printf("\t\t\t\t\t_________________________________________\n");
                                                                            }
                                                                        }
                                                                        if(n==2)
                                                                        {
                                                                            n=0;
                                                                            printf("\t\t\t\t\tSuccessfully canceled.\n");
                                                                            printf("\t\t\t\t\t_________________________________________\n");
                                                                        }
                                                                        cont_loop(n);
                                                                    }
                                                                    if(n==3)
                                                                    {
                                                                        n=0;
                                                                        system("cls");
                                                                        printf("\t\t\t\t\t_________________________________________\n");
                                                                        printf("\n\t\t\t\t\t   UPDATE MANAGEMENT INFORMATIION\n");
                                                                        printf("\t\t\t\t\t_________________________________________\n");
                                                                        printf("\t\t\t\t\tAC Name: %s\n\n",management.name);
                                                                        printf("\t\t\t\t\tPresent NID    : %s\n\n",management.nid);
                                                                        printf("\t\t\t\t\tEnter new NID  : ");
                                                                        fgets(update_info,30,stdin);
                                                                        update_info[strlen(update_info)-1]=0;
                                                                        printf("\t\t\t\t\tConfirm Submission: ");
                                                                        printf("\n\t\t\t\t\t1.YES\n\t\t\t\t\t2.NO\n");
                                                                        scanf("%d",&n);
                                                                        if(n==1)
                                                                        {
                                                                            n=0;
                                                                            strcpy(management.nid,update_info);
                                                                            file = fopen(createFile,"w");
                                                                            fwrite(&management,sizeof(struct manageInfo),1,file);
                                                                            fclose(file);
                                                                            if(fwrite!=NULL)
                                                                            {
                                                                                printf("\t\t\t\t\tGmail Successfully Updated!\n\n");
                                                                                printf("\t\t\t\t\t_________________________________________\n");
                                                                            }
                                                                            else
                                                                            {
                                                                                printf("\t\t\t\t\tSomething went wrong! Try again\n");
                                                                                printf("\t\t\t\t\t_________________________________________\n");
                                                                            }
                                                                        }
                                                                        if(n==2)
                                                                        {
                                                                            n=0;
                                                                            printf("\t\t\t\t\tSuccessfully canceled.\n");
                                                                            printf("\t\t\t\t\t_________________________________________\n");
                                                                        }
                                                                        cont_loop(n);
                                                                    }
                                                                    if(n==4)
                                                                    {
                                                                        n=0;
                                                                        system("cls");
                                                                        printf("\t\t\t\t\t_________________________________________\n");
                                                                        printf("\n\t\t\t\t\t   UPDATE MANAGEMENT INFORMATIION\n");
                                                                        printf("\t\t\t\t\t_________________________________________\n");
                                                                        printf("\t\t\t\t\tAC Name: %s\n\n",management.name);
                                                                        printf("\t\t\t\t\tPresent UserName   : %s\n\n",management.phonenumber);
                                                                        printf("\t\t\t\t\tEnter New AC Number: ");
                                                                        fgets(update_info,15,stdin);
                                                                        update_info[strlen(update_info)-1]=0;
                                                                        printf("\t\t\t\t\tConfirm Submission: ");
                                                                        printf("\n\t\t\t\t\t1.YES\n\t\t\t\t\t2.NO\n\t\t\t\t\t");
                                                                        scanf("%d",&n);
                                                                        if(n==1)
                                                                        {
                                                                            n=0;
                                                                            strcpy(management.phonenumber,update_info);
                                                                            file = fopen(createFile,"w");
                                                                            fwrite(&management,sizeof(struct manageInfo),1,file);
                                                                            fclose(file);
                                                                            if(fwrite!=NULL)
                                                                            {
                                                                                printf("\t\t\t\t\tNumber Successfully Updated!\n\n");
                                                                                printf("\t\t\t\t\t_________________________________________\n");
                                                                            }
                                                                            else
                                                                            {
                                                                                printf("\t\t\t\t\tSomething went wrong! Try again\n");
                                                                                printf("\t\t\t\t\t_________________________________________\n");
                                                                            }
                                                                        }
                                                                        if(n==2)
                                                                        {
                                                                            n=0;
                                                                            printf("\t\t\t\t\tSuccessfully canceled.\n");
                                                                            printf("\t\t\t\t\t_________________________________________\n");
                                                                        }
                                                                        cont_loop(n);
                                                                    }
                                                                    if(n==5)
                                                                    {
                                                                        n=0;
                                                                        system("cls");
                                                                        printf("\t\t\t\t\t________________________________________\n\n");
                                                                        printf("\t\t\t\t\t        MANAGEMENT UPDATE DETAILS\n");
                                                                        printf("\t\t\t\t\t________________________________________\n\n");
                                                                        printf("\t\t\t\t\tAC Name    : %s\n",management.name);
                                                                        printf("\t\t\t\t\tAC Number  : %s\n",management.phonenumber);
                                                                        printf("\t\t\t\t\tAC NID     : %s\n",management.nid);
                                                                        printf("\t\t\t\t\tAC Gmail   : %s\n",management.gmail);
                                                                        printf("\t\t\t\t\t________________________________________\n");
                                                                        cont_loop(n);
                                                                    }
                                                                    if(n==6)
                                                                    {
                                                                        n=0;
                                                                        break;
                                                                    }
                                                                    if(n==7)
                                                                    {
                                                                        n=0;
                                                                        exit(0);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if(n==7)
                                                        {
                                                            n=0;
                                                            system("cls");
                                                            printf("\t\t\t\t\t_______________________________\n");
                                                            printf("\n\t\t\t\t\t CREATE MANAGEMENT AC\n");
                                                            printf("\t\t\t\t\t_______________________________\n");
                                                            crecate_management_Ac(file,createFile,n);
                                                            cont_loop(n);
                                                            continue;
                                                        }
                                                        if(n==8)
                                                        {
                                                            n=0;
                                                            char old_pass[30];
                                                            file = fopen(createFile,"r");
                                                            fread(&admin,sizeof(struct adminInfo),1,file);
                                                            fclose(file);
                                                            system("cls");
                                                            printf("\t\t\t\t\t________________________________________\n");
                                                            printf("\n\t\t\t\t\t      CHANGE ADMIN PASSWORD\n");
                                                            printf("\t\t\t\t\t________________________________________\n");
                                                            printf("\t\t\t\t\tEnter old password : ");
                                                            scanf("%s",&old_pass);
                                                            if(!strcmp(old_pass,admin.password))
                                                            {
                                                                printf("\t\t\t\t\tEnter new password : ");
                                                                scanf("%s",&admin.password);
                                                                printf("\t\t\t\t\tReEnter password   : ");
                                                                scanf("%s",&admin.Re_enter_pass);
                                                                if(!strcmp(admin.password,admin.Re_enter_pass))
                                                                {
                                                                    file = fopen(createFile,"w");
                                                                    fwrite(&admin,sizeof(struct adminInfo),1,file);
                                                                    fclose(file);
                                                                    if(fwrite!=NULL)
                                                                        printf("\n\t\t\t\t\tPassword Successfully Changed\n\n");
                                                                    else
                                                                        printf("\n\t\t\t\t\tSomething Went Wrong!\n\n");
                                                                }
                                                                else
                                                                    printf("\n\t\t\t\t\tPassword doesn't matched!\n\n");
                                                            }
                                                            else
                                                                printf("\n\t\t\t\t\tPrevious password doesn't matched\n\n");
                                                            cont_loop(n);
                                                        }
                                                        if(n==9)
                                                        {
                                                            n=0;
                                                            break;
                                                        }
                                                        if(n==10)
                                                        {

                                                            n=0;
                                                            exit(0);
                                                        }
                                                        system("cls");
                                                    }
                                                }
                                                else
                                                {
                                                    system("cls");
                                                    printf("\t\t\t\t\t____________________________________\n\n");
                                                    printf("\t\t\t\t\t       WRONG PASSWORD! TRY AGAIN\n");
                                                    printf("\t\t\t\t\t____________________________________\n\n");
                                                    cont_loop(n);
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
                                            n=0;
                                            exit(0);
                                        }
                                        system("cls");
                                    }
                                }
                                else
                                {
                                    system("cls");
                                    printf("\t\t\t\t\t____________________________________\n\n");
                                    printf("\t\t\t\t\t       WRONG PASSWORD! TRY AGAIN\n");
                                    printf("\t\t\t\t\t____________________________________\n\n");
                                    cont_loop(n);
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
                            n=0;
                            exit(1);
                        }
                        system("cls");
                    }
                }
                else
                {
                    system("cls");
                    printf("\t\t\t\t\t____________________________________\n\n");
                    printf("\t\t\t\t\t       WRONG PASSWORD! TRY AGAIN\n");
                    printf("\t\t\t\t\t____________________________________\n\n");
                    cont_loop(n);
                }
            }
        }
        if(n==4)
        {
            n=0;
            system("cls");
            file = fopen("helpline","r");
            while(!feof(file))
            {
                ch = fgetc(file);
                printf("%c",ch);
            }
            cont_loop(n);
        }
        if(n==5)
            exit(1);
        system("cls");
    }
    return 0;
}
