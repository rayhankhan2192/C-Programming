#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
};
int main()
{
    int n;
    struct userIn user,user_1;
    FILE *file;
    char createFile[30];//uses for create new file
    char logIn_password[30];
    char login_userName[30];//uses for admin login
    char trans_AC_number[30];//uses for money tansfer
    float addAmount;
    char cont = 'y';

    while(cont=='y' || cont=='Y')
    {
        printf("\n\t Welcome to BANK OF SPAIN\n");
        printf("\t--------------------------\n\n");

        printf("1.Create new account\n");
        printf("2.Login into account\n");
        printf("3.Admin pannel\n");
        printf("4.Exit\n\n");
        printf("Choose an option: ");
        scanf("%d",&n);
        fgetc(stdin);
        if(n==1)
        {
            n=0;
            system("cls");
            printf("\n\t\tCreate new account\n");
            printf("\t\t--------------------\n");
            printf("\nEnter your name:\t");
            fgets(user.name,30,stdin);
            user.name[strlen(user.name)-1] = 0;
            printf("Enter phone number:\t");
            scanf("%s",&user.phoneNumber);
            printf("Enter gmail:\t");
            scanf("%s",&user.email);
            user.amount=0; //it'll delete previous account's total amount

            strcpy(createFile,user.phoneNumber);
            file = fopen(strcat(createFile,".txt"),"r");
            fclose(file);
            if(file!=NULL)
            {
                printf("Account registered before!\n");
            }
            else
            {
                printf("Create password:\t");
                scanf("%s",&user.createPassword);
                printf("ReEnter password:\t");
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
                        printf("Please! Try again\n\n");
                    }
                }
                else
                {
                    printf("Password doesn't matched!\n\n");
                }
            }
        }
        //logIn account page
        //logIn account page
        //logIn account page
        //logIn account page
        if(n==2)
        {
            n=0;
            system("cls");
            printf("\n\tLogin into account\n");
            printf("\t---------------------");
            printf("\nEnter your AC number: ");
            scanf("%s",&user.logIn_account);
            printf("Enter password: ");
            scanf("%s",&logIn_password);

            strcpy(createFile,user.logIn_account);
            file = fopen(strcat(createFile,".txt"),"r");
            if(file==NULL)
            {
                printf("Account invalid!\n");
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
                        printf("4.Exit\n\n");
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
                                printf("\t2.Add money\n");
                                printf("\t3.Withdraw\n");
                                printf("\t4.Transfer money\n");
                                printf("\t5.Exit\n\n");
                                printf("Choose an option: ");
                                scanf("%d",&n);

                                //check total amount
                                //check total amount
                                //check total amount
                                if(n==1)
                                {
                                    n=0;
                                    file = fopen(createFile,"r");
                                    fread(&user,sizeof(struct userIn),1,file);
                                    fclose(file);
                                    printf("Current Balance: %.2f $",user.amount);
                                }

                                //add amount
                                //add amount
                                //add amount
                                if(n==2)
                                {
                                    n=0;
                                    printf("Enter the amount: ");
                                    scanf("%f",&addAmount);
                                    user.amount+=addAmount;
                                    file = fopen(createFile,"w");
                                    fwrite(&user,sizeof(struct userIn),1,file);
                                    fclose(file);
                                    if(fwrite!=NULL)
                                    {
                                        printf("Successfully deposit!\n");
                                    }
                                }

                                //withdraw amount
                                //withdraw amount
                                //withdraw amount
                                if(n==3)
                                {
                                    n=0;
                                    printf("Enter the amount: ");
                                    scanf("%f",&addAmount);
                                    user.amount-=addAmount;
                                    file = fopen(createFile,"w");
                                    fwrite(&user,sizeof(struct userIn),1,file);
                                    fclose(file);
                                    if(fwrite!=NULL)
                                    {
                                        printf("Successfully withdraw!\n");
                                    }
                                }

                                //balance transfer
                                //balance transfer
                                //balance transfer
                                if(n==4)
                                {
                                    n=0;
                                    printf("\n\t Balance transfer\n");
                                    printf("\t--------------------\n\n");
                                    printf("Enter the AC number: ");
                                    scanf("%s",&trans_AC_number);
                                    printf("Enter the amount to transfer: ");
                                    scanf("%f",&addAmount);
                                    printf("Do you want to confirm transaction: \n1.YES\n2.NO\n");
                                    printf("Choose an option: ");
                                    scanf("%d",&n);
                                    if(n==1)
                                    {
                                        n=0;
                                        strcpy(createFile,trans_AC_number);
                                        file = fopen(strcat(createFile,".txt"),"r");
                                        if(file==NULL)
                                        {
                                            printf("Given Account number not registered!\n");
                                        }
                                        else
                                        {
                                            fread(&user_1,sizeof(struct userIn),1,file);
                                            fclose(file);
                                            if(addAmount>user.amount)
                                            {
                                                printf("Not enough balance!\n");
                                            }
                                            else
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
                                    }
                                    if(n==2)
                                    {
                                        n=0;
                                        printf("Transaction successfully canceled\n");
                                    }
                                }
                                if(n==5)
                                {
                                    n=0;
                                }
                                printf("\n\nDo you want to continue[y/n]: ");
                                scanf("%s",&cont);
                            }
                        }

                        //change password
                        //change password
                        //change password
                        if(n==2)
                        {
                            {
                                n=0;
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
                                    printf("Please! Try again.\n");
                                }
                            }
                            printf("\n\nDo you want to continue[y/n]: ");
                            scanf("%s",&cont);
                        }
                        //account holder details
                        if(n==3)
                        {
                            {
                                n=0;
                                system("cls");
                                printf("\n\t Bank of spain\n");
                                printf("\t---------------\n\n");
                                printf("Account holder name:\t%s\n",user.name);
                                printf("Account number:\t\t%s\n",user.phoneNumber);
                                printf("Gmail account:\t\t%s\n",user.email);
                                //printf("Phone number:\t\t%");  //pending
                            }
                            printf("\n\nDo you want to continue[y/n]: ");
                            scanf("%s",&cont);
                        }
                        if(n==4)
                        {
                            {
                                printf("\n\nDo you want to continue[y/n]: ");
                                scanf("%s",&cont);
                            }
                        }
                    }
                }
                else
                {
                    printf("\nWrong password! Please try again.\n");
                }
            }
        }

        //Admin pannel
        //Admin pannel
        //Admin pannel
        if(n==3)
        {
            n=0;
            while(cont=='y'||cont=='Y')
            {
                n=0;
                system("cls");
                printf("\n\t Welcome to Admin pannel\n");
                printf("\t---------------------------\n\n");
                printf("1.Create new account\n");
                printf("2.Login into account\n");
                printf("3.Management control\n");
                printf("4.Change password\n");
                printf("5.Exit\n\n");
                printf("Choose an option: ");
                scanf("%d",&n);
                fgetc(stdin);
                //create new admin account
                //create new admin account
                //create new admin account
                if(n==1)
                {
                    system("cls");
                    printf("\n\t Create new admin pannel\n");
                    printf("\t--------------------------\n\n");
                    printf("Enter name:\t\t");
                    fgets(user.name,30,stdin);
                    user.name[strlen(user.name)-1] = 0;
                    printf("Enter phone number:\t\t");
                    scanf("%s",&user.phoneNumber);
                    printf("Enter email:\t\t");
                    scanf("%s",&user.email);
                    printf("Enter username:\t\t");
                    scanf("%s",&user.userName);
                    strcpy(createFile,user.userName);
                    file = fopen(strcat(createFile,".dat"),"r");
                    fclose(file);
                    if(file!=NULL)
                    {
                        printf("Account registered before!\n");
                    }
                    else
                    {
                        printf("Create password:\t");
                        scanf("%s",&user.createPassword);
                        printf("ReEnter password:\t");
                        scanf("%s",&user.reEnterPassword);
                        if(!strcmp(user.createPassword,user.reEnterPassword))
                        {
                            strcpy(createFile,user.userName);
                            file = fopen(strcat(createFile,".dat"),"w");
                            fwrite(&user,sizeof(struct userIn),1,file);
                            fclose(file);
                            if(fprintf!=NULL)
                            {
                                printf("\nAccount created successfully!\n");
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
                //login into admin account
                //login into admin account
                //login into admin account
                if(n==2)
                {
                    n=0;
                    system("cls");
                    printf("\n\t Login into Admin pannel\n");
                    printf("\t--------------------------\n\n");
                    printf("Enter username:\t\t");
                    scanf("%s",&login_userName);
                    printf("Enter password:\t\t");
                    scanf("%s",&logIn_password);

                    //file = fopen("Admin.txt","r+");
                    strcpy(createFile,login_userName);
                    file = fopen(strcat(createFile,".dat"),"r");
                    if(file==NULL)
                    {
                        printf("Account invalid!\n");
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
                                printf("\nAccount holder name: %s\n\n",user.name);
                                printf("1.Client information\n");
                                printf("2.Admin information\n");
                                printf("Choose an option: ");
                                scanf("%d",&n);
                                //Client information
                                //Client information
                                //Client information
                                //password required to login into client AC
                                if(n==1)
                                {
                                    system("cls");
                                    printf("\n\t Client information\n");
                                    printf("\t---------------------\n\n");
                                    printf("Enter AC number:\t");
                                    scanf("%s",&user.logIn_account);
                                    printf("Enter password:\t\t");
                                    scanf("%s",&logIn_password);
                                    strcpy(createFile,user.logIn_account);
                                    file = fopen(strcat(createFile,".txt"),"r");
                                    if(file==NULL)
                                    {
                                        printf("Account invalid!\n");
                                    }
                                    else
                                    {
                                        fread(&user,sizeof(struct userIn),1,file);
                                        fclose(file);
                                        if(!strcmp(user.createPassword,logIn_password))
                                        {
                                            system("cls");
                                            printf("\nAccount name:\t\t%s\n",user.name);
                                            printf("Account number:\t\t%s\n",user.phoneNumber);
                                            printf("Gmail account:\t\t%s\n",user.email);
                                            printf("\nTotal balance:\t\t%.2f\n",user.amount);
                                        }
                                    }
                                }

                                //admin info
                                //admin info
                                if(n==2)
                                {
                                    system("cls");
                                    printf("\n\t Admin Information\n");
                                    printf("\t---------------------\n\n");
                                    printf("Enter username: ");
                                    scanf("%s",&login_userName);
                                    printf("Enter password: ");
                                    scanf("%s",&logIn_password);
                                    strcpy(createFile,login_userName);
                                    file = fopen(strcat(createFile,".dat"),"r");
                                    fread(&user,sizeof(struct userIn),1,file);
                                    fclose(file);
                                    if(file==NULL)
                                    {
                                        printf("Account invalid!\n");
                                    }
                                    else
                                    {
                                        system("cls");
                                        printf("\n\t Admin information\n");
                                        printf("\t------------------\n\n");
                                        printf("Account name\t: %s\n",user.name);
                                        printf("Phone NO\t: %s\n",user.phoneNumber);
                                        printf("Email\t\t: %s\n",user.email);
                                        printf("User name\t: %s\n",user.userName);
                                    }
                                }
                                printf("\n\nDo you want to continue[y/n]: ");
                                scanf("%s",&cont);
                            }
                        }

                        else
                        {
                            printf("\nPassword wrong! Please try again.\n");
                        }
                    }
                }

                //management system
                //management system
                //management system
                if(n==3)
                {
                    system("cls");
                    printf("\n\t Welcome to  Bank of Spain management system\n");
                    printf("\t------------------------------------------------\n\n");
                    printf("1.Add new management controller\n2.LogIn into account\n\n");
                    printf("Choose an option: ");
                    scanf("%d",&n);
                    fgetc(stdin);
                    //create new management account
                    //create new management account
                    if(n==1)
                    {
                        system("cls");
                        printf("\n\t Create Management system Account\n");
                        printf("\t------------------------------------\n\n");
                        printf("Enter name:\t");
                        fgets(user.name,30,stdin);
                        user.name[strlen(user.name)-1] = 0;
                        printf("Enter phone NO:\t");
                        scanf("%s",&user.phoneNumber);

                        printf("Enter Mail:\t");
                        scanf("%s",&user.email);
                        printf("Create username:\t");
                        scanf("%s",&user.userName);
                        strcpy(createFile,user.userName);
                        file = fopen(strcat(createFile,".docx"),"r");
                        fclose(file);
                        if(file!=NULL)
                        {
                            printf("Username taken before! Try again\n");
                        }
                        else
                        {
                            printf("Create password:\t");
                            scanf("%s",&user.createPassword);
                            printf("ReEnter password:\t");
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

                    //LogIn into Management Control
                    //LogIn into Management Control
                    if(n==2)
                    {
                        system("cls");
                        printf("\n\tLogIn into Management Control\n");
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
                        }
                        else
                        {
                            if(!strcmp(user.reEnterPassword,logIn_password))
                            {
                                system("cls");
                                printf("\n\t\t Bank of Spain\n");
                                printf("\t\t----------------\n\n");
                                printf("\t1.Client information\n");
                                printf("\t2.Recover client information\n");
                                printf("\t3.Admin information\n");
                                printf("\t4.Recover Admin Info\n");
                                printf("\t5.Exit\n\n");
                                printf("Choose an option: ");
                                scanf("%d",&n);

                                switch(n)
                                {
                                // Client information
                                // Client information
                                case 1:
                                {
                                    system("cls");
                                    printf("\n\t Client information\n");
                                    printf("\t---------------------\n\n");
                                    printf("Enter AC number:\t");
                                    scanf("%s",&user.logIn_account);

                                    strcpy(createFile,user.logIn_account);
                                    file = fopen(strcat(createFile,".txt"),"r");
                                    if(file==NULL)
                                    {
                                        printf("Account invalid!\n");
                                    }
                                    else
                                    {
                                        fread(&user,sizeof(struct userIn),1,file);
                                        fclose(file);
                                        system("cls");
                                        printf("\nAccount name:\t\t%s\n",user.name);
                                        printf("Account number:\t\t%s\n",user.phoneNumber);
                                        printf("AC password:\t\t%s\n",user.reEnterPassword);
                                        printf("Gmail account:\t\t%s\n",user.email);
                                        printf("\nTotal balance:\t\t%.2f\n",user.amount);
                                    }
                                }
                                break;

                                //Recover client information
                                //Recover client information
                                case 2:
                                {
                                    system("cls");
                                    printf("\n\t Recover client information\n");
                                    printf("\t------------------------------\n\n");
                                    printf("1.Name\n");
                                    printf("2.Password\n");
                                    printf("3.Gmail\n");
                                    printf("4.Exit\n\n");
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
                                            file = fopen(createFile,"w");
                                            fwrite(&user,sizeof(struct userIn),1,file);
                                            fclose(file);

                                            printf("\nDo you want to submit\n");
                                            printf("1.Yes\n2.No\n\n");
                                            printf("Choose an option: ");
                                            scanf("%d",&n);
                                            switch(n)
                                            {
                                            case 1:
                                            {
                                                printf("Name successfully changed\n\n");
                                            }
                                            break;
                                            case 2:
                                            {
                                                printf("Canceled!\n");
                                            }

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
                                                file = fopen(createFile,"w");
                                                fwrite(&user,sizeof(struct userIn),1,file);
                                                fclose(file);

                                                printf("\nDo you want to submit\n");
                                                printf("1.Yes\n2.No\n\n");
                                                printf("Choose an option: ");
                                                scanf("%d",&n);
                                                switch(n)
                                                {
                                                case 1:
                                                {
                                                    printf("Password successfully changed\n\n");
                                                }
                                                break;
                                                case 2:
                                                {
                                                    printf("Canceled!\n");
                                                }

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
                                            file = fopen(createFile,"w");
                                            fwrite(&user,sizeof(struct userIn),1,file);
                                            fclose(file);

                                            printf("\nDo you want to submit\n");
                                            printf("1.Yes\n2.No\n\n");
                                            printf("Choose an option: ");
                                            scanf("%d",&n);
                                            switch(n)
                                            {
                                            case 1:
                                            {
                                                printf("Gmail successfully changed\n\n");
                                            }
                                            break;
                                            case 2:
                                            {
                                                printf("Canceled!\n");
                                            }

                                            }
                                        }
                                    }
                                }
                                break;

                                //Admin information
                                //Admin information
                                case 3:
                                {
                                    system("cls");
                                    printf("\n\t Admin information\n");
                                    printf("\t---------------------\n\n");
                                    printf("Enter username:\t");
                                    scanf("%s",&user.logIn_account);

                                    strcpy(createFile,user.logIn_account);
                                    file = fopen(strcat(createFile,".dat"),"r");
                                    if(file==NULL)
                                    {
                                        printf("Account invalid!\n");
                                    }
                                    else
                                    {
                                        fread(&user,sizeof(struct userIn),1,file);
                                        fclose(file);
                                        system("cls");
                                        printf("\nAdmin name:\t\t%s\n",user.name);
                                        printf("Phone number:\t\t%s\n",user.phoneNumber);
                                        printf("AC password:\t\t%s\n",user.reEnterPassword);
                                        printf("Gmail account:\t\t%s\n",user.email);
                                    }
                                }
                                break;

                                //Recover Admin information
                                //Recover Admin information
                                case 4:
                                {
                                    system("cls");
                                    printf("\n\t Recover Admin information\n");
                                    printf("\t------------------------------\n\n");
                                    printf("1.Name\n");
                                    printf("2.Password\n");
                                    printf("3.Gmail\n");
                                    printf("4.Username\n");
                                    printf("5.Exit\n\n");
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
                                            file = fopen(createFile,"w");
                                            fwrite(&user,sizeof(struct userIn),1,file);
                                            fclose(file);

                                            printf("\nDo you want to submit\n");
                                            printf("1.Yes\n2.No\n\n");
                                            printf("Choose an option: ");
                                            scanf("%d",&n);
                                            switch(n)
                                            {
                                            case 1:
                                            {
                                                printf("Name successfully changed\n\n");
                                            }
                                            break;
                                            case 2:
                                            {
                                                printf("Canceled!\n");
                                            }

                                            }
                                        }
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
                                                file = fopen(createFile,"w");
                                                fwrite(&user,sizeof(struct userIn),1,file);
                                                fclose(file);

                                                printf("\nDo you want to submit\n");
                                                printf("1.Yes\n2.No\n\n");
                                                printf("Choose an option: ");
                                                scanf("%d",&n);
                                                switch(n)
                                                {
                                                case 1:
                                                {
                                                    printf("Password successfully changed\n\n");
                                                }

                                                break;
                                                case 2:
                                                {
                                                    printf("Canceled!\n");
                                                }
                                                break;
                                                }
                                            }
                                        }
                                    }
                                    if(n==3)
                                    {
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
                                            file = fopen(createFile,"w");
                                            fwrite(&user,sizeof(struct userIn),1,file);
                                            fclose(file);

                                            printf("\nDo you want to submit\n");
                                            printf("1.Yes\n2.No\n\n");
                                            printf("Choose an option: ");
                                            scanf("%d",&n);
                                            switch(n)
                                            {
                                            case 1:
                                            {
                                                printf("Gmail successfully changed\n\n");
                                            }
                                            break;
                                            case 2:
                                            {
                                                printf("Canceled!\n");
                                            }

                                            }
                                        }
                                    }
                                    if(n==4)
                                    {
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
                                            file = fopen(createFile,"w");
                                            fwrite(&user,sizeof(struct userIn),1,file);
                                            fclose(file);

                                            printf("\nDo you want to submit\n");
                                            printf("1.Yes\n2.No\n\n");
                                            printf("Choose an option: ");
                                            scanf("%d",&n);
                                            switch(n)
                                            {
                                            case 1:
                                            {
                                                printf("Username successfully changed\n\n");
                                            }
                                            break;
                                            case 2:
                                            {
                                                printf("Canceled!\n");
                                            }

                                            }
                                        }
                                    }
                                }//end Recover Admin information page
                                }
                            }
                            else
                            {
                                printf("\nPassword wrong! Please try again.\n");
                            }
                        }
                    }
                }
                //change admin password
                //change admin password
                //change admin password
                if(n==4)
                {
                    system("cls");
                    printf("\n\t Change admin password\n");
                    printf("\t------------------------\n\n");
                    printf("Enter username:\t");
                    scanf("%s",&login_userName);
                    printf("Enter password:\t");
                    scanf("%s",&logIn_password);
                    strcpy(createFile,login_userName);
                    file = fopen(strcat(createFile,".dat"),"r");
                    fread(&user,sizeof(struct userIn),1,file);
                    fclose(file);
                    if(file==NULL)
                    {
                        printf("Account invalid!\n");
                    }
                    else
                    {
                        if(!strcmp(logIn_password,user.reEnterPassword))
                        {
                            printf("Admin name: %s\n\n",user.name);
                            printf("Enter new password:\t");
                            scanf("%s",&user.createPassword);
                            printf("ReEnter password:\t");
                            scanf("%s",&user.reEnterPassword);
                            if(!strcmp(user.createPassword,user.reEnterPassword))
                            {
                                file = fopen(createFile,"w");
                                fwrite(&user,sizeof(struct userIn),1,file);
                                fclose(file);
                                printf("Password successfully changed!\n");
                            }
                            else
                            {
                                printf("Something went wrong! Please try again.\n");
                            }
                        }
                        else
                        {
                            printf("Wrong password! Try again.\n");
                        }
                    }
                }
                printf("\n\nGo to admin pannel[y/n]: ");
                scanf("%s",&cont);
            }
        }

        //Exit from main page
        if(n==4)
        {
            n=0;
            exit(0);
        }
        printf("\n\nGoto main menu[y/n]: ");
        scanf("%s",&cont);
        system("cls");
    }
}
