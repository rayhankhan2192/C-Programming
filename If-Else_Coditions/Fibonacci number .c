/*Print Fibonacci series up to a certain
number by taking it input from the user.*/

#include<stdio.h>
int main()
{
    int num,i,n1=0,n2=1,n3;
    printf("Enter the value = ");
    scanf("%d",&num);
   //printf("%d %d\n",n1, n2);

    for(i=0; i<num; i++)
    {
        if(i<=1)
        {
            n3=i;
        }
        else{
        n3 = n1 + n2;
        n1=n2;
        n2=n3;
        }
        printf("%d ",n3);
    }

    getch();
}
