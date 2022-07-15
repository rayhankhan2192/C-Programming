#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

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
    int numberOfItem;
    struct items itm[50];
};
// Function for billing
// Bill header

void billheader(char name[50], char date[50])
{
    printf("\n\n");
    printf("\t\tYellow Garden");
    printf("\n\t      -----------------");

    // get date and time both with the function
    /*
    time_t rawtime;
    struct tm*timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    printf("\nTime: %s",asctime(timeinfo));
    */

    time_t t = time(NULL);
    char *time_str = ctime(&t);
    time_str[strlen(time_str) - 1] = '\0';
    printf("\nTime: %s", time_str);

    // printf("\nDate: %s\n", date);
    printf("\nInvoice to: %s", name);
    printf("\n----------------------------------------");
    printf("\nItems");
    printf("\t\tQty*price");
    printf("\tTotal");
    printf("\n----------------------------------------");
    printf("\n\n");
}

// bill body (bill calculate here & print)
void billbody(char item[30], int qty, float price)
{
    printf("%s", item);
    printf("\t\t%d*%.0f", qty, price);
    printf("\t\t%.2f", qty * price);
    printf("\n");
}

// bill final count
void billfooter(float total)
{
    printf("\n");
    float discount = 0.05 * total;
    float NetTotal = total - discount;
    float vat = 0.1 * NetTotal, totalAmount = NetTotal + 1 * vat;
    ;
    // totalAmount = NetTotal + vat;
    printf("----------------------------------------\n");
    printf("Sub Total\t\t\t%.2f", total);
    printf("\nDiscount @5%s\t\t\t%.2f", "%", discount);
    printf("\n----------------------------------------");
    printf("\nNet Total \t\t\t%.2f", NetTotal);
    printf("\nVat @10%s \t\t\t%.2f", "%", vat);
    printf("\n----------------------------------------");
    printf("\nTotal Amount\t\t\t%.2f", totalAmount);
    printf("\n----------------------------------------\n");
}

int main()
{
    int operators, n, i;
    struct orders ord;
    struct orders order;
    FILE *file;
    char saveBill = 'y';
    char continues = 'y';

    while (continues == 'y' || continues == 'Y')
    {
        float total = 0;
        char name[50];

        printf("\n\t\t==========Yellow Restaurant==========");
        printf("\n\nSelect your prepared options: ");
        printf("\n\n1.Generate Invoice");
        printf("\n2.Show All Invoice");
        printf("\n3.Search Invoice");
        printf("\n4.Exit\n");

        printf("\nChoose an option: ");
        scanf("%d", &operators);
        fgetc(stdin);
        switch (operators)
        {
        case 1:
            // system("cls");
            printf("\nEnter the name of Customer: ");
            fgets(ord.customer, 50, stdin);
            ord.customer[strlen(ord.customer) - 1] = 0;
            strcpy(ord.date, __DATE__);
            printf("\nEnter the number of items: \t");
            scanf("%d", &n);
            ord.numberOfItem = n;
            for (i = 0; i < n; i++)
            {
                fgetc(stdin);
                printf("\nEnter name of Item-%d: \t\t", i + 1);
                fgets(ord.itm[i].item, 20, stdin);
                ord.itm[i].item[strlen(ord.itm[i].item) - 1] = 0;
                printf("Enter the Quantity: \t\t");
                scanf("%d", &ord.itm[i].qty);
                printf("Enter the unit price: \t\t");
                scanf("%f", &ord.itm[i].price);
                total += ord.itm[i].qty * ord.itm[i].price;
                printf("\n");
            }
            billheader(ord.customer, ord.date);
            for (i = 0; i < ord.numberOfItem; i++)
            {
                billbody(ord.itm[i].item, ord.itm[i].qty, ord.itm[i].price);
            }
            billfooter(total);

            printf("Do you want to save the Invoice[y/n]: ");
            scanf("%s", &saveBill);
            if (saveBill == 'y' || saveBill == 'Y')
            {
                file = fopen("Customer-Info-2.txt", "a+");
                fwrite(&ord, sizeof(struct orders), 1, file);
                if (fwrite != 0)
                {
                    printf("Save Successfully");
                }
                else
                {
                    printf("Save Error!");
                }
            }
            fclose(file);
            break;

        case 2:
            // system("cls");
            file = fopen("Customer-Info-2.txt", "r+");
            printf("\n\t      Your previous Invoices");
            printf("\n\t     ------------------------");
            while (fread(&order, sizeof(struct orders), 1, file))
                ;
            {
                billheader(order.customer, order.date);
                for (i = 0; i < order.numberOfItem; i++)
                {
                    billbody(order.itm[i].item, order.itm[i].qty, order.itm[i].price);
                    total += order.itm[i].qty * order.itm[i].price;
                }
                billfooter(total);
            }
            fclose(file);
            break;

        case 3:
            // system("cls");
            printf("Enter the name of customer: ");
            fgets(name, 50, stdin);
            name[strlen(name) - 1] = 0;
            printf("\n\t     Invoice of %s", name);
            printf("\n\t    ------------------------");
            file = fopen("Customer-Info-2.txt", "r+");
            while (fread(&order, sizeof(struct orders), 1, file))
                ;
            {
                if (!strcmp(order.customer, name))
                {

                    billheader(order.customer, order.date);
                    for (i = 0; i < order.numberOfItem; i++)
                    {
                        billbody(order.itm[i].item, order.itm[i].qty, order.itm[i].price);
                        total += order.itm[i].qty * order.itm[i].price;
                    }
                    billfooter(total);
                }
                else
                {
                    printf("\n\nsorry!\nInvoice of [%s] doesn't matches.\n\n", name);
                }
            }
            fclose(file);
            break;

        case 4:
            // system("cls");
            printf("\n\n\t\t~~~~BYE BYE~~~~\n\n");

        default:
            // system("cls");
            printf("\nSORRY! Invalid option\n");
            printf("Please! Enter valid option.\n");
        }
        printf("\nDo you want to continue[y/n]: ");
        scanf("%s", &continues);
        printf("\n");
    }
    printf("\n\t~~~~BYE BYE~~~~\n\n");

    return 0;
}