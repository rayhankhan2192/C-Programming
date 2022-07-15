#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct items
{
    char item[20];
    int qty;
    float price;
};
struct orders
{
    char customer[50];
    char date[50];
    int numberOfItems;
    struct items itm[50];
};

// function to generate bills
void generateBillHeader(char name[30], char date[30])
{
    printf("\n\n");
    printf("\t      Green Restaurant\n");
    printf("\t    --------------------\n");
    printf("Date:%s \n", date);
    printf("Invoice To: %s", name);
    printf("\n");
    printf("----------------------------------------\n");
    printf("Item\t\t");
    printf("Qty*price\t");
    printf("Total");
    printf("\n----------------------------------------");
    printf("\n\n");
}
void generateBillBody(char item[30], int qty, float price)
{
    printf("%s\t\t", item);
    printf("%d*%.0f\t\t", qty, price);
    printf("%.2f", qty * price);
    printf("\n");
}

void generateBillFooter(float total)
{
    printf("\n");
    float dis = 0.05 * total;
    float netTotal = total - dis;
    float cgst = 0.05 * netTotal, grandTotal = netTotal + 2 * cgst;
    printf("----------------------------------------\n");
    printf("Sub Total\t\t\t%.2f", total);
    printf("\nDiscount @5%s\t\t\t%.2f", "%", dis);
    printf("\n\t\t\t\t------");
    printf("\nNet Total\t\t\t%.2f", netTotal);
    printf("\nCGST @5%s\t\t\t%.2f", "%", cgst);
    printf("\nSGST @5%s\t\t\t%.2f", "%", cgst);
    printf("\n---------------------------------------");
    printf("\nGrand Total\t\t\t%.2f", grandTotal);
    printf("\n---------------------------------------\n");
}


int main()
{
    char name[30];
    int operation, n, i;
    struct orders ord;
    struct orders order;
    char saveBill = 'y',continues='y';
    FILE *file;
    while(continues=='y')
    {
        int invoiceFound = 0;
        float total=0;

        printf("\n\t============Green Restaurant============");
        printf("\n\nPlease select your prepared operation: ");
        printf("\n\n1.Generate Invoice");
        printf("\n2.Show all Invoice");
        printf("\n3.Search Invoice");
        printf("\n4.Exit");

        printf("\n\nYour Choice: ");
        scanf("%d", &operation);
        fgetc(stdin);

        switch (operation)
        {
        case 1:
            //system("cls");
            printf("\nEnter the name of customer : ");
            fgets(ord.customer, 50, stdin);
            ord.customer[strlen(ord.customer) - 1] = 0;
            strcpy(ord.date, __DATE__);
            printf("Enter the number of item: \t");
            scanf("%d", &n);
            ord.numberOfItems = n;
            for (i = 0; i < n; i++)
            {
                fgetc(stdin);
                printf("\nItem-%d: \t\t\t", i + 1);
                fgets(ord.itm[i].item, 20, stdin);
                ord.itm[i].item[strlen(ord.itm[i].item) - 1] = 0;

                printf("Enter the quantity: \t\t");
                scanf("%d", &ord.itm[i].qty);

                printf("Enter unit price: \t\t");
                scanf("%f", &ord.itm[i].price);
                total += ord.itm[i].qty * ord.itm[i].price;

                printf("\n");
            }
            generateBillHeader(ord.customer, ord.date);
            for (i = 0; i < ord.numberOfItems; i++)
            {
                generateBillBody(ord.itm[i].item, ord.itm[i].qty, ord.itm[i].price);
            }
            generateBillFooter(total);

            printf("\nDo you want to save the Invoice[y/n] = ");
            scanf("%s",&saveBill);
            printf("\n");
            if(saveBill=='y')
            {
                file = fopen("RestaurantBill.txt","a+");
                fwrite(&ord,sizeof(struct orders),1,file);
                if(fwrite!=0)
                {
                    printf("Save Successfully\n");
                }
                else
                {
                    printf("Save error!\n");
                }
                fclose(file);
            }
            break;

        case 2:
            //system("cls");
            file = fopen("RestaurantBill.txt","r+");
            printf("\n\t~~~~Your previous Invoice~~~~");
            while(fread(&order,sizeof(struct orders),1,file));
            {
                generateBillHeader(order.customer,order.date);
                for(i=0; i<order.numberOfItems; i++)
                {
                    generateBillBody(order.itm[i].item,order.itm[i].qty,order.itm[i].price);
                    total+=order.itm[i].qty*order.itm[i].price;
                }
                generateBillFooter(total);
            }
            fclose(file);
            break;

        case 3:
            //system("cls");
            printf("\nEnter the name of Customer: ");
            //fgetc(stdin);
            fgets(name,50,stdin);
            name[strlen(name)-1]=0;


            file = fopen("RestaurantBill.txt","r+");
            printf("\n\t~~~~Invoice of %s~~~~",name);
            while(fread(&order,sizeof(struct orders),1,file));
            {
                if(!strcmp(order.customer,name))
                {
                    generateBillHeader(order.customer,order.date);
                    for(i=0; i<order.numberOfItems; i++)
                    {
                        generateBillBody(order.itm[i].item,order.itm[i].qty,order.itm[i].price);
                        total+=order.itm[i].qty*order.itm[i].price;
                    }
                    generateBillFooter(total);
                    invoiceFound = 1;
                }
            }
            if(!invoiceFound)
            {
                printf("\n\nSorry! Invoice for %s doesn't match.\n\n",name);
            }
            fclose(file);
            break;
        case 4:
            //system("cls");
            printf("\n\t\t~~~~BYE BYE~~~~\n\n");

        default:
            printf("\nSorry! Invalid Option\n");
            exit(0);
            break;
        }
        printf("\nDo you want to continue[y/n]: ");
        scanf("%s",&continues);
        printf("\n");
    }
    printf("\n\t\t~~~~BYE BYE~~~~\n\n");

    return 0;
}
