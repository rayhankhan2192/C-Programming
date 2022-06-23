//print n terms of odd number addition

#include<stdio.h>
int main()
{
    int number, i=1, sum=0;
    printf("Enter the vale = ");
    scanf("%d",&number);
    while(i<=number)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
            sum = sum + i;
            i+=2;
        }
    }
    if(number%2==0)
    {
        number = number-1;
        printf("\n\n1 + 3 + 5 +.....+ %d = %d\n\n",number,sum);
    }
    else
    {
        printf("\n\n1 + 3 + 5 +.....+ %d = %d\n\n",number,sum);

    }
}
