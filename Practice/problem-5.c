// n terms of even natural number and their sum

#include<stdio.h>
int main()
{
    int number,i,sum=0;
    printf("Enter the value = ");
    scanf("%d",&number);
    for(i=1; i<=number; i++){
        if(i%2==0){
            printf("%d\t",i);
            sum = sum + i;
        }
    }
    if(number%2==0){
        printf("\n\n2 + 4 +.....+ %d = %d\n\n",number,sum);
    }
    else{
        number = number - 1;
        printf("\n\n2 + 4 +.....+ %d = %d\n\n",number,sum);
    }
    return 0;
}