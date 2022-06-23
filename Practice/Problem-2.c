//enter a value and print the sum like entered 3, 1+2+3=6;
#include<stdio.h>
int main()
{
    int number,i=1,sum=0;
    printf("Enter the value = ");
    scanf("%d",&number);
    do{
        sum = sum + i;
        i++;
    }while(i<=number);
    printf("1 + 2 + 3 +.... + %d = %d",number,sum);

    return 0;
}