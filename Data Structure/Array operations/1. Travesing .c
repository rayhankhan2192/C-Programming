#include<stdio.h>
int main()
{
    int i,n=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter %d array element: ",n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        printf("%d\t",arr[i]);
    }
    return 0;
}
