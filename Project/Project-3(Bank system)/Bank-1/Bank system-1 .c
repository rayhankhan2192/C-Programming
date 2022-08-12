#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
struct balance
{
    float balance;
} usr_balance;

struct userIn
{
    char name[30];
    char phoneNumber[30];
    char createPassword[30];
    char reEnterPassword[30];
    char email[20];
    char logIn_account[30];
    float amount;
    char userName[30];
    char reEnterName[30];//used for recover client name
    char nid_number[16];
    char address[60];
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
void apply_user_AC(FILE *file, char createFile[30],int n)
{
    printf("\n\t\tApply for New Account\n");
    printf("\t\t--------------------\n");
    printf("\nEnter your name\t\t: ");
    fgets(user.name,30,stdin);
    user.name[strlen(user.name)-1] = 0;
    printf("Enter phone number\t: ");
    fgets(user.phoneNumber,30,stdin);
    user.phoneNumber[strlen(user.phoneNumber)-1] = 0;
    printf("Enter gmail\t\t: ");
    fgets(user.email,30,stdin);
    user.email[strlen(user.email)-1] = 0;
    printf("Enter NID number\t: ");
    fgets(user.nid_number,30,stdin);
    user.nid_number[strlen(user.nid_number)-1] = 0;
    printf("Your Address\t\t: ");
    fgets(user.address,60,stdin);
    user.address[strlen(user.address)-1] = 0;

    printf("Submit: \n1.Yes\n2.No\n");
    scanf("%d",&n);
    if(n==1)
    {
        strcpy(user.date,__DATE__);
        strcpy(createFile,user.date);
        file = fopen(strcat(createFile,".txt"),"a+");
        fprintf(file,"%s\t\t\t%s\t\t%s\t\tNID: %s\t\t%s\n\n",&user.name,&user.phoneNumber,&user.email,&user.nid_number,&user.address);
        fclose(file);
        printf("Applied successfully\n\nWe will notify you on 3 working day.\n");
    }
    if(n==2)
    {

    }
}
void create_user_AC(FILE *file,char createFile[30],int n)
{
    n=0;
    system("cls");
    printf("\n\t\tCreate user account\n");
    printf("\t\t--------------------\n");
    printf("\nEnter your name:\t");
    fgets(user.name,30,stdin);
    user.name[strlen(user.name)-1] = 0;
    printf("Enter phone number\t\t: ");
    scanf("%s",&user.phoneNumber);
    printf("Enter gmail\t\t\t: ");
    scanf("%s",&user.email);
    strcpy(createFile,user.phoneNumber);
    file = fopen(strcat(createFile,".txt"),"r");
    fclose(file);
    if(file!=NULL)
    {
        printf("Account registered before!\n");
    }
    else
    {
        printf("Create password\t\t: ");
        scanf("%s",&user.createPassword);
        printf("ReEnter password\t\t: ");
        scanf("%s",&user.reEnterPassword);
        if(!strcmp(user.createPassword,user.reEnterPassword))
        {
            strcpy(createFile,user.phoneNumber);
            file = fopen(strcat(createFile,".txt"),"w");
            fwrite(&user,sizeof(struct userIn),1,file);
            fclose(file);
            if(fprintf!=NULL)
            {
                printf("\nAccount created successfully!\n");
                printf("Your account number:\t%s\n",user.phoneNumber);
            }
            else
            {
                printf("Something went wrong!\n");
                printf("Please! Try again");
            }
        }
        else
        {
            printf("Password doesn't matched!");
        }
    }

    printf("\n\n");
    cont_loop(n);
}
void client_Info(FILE *file,char createFile[30],char logIn_password[30])
{
    printf("\n\t Client information\n");
    printf("\t---------------------\n\n");
    printf("Enter AC number:\t");
    scanf("%s",&user.logIn_account);
    strcpy(createFile,user.logIn_account);
    file = fopen(strcat(createFile,".txt"),"r");
    if(file==NULL)
    {
        printf("Account invalid!\n\n");
    }
    else
    {
        //open password system for management to check client info
        //printf("Enter password:\t\t");
        //scanf("%s",&logIn_password);
        fread(&user,sizeof(struct userIn),1,file);
        fclose(file);
        //for password system[just cut !sign]
        if(!strcmp(user.createPassword,logIn_password))
        {
            printf("Password wrong!\n\n");
        }
        else
        {
            system("cls");
            printf("\nAccount name\t\t: %s\n",user.name);
            printf("Account number\t\t: %s\n",user.phoneNumber);
            printf("Gmail account\t\t: %s\n",user.email);
            printf("\nTotal balance\t\t: %.2f\n\n",user.amount);
            printf("Password\t\t: %s\n\n",user.reEnterPassword);
        }
    }
}
void create_management_AC(FILE *file, char createFile[30])
{
    printf("\n\t Create new management account\n");
    printf("\t--------------------------\n\n");
    printf("Enter name\t\t:");
    fgets(user.name,30,stdin);
    user.name[strlen(user.name)-1] = 0;
    printf("Enter phone number\t:");
    scanf("%s",&user.phoneNumber);
    printf("Enter email\t\t:");
    scanf("%s",&user.email);
    printf("Enter username\t\t:");
    scanf("%s",&user.userName);
    strcpy(createFile,user.userName);
    file = fopen(strcat(createFile,".dat"),"r");
    fclose(file);
    if(file!=NULL)
    {
        printf("Username taken before!\n\n");
    }
    else
    {
        printf("Create password\t\t:");
        scanf("%s",&user.createPassword);
        printf("ReEnter password\t:");
        scanf("%s",&user.reEnterPassword);
        if(!strcmp(user.createPassword,user.reEnterPassword))
        {
            strcpy(createFile,user.userName);
            file = fopen(strcat(createFile,".dat"),"w");
            fwrite(&user,sizeof(struct userIn),1,file);
            fclose(file);
            if(fprintf!=NULL)
            {
                printf("\nAccount created successfully!\n\n");
                printf("Your username:\t%s\n",user.userName);
                printf("Your password:\t%s\n",user.reEnterPassword);
            }
            else
            {
                printf("Something went wrong!\n");
                printf("Please! Try again\n\n");
            }
        }
        else
        {
            printf("Password doesn't matched!\n\n");
        }
    }
}

void management_AC_Info(FILE *file, char createFile[30],char login_userName[30],char userName[30],int n)
{
    printf("\n\t Management account info\n");
    printf("\t--------------------------\n\n");
    printf("Enter username: ");
    scanf("%s",login_userName);
    //printf("Enter password: ");
    //scanf("%s",&logIn_password);
    strcpy(createFile,login_userName);
    file = fopen(strcat(createFile,".dat"),"r");
    fread(&user,sizeof(struct userIn),1,file);
    fclose(file);
    if(file==NULL)
    {
        printf("Account invalid!\n\n");
    }
    else
    {
        system("cls");
        printf("\n\t Management account info\n");
        printf("\t---------------------------\n\n");
        printf("Account name\t: %s\n",user.name);
        printf("Phone NO\t: %s\n",user.phoneNumber);
        printf("Email\t\t: %s\n",user.email);
        printf("User name\t: %s\n\n",user.userName);
        printf("Password\t: %s\n\n",user.reEnterPassword);
    }
}

void create_Admin_AC(FILE *file, char createFile[30])
{
    system("cls");
    printf("\n\t Create new admin pannel Account\n");
    printf("\t------------------------------------\n\n");
    printf("Enter name\t\t : ");
    fgets(user.name,30,stdin);
    user.name[strlen(user.name)-1] = 0;
    printf("Enter phone NO\t\t : ");
    scanf("%s",&user.phoneNumber);

    printf("Enter Mail\t\t : ");
    scanf("%s",&user.email);
    printf("Create username\t\t : ");
    scanf("%s",&user.userName);
    strcpy(createFile,user.userName);
    file = fopen(strcat(createFile,".docx"),"r");
    fclose(file);
    if(file!=NULL)
    {
        printf("Username taken before! Try again\n\n");
    }
    else
    {
        printf("Create password\t\t : ");
        scanf("%s",&user.createPassword);
        printf("ReEnter password\t : ");
        scanf("%s",&user.reEnterPassword);
        if(!strcmp(user.createPassword,user.reEnterPassword))
        {
            strcpy(createFile,user.userName);
            file = fopen(strcat(createFile,".docx"),"w");
            fwrite(&user,sizeof(struct userIn),1,file);
            fclose(file);
            if(fwrite!=NULL)
            {
                printf("Account registered successfully!\n");
            }
            else
            {
                printf("Something went wrong! Please try again.\n");
            }
        }
    }
}

//main function
//main function
int main()
{
    int n;
    struct userIn user,user_1;
    struct balance usr_balance;
    FILE *file;
    FILE *fp;
    char createFile[30],ch;//uses for create new file
    char logIn_password[30];
    char login_userName[30];//uses for admin login
    char trans_AC_number[30];//uses for money tansfer
    float addAmount;
    char cont = 'y';

    while(cont=='y' || cont=='Y')
    {
        {
            printf("\n\t Welcome to BANK OF SPAIN\n");
            printf("\t--------------------------\n\n");
            printf("1.Apply for Account\n");
            printf("2.Login user account\n");
            printf("3.Bank Management\n");
            printf("4.Exit\n\n");
            printf("Choose an option: ");
            scanf("%d",&n);
            fgetc(stdin);
            //create_user_AC
            //create_user_AC
            if(n==1)
            {
                n=0;
                system("cls");
                apply_user_AC(file,createFile,n);
                printf("\n\n");
                cont_loop(n);
            }
            //logIn account page
            //logIn account page
            //logIn account page
            //logIn account page
            if(n==2)
            {
                n=0;
                system("cls");
                printf("\n\tLogin user account\n");
                printf("\t---------------------");
                printf("\nEnter your AC number\t: ");
                scanf("%s",&user.logIn_account);
                printf("Enter password\t\t: ");
                scanf("%s",&logIn_password);

                strcpy(createFile,user.logIn_account);
                file = fopen(strcat(createFile,".txt"),"r");
                if(file==NULL)
                {
                    printf("Account invalid!\n\n");
                    cont_loop(n);
                }
                else
                {
                    fread(&user,sizeof(struct userIn),1,file);
                    fclose(file);

                    if(!strcmp(logIn_password,user.reEnterPassword))
                    {
                        while(cont=='y' || cont=='Y')
                        {
                            system("cls");
                            printf("\nAccount holder name: %s",user.name);
                            printf("\n\n1.Go to transaction page\n");
                            printf("2.Change password\n");
                            printf("3.Your details\n");
                            printf("4.Back\n");
                            printf("5.Exit\n\n");
                            printf("Choose an option: ");
                            scanf("%d",&n);
                            //transaction page
                            //transaction page
                            //transaction page
                            if(n==1)
                            {
                                n=0;
                                while(cont=='y' || cont=='Y')
                                {
                                    system("cls");
                                    printf("\n\t Bank of spain\n");
                                    printf("\t---------------\n");
                                    printf("\nAccount holder name: %s",user.name);
                                    printf("\n\n\t1.Check balance\n");
                                    printf("\t2.Withdraw\n");
                                    printf("\t3.Transfer money\n");
                                    printf("\t4.Back\n");
                                    printf("\t5.Exit\n\n");
                                    printf("Choose an option: ");
                                    scanf("%d",&n);
                                    //check total amount
                                    //check total amount
                                    //check total amount
                                    if(n==1)
                                    {
                                        n=0;
                                        printf("Current Balance: %.2f $",user.amount);
                                    }
                                    //withdraw amount
                                    //withdraw amount
                                    //withdraw amount
                                    if(n==2)
                                    {
                                        n=0;
                                        printf("\nEnter the amount: ");
                                        scanf("%f",&addAmount);
                                        file = fopen(createFile,"r");
                                        fread(&user_1,sizeof(struct userIn),1,file);
                                        fclose(file);
                                        fp = fopen("balance","r+");
                                        fread(&usr_balance,sizeof(struct balance),1,fp);
                                        fclose(fp);

                                        if(addAmount>user.amount)
                                        {
                                            printf("Not enough balance!");
                                        }
                                        else
                                        {
                                            if(fwrite!=NULL)
                                            {
                                                printf("Do you want to confirm transaction: \n1.YES\n2.NO\n");
                                                printf("Choose an option: ");
                                                scanf("%d",&n);
                                                if(n==1)
                                                {
                                                    user.amount-=addAmount;
                                                    file = fopen(createFile,"w");
                                                    fwrite(&user,sizeof(struct userIn),1,file);
                                                    fclose(file);
                                                    system("cls");
                                                    printf("\nSuccessfully withdraw!");
                                                    usr_balance.balance-=addAmount;
                                                    fp = fopen("balance","w");

                                                    fwrite(&usr_balance,sizeof(struct balance),1,fp);
                                                    fclose(fp);
                                                }
                                                if(n==2)
                                                {
                                                    system("cls");
                                                    printf("\nTransaction successfully canceled.");
                                                }
                                            }
                                        }
                                    }
                                    //balance transfer
                                    //balance transfer
                                    //balance transfer
                                    if(n==3)
                                    {
                                        n=0;
                                        system("cls");
                                        printf("\n\t Balance transfer\n");
                                        printf("\t--------------------\n\n");
                                        printf("Enter the AC number\t: ");
                                        scanf("%s",&trans_AC_number);
                                        strcpy(createFile,trans_AC_number);
                                        file = fopen(strcat(createFile,".txt"),"r");
                                        if(file==NULL)
                                        {
                                            printf("Given Account number not registered!\n");
                                        }
                                        else
                                        {
                                            printf("Enter the amount\t: ");
                                            scanf("%f",&addAmount);
                                            fread(&user_1,sizeof(struct userIn),1,file);
                                            fclose(file);
                                            if(addAmount>user.amount)
                                            {
                                                printf("Not enough balance!\n");
                                            }
                                            else
                                            {
                                                printf("Do you want to confirm transaction: \n1.YES\n2.NO\n");
                                                printf("Choose an option: ");
                                                scanf("%d",&n);
                                                if(n==1)
                                                {
                                                    user_1.amount+=addAmount;
                                                    file = fopen(createFile,"w");

                                                    fwrite(&user_1,sizeof(struct userIn),1,file);
                                                    fclose(file);
                                                    if(fwrite!=NULL)
                                                    {
                                                        printf("Successfully transfered %.2f $ to %s.",addAmount,trans_AC_number);

                                                        strcpy(createFile,user.phoneNumber);
                                                        user.amount-=addAmount;
                                                        file = fopen(strcat(createFile,".txt"),"w");
                                                        fwrite(&user,sizeof(struct userIn),1,file);
                                                        fclose(file);
                                                    }
                                                    else
                                                    {
                                                        printf("Transaction failed!\n");
                                                    }
                                                }
                                            }
                                            if(n==2)
                                            {
                                                n=0;
                                                printf("Transaction successfully canceled\n");
                                            }
                                        }
                                    }
                                    if(n==4)
                                    {
                                        n=0;
                                        cont='y';
                                        cont='Y'; /*this function work for back option and
                                        it will also check next condition which created for [back option]*/
                                        break;
                                    }
                                    if(n==5)
                                    {
                                        exit(0);
                                    }
                                    printf("\n\n");
                                    cont_loop(n);
                                }
                            }
                            //change password
                            //change password
                            //change password
                            if(n==2)
                            {
                                n=0;
                                system("cls");
                                printf("\nHi! [%s] You can change your password!\n\n",user.name);
                                printf("Enter new password: ");
                                scanf("%s",&user.createPassword);
                                printf("ReEnter password: ");
                                scanf("%s",user.reEnterPassword);
                                if(!strcmp(user.createPassword,user.reEnterPassword))
                                {
                                    file = fopen(createFile,"w");
                                    fwrite(&user,sizeof(struct userIn),1,file);
                                    printf("\nPassword successfully changed!\n");
                                    fclose(file);
                                    exit(0);
                                }
                                else
                                {
                                    printf("\nSomething went wrong! Password didn't changed.\n");
                                    printf("Please! Try again.\n\n");
                                    cont_loop(n);
                                }
                            }
                            //account holder details
                            if(n==3)
                            {
                                n=0;
                                system("cls");
                                printf("\n\t\t Bank of spain\n");
                                printf("\t\t---------------\n\n");
                                printf("\tAC Holder\t: %s\n",user.name);
                                printf("\tAC number\t: %s\n",user.phoneNumber);
                                printf("\tGmail AC\t: %s\n\n",user.email);
                                //printf("Phone number:\t\t%");  //pending
                                cont_loop(n);
                            }
                            if(n==4)
                            {
                                n=0;
                                cont='y';
                                break;
                            }
                            if(n==5)
                            {
                                exit(0);
                            }

                            //this option which declared before 20-25 line.
                            //next 2 line work for [back option for this following block]
                            cont='y';
                            continue;
                        }
                    }
                    else
                    {
                        printf("\nWrong password! Please try again.\n\n");
                        cont_loop(n);
                    }
                }
            }
            //Bank Management
            //Bank Management
            //Bank Management
            if(n==3)
            {
                n=0;
                while(cont=='y'||cont=='Y')
                {
                    n=0;
                    system("cls");
                    printf("\n\t Welcome to Bank Management\n");
                    printf("\t---------------------------\n\n");
                    printf("1.Login into account\n");
                    printf("2.Admin pannel\n");
                    printf("3.Back\n");
                    printf("4.Exit\n\n");
                    printf("Choose an option: ");
                    scanf("%d",&n);
                    fgetc(stdin);
                    //login into management account
                    //login into management account
                    //login into management account
                    if(n==1)
                    {
                        n=0;
                        system("cls");
                        printf("\n\t Login into management account\n");
                        printf("\t--------------------------------\n\n");
                        printf("Enter username:\t\t");
                        scanf("%s",&login_userName);
                        printf("Enter password:\t\t");
                        scanf("%s",&logIn_password);

                        //file = fopen("Admin.txt","r+");
                        strcpy(createFile,login_userName);
                        file = fopen(strcat(createFile,".dat"),"r");
                        if(file==NULL)
                        {
                            printf("Account invalid!\n\n");
                            cont_loop(n);
                        }
                        else
                        {
                            fread(&user,sizeof(struct userIn),1,file);
                            fclose(file);
                            if(!strcmp(logIn_password,user.reEnterPassword))
                            {
                                while(cont=='y'||cont=='Y')
                                {
                                    system("cls");
                                    printf("\n\tAccount holder name: %s\n\n",user.name);
                                    printf("\t\t1.Client information\n");
                                    printf("\t\t2.Management info\n");
                                    printf("\t\t3.Login user AC\n");
                                    printf("\t\t4.User apply\n");
                                    printf("\t\t5.Create user AC\n");
                                    printf("\t\t6.Change your password\n");
                                    printf("\t\t7.Back\n");
                                    printf("\t\t8.Exit\n\n");
                                    printf("Choose an option: ");
                                    scanf("%d",&n);

                                    //Client information
                                    //password required to login into client AC (on password option if it's need)
                                    if(n==1)
                                    {
                                        system("cls");
                                        client_Info(file,logIn_password,createFile);
                                        cont_loop(n);
                                        continue;
                                    }
                                    //management account info
                                    //management account info
                                    if(n==2)
                                    {
                                        system("cls");
                                        printf("\n\nYou have no permission yet to see Management information!!\n\n");
                                        //management_AC_Info(file,login_userName,createFile,user.name,n);
                                        cont_loop(n);
                                        continue;
                                    }
                                    if(n==3)
                                    {
                                        printf("\n\t LogIn user AC\n");
                                        printf("\t------------------\n\n");
                                        n=0;
                                        system("cls");
                                        printf("\n\tLogin user account\n");
                                        printf("\t---------------------");
                                        printf("\nEnter your AC number\t: ");
                                        scanf("%s",&user.logIn_account);
                                        printf("Enter password\t\t: ");
                                        scanf("%s",&logIn_password);

                                        strcpy(createFile,user.logIn_account);
                                        file = fopen(strcat(createFile,".txt"),"r");
                                        if(file==NULL)
                                        {
                                            printf("Account invalid!\n\n");
                                            cont_loop(n);
                                        }
                                        else
                                        {
                                            fread(&user,sizeof(struct userIn),1,file);
                                            fclose(file);
                                            fp = fopen("balance","r+");
                                            fread(&usr_balance,sizeof(struct balance),1,fp);
                                            fclose(fp);

                                            if(!strcmp(logIn_password,user.reEnterPassword))
                                            {
                                                n=0;
                                                while(cont=='y' || cont=='Y')
                                                {
                                                    system("cls");
                                                    printf("\n\t Bank of spain\n");
                                                    printf("\t---------------\n");
                                                    printf("\nAccount holder name: %s",user.name);
                                                    printf("\n\n\t1.Check balance\n");
                                                    printf("\t2.Add money\n");
                                                    printf("\t3.Withdraw\n");
                                                    printf("\t4.Transfer money\n");
                                                    printf("\t5.Back\n");
                                                    printf("\t6.Exit\n\n");
                                                    printf("Choose an option: ");
                                                    scanf("%d",&n);

                                                    //check total amount
                                                    //check total amount
                                                    //check total amount
                                                    if(n==1)
                                                    {
                                                        n=0;
                                                        printf("Current Balance: %.2f $",user.amount);
                                                    }

                                                    //add amount
                                                    //add amount
                                                    //add amount
                                                    if(n==2)
                                                    {
                                                        n=0;
                                                        printf("\nEnter the amount: ");
                                                        scanf("%f",&addAmount);
                                                        if(fwrite!=NULL)
                                                        {
                                                            printf("Do you want to confirm transaction: \n1.YES\n2.NO\n");
                                                            printf("Choose an option: ");
                                                            scanf("%d",&n);
                                                            if(n==1)
                                                            {
                                                                user.amount+=addAmount;
                                                                file = fopen(createFile,"w");
                                                                fwrite(&user,sizeof(struct userIn),1,file);
                                                                fclose(file);
                                                                system("cls");
                                                                printf("\nSuccessfully Deposit!\n");

                                                                usr_balance.balance+=addAmount;//add amount in total
                                                                fp = fopen("balance","w");
                                                                fwrite(&usr_balance,sizeof(struct balance),1,fp);
                                                                fclose(fp);
                                                            }
                                                            if(n==2)
                                                            {
                                                                system("cls");
                                                                printf("\nTransaction successfully canceled");
                                                            }
                                                        }
                                                    }

                                                    //withdraw amount
                                                    //withdraw amount
                                                    //withdraw amount
                                                    if(n==3)
                                                    {
                                                        n=0;
                                                        printf("\nEnter the amount: ");
                                                        scanf("%f",&addAmount);
                                                        file = fopen(createFile,"r");
                                                        fread(&user_1,sizeof(struct userIn),1,file);
                                                        fclose(file);
                                                        if(addAmount>user.amount)
                                                        {
                                                            printf("Not enough balance!");
                                                        }
                                                        else
                                                        {
                                                            if(fwrite!=NULL)
                                                            {
                                                                printf("Do you want to confirm transaction: \n1.YES\n2.NO\n");
                                                                printf("Choose an option: ");
                                                                scanf("%d",&n);
                                                                if(n==1)
                                                                {
                                                                    user.amount-=addAmount;
                                                                    file = fopen(createFile,"w");
                                                                    fwrite(&user,sizeof(struct userIn),1,file);
                                                                    fclose(file);
                                                                    system("cls");
                                                                    printf("\nSuccessfully withdraw!");

                                                                    usr_balance.balance-=addAmount;
                                                                    fp = fopen("balance","w");

                                                                    fwrite(&usr_balance,sizeof(struct balance),1,fp);
                                                                    fclose(fp);
                                                                }
                                                                if(n==2)
                                                                {
                                                                    system("cls");
                                                                    printf("\nTransaction successfully canceled.");
                                                                }
                                                            }
                                                        }
                                                    }
                                                    //balance transfer
                                                    //balance transfer
                                                    //balance transfer
                                                    if(n==4)
                                                    {
                                                        n=0;
                                                        system("cls");
                                                        printf("\n\t Balance transfer\n");
                                                        printf("\t--------------------\n\n");
                                                        printf("Enter the AC number\t: ");
                                                        scanf("%s",&trans_AC_number);
                                                        strcpy(createFile,trans_AC_number);
                                                        file = fopen(strcat(createFile,".txt"),"r");
                                                        if(file==NULL)
                                                        {
                                                            printf("Given Account number not registered!\n");
                                                        }
                                                        else
                                                        {
                                                            printf("Enter the amount\t: ");
                                                            scanf("%f",&addAmount);
                                                            fread(&user_1,sizeof(struct userIn),1,file);
                                                            fclose(file);
                                                            if(addAmount>user.amount)
                                                            {
                                                                printf("Not enough balance!\n");
                                                            }
                                                            else
                                                            {
                                                                printf("Do you want to confirm transaction: \n1.YES\n2.NO\n");
                                                                printf("Choose an option: ");
                                                                scanf("%d",&n);
                                                                if(n==1)
                                                                {
                                                                    user_1.amount+=addAmount;
                                                                    file = fopen(createFile,"w");

                                                                    fwrite(&user_1,sizeof(struct userIn),1,file);
                                                                    fclose(file);
                                                                    if(fwrite!=NULL)
                                                                    {
                                                                        printf("Successfully transfered %.2f $ to %s.",addAmount,trans_AC_number);

                                                                        strcpy(createFile,user.phoneNumber);
                                                                        user.amount-=addAmount;
                                                                        file = fopen(strcat(createFile,".txt"),"w");
                                                                        fwrite(&user,sizeof(struct userIn),1,file);
                                                                        fclose(file);
                                                                    }
                                                                    else
                                                                    {
                                                                        printf("Transaction failed!\n");
                                                                    }
                                                                }
                                                            }
                                                            if(n==2)
                                                            {
                                                                n=0;
                                                                printf("Transaction successfully canceled\n");
                                                            }
                                                        }
                                                    }
                                                    if(n==5)
                                                    {
                                                        n=0;
                                                        break;
                                                    }
                                                    if(n==6)
                                                    {
                                                        exit(0);
                                                    }
                                                    printf("\n\n");
                                                    cont_loop(n);
                                                }

                                            }
                                        }
                                        continue;
                                    }
                                    if(n==4)
                                    {
                                        system("cls");
                                        strcpy(user.date,__DATE__);
                                        strcpy(createFile,user.date);
                                        file = fopen(strcat(createFile,".txt"),"r");
                                        printf("\n\t\t\t\tUser Apply  Date: %s\n",user.date);
                                        printf("--------------------------------------------------------------------------------------------------------\n\n\n");
                                        //printf("--------------------------------------------------------------------------------------------------------\n\n\n");
                                        if(file==NULL)
                                        {
                                            printf("\nNo new apply\n");
                                        }
                                        else
                                        {
                                            while(!feof(file))
                                            {
                                                //fgetc(file_pointer);
                                                ch = fgetc(file);
                                                printf("%c",ch);
                                            }
                                            fclose(file);
                                            printf("\n\n");
                                            cont_loop(n);
                                            continue;
                                        }
                                    }
                                    fgetc(stdin);
                                    if(n==5)
                                    {
                                        create_user_AC(file,createFile,n);
                                        continue;
                                    }
                                    //change management password
                                    if(n==6)
                                    {
                                        system("cls");
                                        printf("\n\t Change Management holder password\n");
                                        printf("\t-------------------------------------\n\n");
                                        printf("Enter new password: ");
                                        scanf("%s",&user.createPassword);
                                        printf("ReEnter password\t: ");
                                        scanf("%s",&user.reEnterPassword);
                                        if(!strcmp(user.createPassword,user.reEnterPassword))
                                        {
                                            file = fopen(createFile,"w");
                                            fwrite(&user,sizeof(struct userIn),1,file);
                                            fclose(file);
                                            printf("Password successfully changed!\nPlease login again.\n\n");
                                            exit(0);
                                        }
                                        else
                                        {
                                            printf("Something went wrong! Please try again.\n\n");
                                            cont_loop(n);
                                        }
                                        continue;
                                    }
                                    if(n==7)
                                    {
                                        n=0;
                                        break;
                                    }
                                    if(n==8);
                                    {
                                        exit(0);
                                    }
                                }
                            }
                            else
                            {
                                printf("Password wrong! Please try again.\n\n");
                                cont_loop(n);
                            }
                        }
                    }
                    //admin pannel
                    //admin pannel
                    //admin pannel
                    if(n==2)
                    {
                        while(cont=='y' || cont=='Y')
                        {
                            system("cls");
                            printf("\n\t Welcome to  Bank of Spain Admin pannel\n");
                            printf("\t------------------------------------------\n\n");
                            printf("1.Create new admin pannel\n");
                            printf("2.LogIn into account\n");
                            printf("3.Back\n");
                            printf("4.Exit\n\n");
                            printf("Choose an option: ");
                            scanf("%d",&n);
                            fgetc(stdin);
                            //Create new admin pannel Account
                            //Create new admin pannel Account
                            if(n==1)
                            {
                                create_Admin_AC(file,createFile);
                                cont_loop(n);
                            }
                            //LogIn into admin pannel Account
                            //LogIn into admin pannel Account
                            if(n==2)
                            {
                                system("cls");
                                printf("\n\tLogIn into Admin pannel Account\n");
                                printf("\t--------------------------------\n\n");
                                printf("Enter Username:\t");
                                scanf("%s",login_userName);
                                printf("Enter password:\t");
                                scanf("%s",logIn_password);
                                strcpy(createFile,login_userName);
                                file = fopen(strcat(createFile,".docx"),"r");
                                fread(&user,sizeof(struct userIn),1,file);
                                fclose(file);
                                if(file==NULL)
                                {
                                    printf("Account invalid!\n");
                                    cont_loop(n);//login into admin
                                }
                                else
                                {
                                    if(!strcmp(user.reEnterPassword,logIn_password))
                                    {
                                        while(cont=='y'||cont=='Y')
                                        {
                                            system("cls");
                                            printf("\n\t\t Bank of Spain Admin pannel\n");
                                            printf("\t\t-----------------------------\n\n");
                                            printf("\t1.Client information\n");
                                            printf("\t2.Recover client information\n");
                                            printf("\t3.Management information\n");
                                            printf("\t4.Recover Management Info\n");
                                            printf("\t5.Create management AC\n");
                                            printf("\t6.Total Balance\n");
                                            printf("\t7.Change your password\n");
                                            printf("\t8.Back\n");
                                            printf("\t9.Exit\n\n");
                                            printf("Choose an option: ");
                                            scanf("%d",&n);

                                            // Client information
                                            // Client information
                                            if(n==1)
                                            {
                                                n=0;
                                                system("cls");
                                                client_Info(file,logIn_password,createFile);
                                                cont_loop(n);
                                                continue;
                                            }
                                            //Recover client information
                                            //Recover client information
                                            if(n==2)
                                            {
                                                n=0;
                                                system("cls");
                                                printf("\n\t Recover client information\n");
                                                printf("\t------------------------------\n\n");
                                                printf("\t1.Name\n");
                                                printf("\t2.Password\n");
                                                printf("\t3.Gmail\n");
                                                printf("\t4.Back\n");
                                                printf("\t5.Exit\n\n");
                                                printf("Choose an option: ");
                                                scanf("%d",&n);
                                                if(n==1)
                                                {
                                                    printf("Enter AC number:\t");
                                                    scanf("%s",&user.logIn_account);
                                                    strcpy(createFile,user.logIn_account);
                                                    file = fopen(strcat(createFile,".txt"),"r");
                                                    fread(&user,sizeof(struct userIn),1,file);
                                                    fclose(file);

                                                    if(file==NULL)
                                                    {
                                                        printf("Account invalid!\n");
                                                    }
                                                    else
                                                    {
                                                        fgetc(stdin);
                                                        system("cls");
                                                        printf("\nPresent name:\t%s\n\n",user.name);
                                                        printf("New name:\t");
                                                        fgets(user.name,30,stdin);
                                                        user.name[strlen(user.name)-1] = 0;
                                                        printf("\nDo you want to submit\n");
                                                        printf("1.Yes\n2.No\n\n");
                                                        printf("Choose an option: ");
                                                        scanf("%d",&n);
                                                        switch(n)
                                                        {
                                                        case 1:
                                                        {
                                                            n=0;
                                                            file = fopen(createFile,"w");
                                                            fwrite(&user,sizeof(struct userIn),1,file);
                                                            fclose(file);
                                                            system("cls");
                                                            printf("\nName successfully changed\n\n");
                                                            cont_loop(n);
                                                        }
                                                        break;
                                                        case 2:
                                                        {
                                                            n=0;
                                                            printf("\nCanceled!\n\n");
                                                            cont_loop(n);
                                                        }
                                                        break;
                                                        }
                                                    }
                                                }
                                                if(n==2)
                                                {
                                                    printf("Enter AC number:\t");
                                                    scanf("%s",&user.logIn_account);
                                                    strcpy(createFile,user.logIn_account);
                                                    file = fopen(strcat(createFile,".txt"),"r");
                                                    fread(&user,sizeof(struct userIn),1,file);
                                                    fclose(file);
                                                    if(file==NULL)
                                                    {
                                                        printf("Account invalid!\n");
                                                    }
                                                    else
                                                    {
                                                        fgetc(stdin);
                                                        system("cls");
                                                        printf("\nPresent password:\t%s\n\n",user.reEnterPassword);
                                                        printf("New Password:\t");
                                                        scanf("%s",&user.createPassword);
                                                        printf("ReEnter Password:");
                                                        scanf("%s",&user.reEnterPassword);
                                                        if(!strcmp(user.createPassword,user.reEnterPassword))
                                                        {
                                                            printf("\nDo you want to submit\n");
                                                            printf("1.Yes\n2.No\n\n");
                                                            printf("Choose an option: ");
                                                            scanf("%d",&n);
                                                            switch(n)
                                                            {
                                                            case 1:
                                                            {
                                                                n=0;
                                                                file = fopen(createFile,"w");
                                                                fwrite(&user,sizeof(struct userIn),1,file);
                                                                fclose(file);
                                                                printf("Password successfully changed\n\n");
                                                            }
                                                            break;
                                                            case 2:
                                                            {
                                                                n=0;
                                                                printf("Canceled!\n");
                                                            }
                                                            break;
                                                            }
                                                        }
                                                    }
                                                }
                                                if(n==3)
                                                {
                                                    printf("Enter AC number:\t");
                                                    scanf("%s",&user.logIn_account);
                                                    strcpy(createFile,user.logIn_account);
                                                    file = fopen(strcat(createFile,".txt"),"r");
                                                    fread(&user,sizeof(struct userIn),1,file);
                                                    fclose(file);
                                                    if(file==NULL)
                                                    {
                                                        printf("Account invalid!\n");
                                                    }
                                                    else
                                                    {
                                                        fgetc(stdin);
                                                        system("cls");
                                                        printf("\nPresent Gmail:\t%s\n\n",user.email);
                                                        printf("New Gmail:\t");
                                                        scanf("%s",&user.email);
                                                        printf("\nDo you want to submit\n");
                                                        printf("1.Yes\n2.No\n\n");
                                                        printf("Choose an option: ");
                                                        scanf("%d",&n);
                                                        switch(n)
                                                        {
                                                        case 1:
                                                        {
                                                            n=0;
                                                            file = fopen(createFile,"w");
                                                            fwrite(&user,sizeof(struct userIn),1,file);
                                                            fclose(file);
                                                            printf("Gmail successfully changed\n\n");
                                                        }
                                                        break;
                                                        case 2:
                                                        {
                                                            n=0;
                                                            printf("Canceled!\n");
                                                        }
                                                        break;
                                                        }
                                                    }
                                                }
                                                if(n==4)
                                                {
                                                    n=0;
                                                    continue;
                                                }
                                                if(n==5)
                                                {
                                                    exit(0);
                                                }
                                            }
                                            //management information
                                            //management information
                                            if(n==3)
                                            {
                                                n=0;
                                                system("cls");
                                                management_AC_Info(file,login_userName,createFile,user.name,n);
                                                cont_loop(n);
                                                continue;
                                            }
                                            //Recover management information
                                            //Recover management information
                                            if(n==4)
                                            {
                                                n=0;
                                                system("cls");
                                                printf("\n\t Recover management information\n");
                                                printf("\t--------------------------------\n\n");
                                                printf("\t1.Name\n");
                                                printf("\t2.Password\n");
                                                printf("\t3.Gmail\n");
                                                printf("\t4.Username\n");
                                                printf("\t5.Back\n");
                                                printf("\t6.Exit\n\n");
                                                printf("Choose an option: ");
                                                scanf("%d",&n);
                                                if(n==1)
                                                {
                                                    printf("Enter Username:\t");
                                                    scanf("%s",&user.logIn_account);
                                                    strcpy(createFile,user.logIn_account);
                                                    file = fopen(strcat(createFile,".dat"),"r");
                                                    fread(&user,sizeof(struct userIn),1,file);
                                                    fclose(file);
                                                    if(file==NULL)
                                                    {
                                                        printf("Account invalid!\n");
                                                    }
                                                    else
                                                    {
                                                        fgetc(stdin);
                                                        system("cls");
                                                        printf("\nPresent name:\t%s\n\n",user.name);
                                                        printf("New name:\t");
                                                        fgets(user.name,30,stdin);
                                                        user.name[strlen(user.name)-1] = 0;
                                                        printf("\nDo you want to submit\n");
                                                        printf("1.Yes\n2.No\n\n");
                                                        printf("Choose an option: ");
                                                        scanf("%d",&n);
                                                        switch(n)
                                                        {
                                                        case 1:
                                                        {
                                                            n=0;
                                                            file = fopen(createFile,"w");
                                                            fwrite(&user,sizeof(struct userIn),1,file);
                                                            fclose(file);
                                                            printf("Name successfully changed\n\n");
                                                        }
                                                        break;
                                                        case 2:
                                                        {
                                                            n=0;
                                                            printf("Canceled!\n");
                                                        }
                                                        break;
                                                        }
                                                    }
                                                    cont_loop(n);
                                                }
                                                if(n==2)
                                                {
                                                    n=0;
                                                    printf("Enter username:\t");
                                                    scanf("%s",&user.logIn_account);
                                                    strcpy(createFile,user.logIn_account);
                                                    file = fopen(strcat(createFile,".dat"),"r");
                                                    fread(&user,sizeof(struct userIn),1,file);
                                                    fclose(file);
                                                    if(file==NULL)
                                                    {
                                                        printf("Account invalid!\n");
                                                    }
                                                    else
                                                    {
                                                        fgetc(stdin);
                                                        system("cls");
                                                        printf("\nPresent password:\t%s\n\n",user.reEnterPassword);
                                                        printf("New Password:\t");
                                                        scanf("%s",&user.createPassword);
                                                        printf("ReEnter Password:");
                                                        scanf("%s",&user.reEnterPassword);
                                                        if(!strcmp(user.createPassword,user.reEnterPassword))
                                                        {
                                                            printf("\nDo you want to submit\n");
                                                            printf("1.Yes\n2.No\n\n");
                                                            printf("Choose an option: ");
                                                            scanf("%d",&n);
                                                            switch(n)
                                                            {
                                                            case 1:
                                                            {
                                                                n=0;
                                                                file = fopen(createFile,"w");
                                                                fwrite(&user,sizeof(struct userIn),1,file);
                                                                fclose(file);
                                                                printf("Password successfully changed\n\n");
                                                            }
                                                            break;
                                                            case 2:
                                                            {
                                                                n=0;
                                                                printf("Canceled!\n");
                                                            }
                                                            break;
                                                            }
                                                        }
                                                    }
                                                }
                                                if(n==3)
                                                {
                                                    n=0;
                                                    printf("Enter username:\t");
                                                    scanf("%s",&user.logIn_account);
                                                    strcpy(createFile,user.logIn_account);
                                                    file = fopen(strcat(createFile,".dat"),"r");
                                                    fread(&user,sizeof(struct userIn),1,file);
                                                    fclose(file);

                                                    if(file==NULL)
                                                    {
                                                        printf("Account invalid!\n");
                                                    }
                                                    else
                                                    {
                                                        fgetc(stdin);
                                                        system("cls");
                                                        printf("\nPresent Gmail:\t%s\n\n",user.email);
                                                        printf("New Gmail:\t");
                                                        scanf("%s",&user.email);
                                                        printf("\nDo you want to submit\n");
                                                        printf("1.Yes\n2.No\n\n");
                                                        printf("Choose an option: ");
                                                        scanf("%d",&n);
                                                        switch(n)
                                                        {
                                                        case 1:
                                                        {
                                                            n=0;
                                                            file = fopen(createFile,"w");
                                                            fwrite(&user,sizeof(struct userIn),1,file);
                                                            fclose(file);
                                                            printf("Gmail successfully changed\n\n");
                                                        }
                                                        break;
                                                        case 2:
                                                        {
                                                            n=0;
                                                            printf("Canceled!\n");
                                                        }
                                                        break;
                                                        }
                                                    }
                                                }
                                                if(n==4)
                                                {
                                                    n=0;
                                                    printf("Enter username:\t");
                                                    scanf("%s",&user.logIn_account);
                                                    strcpy(createFile,user.logIn_account);
                                                    file = fopen(strcat(createFile,".dat"),"r");
                                                    fread(&user,sizeof(struct userIn),1,file);
                                                    fclose(file);
                                                    if(file==NULL)
                                                    {
                                                        printf("Account invalid!\n");
                                                    }
                                                    else
                                                    {
                                                        fgetc(stdin);
                                                        system("cls");
                                                        printf("\nPresent username:\t%s\n\n",user.userName);
                                                        printf("New Gmail:\t");
                                                        scanf("%s",&user.userName);
                                                        printf("\nDo you want to submit\n");
                                                        printf("1.Yes\n2.No\n\n");
                                                        printf("Choose an option: ");
                                                        scanf("%d",&n);
                                                        switch(n)
                                                        {
                                                        case 1:
                                                        {
                                                            n=0;
                                                            file = fopen(createFile,"w");
                                                            fwrite(&user,sizeof(struct userIn),1,file);
                                                            fclose(file);
                                                            printf("Username successfully changed\n\n");
                                                        }
                                                        break;
                                                        case 2:
                                                        {
                                                            n=0;
                                                            printf("Canceled!\n");
                                                        }
                                                        break;
                                                        }
                                                    }
                                                }
                                                if(n==5)//Back from recover management page
                                                {
                                                    n=0;
                                                    continue;
                                                }
                                            }//end Recover management information page

                                            //create management AC
                                            if(n==5)
                                            {
                                                system("cls");
                                                create_management_AC(file,createFile);
                                                cont_loop(n);
                                            }
                                            if(n==6)
                                            {
                                                file = fopen("balance","r");
                                                fread(&usr_balance,sizeof(struct balance),1,file);
                                                fclose(file);
                                                printf("\n\nTotal balance: %.2f\n",usr_balance.balance);
                                                cont_loop(n);

                                            }
                                            if(n==7)
                                            {
                                                system("cls");
                                                printf("\n\t Change Admin password\n");
                                                printf("\t-------------------------------------\n\n");
                                                printf("Enter new password: ");
                                                scanf("%s",&user.createPassword);
                                                printf("ReEnter password\t: ");
                                                scanf("%s",&user.reEnterPassword);
                                                if(!strcmp(user.createPassword,user.reEnterPassword))
                                                {
                                                    file = fopen(createFile,"r+");
                                                    fwrite(&user,sizeof(struct userIn),1,file);
                                                    fclose(file);
                                                    printf("Password successfully changed!\nPlease login again.\n\n");
                                                    exit(0);
                                                }
                                                else
                                                {
                                                    printf("Something went wrong! Please try again.\n\n");
                                                    cont_loop(n);
                                                }
                                                continue;
                                            }
                                            if(n==8)//back from recover management into Admin pannel
                                            {
                                                n=0;
                                                break;
                                            }
                                            if(n==9)
                                            {
                                                exit(0);
                                            }
                                        }
                                    }
                                    else
                                    {
                                        printf("\nPassword wrong! Please try again.\n");
                                        cont_loop(n);//login into admin
                                    }
                                }
                            }
                            if(n==3)//Back from Admin pannel into management page
                            {
                                n=0;
                                break;
                            }
                            if(n==4)
                            {
                                n=0;
                                exit(0);
                            }
                        }
                        //Back option for admin pannel
                        n=0;
                        cont='y';
                        cont='Y';
                        continue;
                    }
                    if(n==3)//Back from management page in main menu
                    {
                        n=0;
                        break;
                    }
                    if(n==4)
                    {
                        exit(0);
                    }
                    //Back from management login page
                    cont='y';
                    cont='Y';
                    continue;
                }
            }
            //Exit from main page
            if(n==4)
            {
                n=0;
                exit(0);
            }
            //next 3 lines work for[back from user login page]
            cont='y';
            system("cls");
            continue;
        }
    }
    return 0;
}
