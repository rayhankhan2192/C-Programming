#include<stdio.h>
int main()
{
    int i,n,array[50],position,num;
    printf("\n\n\nEnter the array size: ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter element NO- %d: ",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nArray before inserting: ");
    for(i=0; i<n; i++)
    {
        printf("%d \t",array[i]);
    }
    printf("\n\nEnter the position to insert: ");
    scanf("%d",&position);
    printf("\n\nEnter the value to insert: ");
    scanf("%d",&num);
    for(i=n; i>=position; i--)
    {
        array[i]=array[i-1];
    }
    array[position-1] = num;
    printf("Array after inserting: ");
    for(i=0; i<=n; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n\n");
    return 0;

}
