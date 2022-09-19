#include <stdio.h>

void swap(int *a, int *b);
void quickSort(int array[], int length);
void quickSort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void quickSort(int array[], int length)
{
    quickSort_recursion(array, 0, length - 1);
}

void quickSort_recursion(int array[], int low, int high)
{
    if (low < high)
    {
        int pivot_index = partition(array, low, high);
        quickSort_recursion(array, low, pivot_index - 1);
        quickSort_recursion(array, pivot_index + 1, high);
    }
}

int partition(int array[], int low, int high)
{
    int pivot_value = array[high];
    int i = low;
    for(int j=low; j < high; j++)
    {
        if(array[j] <= pivot_value)
        {
            swap(&array[i], &array[j]);
            i++;
        }
    }
    swap(&array[i], &array[high]);
    return i;
}

int main()
{
    //int array[]={3,7,0,55,4,33,44,55,8,756,4,5,67,4,33,0,45,66,78,54,33,45,66,88,65,89,66,987,23,343,454,223,45,6,33,23,343,455,91,93,49,95,96,45,76,55,43,44,56,77,44,88,97,33,55,77,44,33,55,677,89,99,76,55,44,33,44,56,77,88,99,98,66,44,4,12,44,6,77,87,6,454,323,5e34,4545,56756,5656,675678,65767,678667,565,56756,7856,454,6756,646,457,567,587,463,5645,4634,455745,34564,5474,45645,789,6796,567,455,233,6754,64,1,452,41,6767,6532,234,565467,8567654,2356,78754,467,5588,5565,674676,58867,6546,4677686,546,36567896,67854,3647,586789,4632,487685,3544576,4654765678,564443,678546,3534567,86756,6789,766544,445675678,54643,45756,46343,5675678,3365765,36867,545567,5463467,78675,3454,67853,235476,5685664,3445,5678,434,67867,444223,3467,433523,57865564,2334476,443523,456556,43234,568756,233466,454,665453,6756874,45656,57875,654,56745,5676,676856,46,4567,0,2,4,6,3,1,35354,34345674,0};
    int array[] = {6,3,7,5,1,2,4},length = 7,i;
    //int length=193, i;
    /*
    printf("Enter index number: ");
    scanf("%d", &length);
    for (i = 0; i < length; i++)
    {
        printf("\nEnter element NO-%d: ", i + 1);
        scanf("%d", &array[i]);
    } */
    printf("Array before sorting: ");
    for (i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\nArray after sorting:  ");
    quickSort(array, length);
    for (i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
