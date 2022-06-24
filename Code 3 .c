//print 1+2+3+....+n = addition

#include<stdio.h>
int main()
{
    int number, i=0,sum=0;
    printf("Enter the value = ");
    scanf("%d",&number);
    do{
        sum = sum + i;
        i++;
    }while(i<=number);
    printf("1 + 2 + 3 +.....+ %d = %d",number,sum);
    
}
