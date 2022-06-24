//Maximum && minimum
#include<stdio.h>
int main()
{
    int number[10000],i,n;
    printf("How many numbers = ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Enter number-%d = ",i+1);
        scanf("%d",&number[i]);
    }
    int max=number[0];
    for(i=0; i<n; i++)
    {
        if(max<number[i]);
        max = number[i];
    }
    printf("Maximum number is = %d\n",max);



    int min = number[0];
    for(i=0; i<n; i++)
    {
        if(min>number[i])
        min = number[i];
    }
    printf("Minimum number = %d\n",min);

    return 0;
}