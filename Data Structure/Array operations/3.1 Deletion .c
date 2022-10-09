#include<stdio.h>
int main()
{
    int array[50]= {10,20,30,40,50};
    int i,n=5,position1,number;

    printf("\nArray before inserting: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\nHow many numbers to delete: ");
    scanf("%d",&number);
    for(int k=0; k<number; k++)
    {
        printf("\n\nEnter position to delete-%d: ",k+1);
        scanf("%d",&position1);
        for(i=position1-1; i<n; i++)
        {
            array[i]=array[i+1];
        }
        printf("\nArray after deletion:   ");
        for(i=0; i<n-1; i++)
        {
            printf("%d\t",array[i]);
        }
        n--;
    }
    printf("\n\n");
    return 0;
}
