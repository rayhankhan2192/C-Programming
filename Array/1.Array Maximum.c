//Write a program to find maximum number
//Array
#include<stdio.h>
int main()
{
    while(1)
    {
        int num[100],n,i;
        printf("How many numbers = ");
        scanf("%d",&n);

        for(i=0; i<n; i++)
        {
            scanf("%d",&num[i]);
        }
        int max=num[0];

        for(i=1; i<n; i++)
        {
            if(max<num[i])
                max=num[i];
        }

        printf("The maximum number is = %d\n",max);
    }
    getch();

}
