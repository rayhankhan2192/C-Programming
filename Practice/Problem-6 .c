//print even & odd number 1-100;

#include <stdio.h>
int main()
{
    int number = 100, i;
    // printf("Enter the value = ");
    // scanf("%d",&number);
    printf("Even number 1-100 = \n");
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }
    }
    printf("\n\nOdd number 1-100 = \n");
    for(i=1; i<=100; i++)
    {
        if(i%2!=0){
            printf("%d\t",i);
        }
    }
}
