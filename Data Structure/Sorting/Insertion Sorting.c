#include <stdio.h>
int main()
{
    int arraay[] = {5, 3, 1, 10, 6, 2, 8, 4, 7, 9};
    printf("Array before sorting: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arraay[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (arraay[i] > arraay[j])
            {
                int temp = arraay[i];
                arraay[i] = arraay[j];
                arraay[j] = temp;
            }
        }
    }
     printf("\nArray after  sorting: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arraay[i]);
    }
}