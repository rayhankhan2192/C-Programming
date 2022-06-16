#include <stdio.h>
int array1(int num1[])
{
    int i;
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", num1[i]);
    }
}
int array2(int num2[])
{
    int i;
    for (i = 0; i <= 9; i++)
    {
        printf("%d ", num2[i]);
    }
}
int main()
{
    int num1[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    array1(num1);
    printf("\n");
    int num2[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    array2(num2);
}
