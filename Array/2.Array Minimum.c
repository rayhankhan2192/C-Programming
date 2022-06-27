//Write a program to find minimium value
//Array
#include<stdio.h>
int main()
{
    while(1)
    {
        int num[50],n,i;
        printf("Please select number <=50.\n");
        printf("How many numbers = ");
        scanf("%d",&n);

        for(i=0; i<n; i++)
        {
            scanf("%d",&num[i]);
        }
        int min=num[0];

        for(i=1; i<n; i++)
        {
            if(min>num[i])
                min = num[i];
        }

       printf("The minimum number is = %d\n",min);
    }

    getch();
    
}
