/* This a series programe which can calculate every integer number given by user and
the difference between two integer is 1 */

#include<stdio.h>
int main()
{
    while(1){
    int n1,n2,sum=0,i=2,j=3;
    printf("Enter the last numbers = ");
    scanf("%d %d",&n1,&n2);
     printf("2*3 + 3*4 + 4*5 +.....+ %d*%d",n1,n2);

     while(i<=n1 && j<=n2)
        {
        sum = sum + i*j;

        i=i+1;
        j=j+1;

        }
     printf(" = %d\n",sum);
     printf("\n");

    getch();
}
}
