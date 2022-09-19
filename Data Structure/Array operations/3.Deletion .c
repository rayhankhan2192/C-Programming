#include<stdio.h>
int main()
{
    int i,n=5,array[50]={10,20,30,40,50},position=1;
    printf("\nArray before inserting: ");
    for(i=0; i<n; i++)
    {
        printf("%d\t",array[i]);
    }
    for(i=position-1; i<n; i++)
    {
        array[i]=array[i+1];
    }
    printf("\nArray after deletion:   ");
    for(i=0; i<n; i++)
    {
        printf("%d\t",array[i]);
    }
    printf("\n\n");
    return 0;

}
