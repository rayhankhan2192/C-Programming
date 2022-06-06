/*Write a code that stand for Addition & subtraction between two matrix*/
#include<stdio.h>
int main()
{
    printf("\n\t\t\t~~~~~~~~~~~~~ MATRIX ~~~~~~~~~~~~~\n\n");
    int A[10][10],B[10][10],C[10][10];
    int num_row,num_col;
    int row,col;
    printf("Enter the number of Row & column = ");
    scanf("%d %d",&num_row,&num_col);
    //Take the input from user for AAA matrix.
    printf("\nEnter the value for A Matrix = \n");
    for(row=0;row<num_row; row++)
    {
        for(col=0;col<num_col;col++)
        {
            printf("A[%d][%d] = ",row,col);
            scanf("%d",&A[row][col]);
        }
        //printf("\n");
    }
    //Take the input from user for BBB matrix.
    printf("\nEnter the value for B Matrix = \n");
    for(row=0;row<num_row;row++)
    {
       for(col=0;col<num_col;col++)
       {
           printf("B[%d][%d] = ",row,col);
           scanf("%d",&B[row][col]);
       }
       //printf("\n");
    }
    //print AAA Matrix
    printf("\nA =");
    for(row=0;row<num_row;row++)
    {
        printf("\t");
        for(col=0;col<num_col;col++)
        {
            printf(" %d ",A[row][col]);
        }
        printf("\n");
    }
    //print BBB Matrix
    printf("\nB =");
    for(row=0;row<num_row;row++)
    {
        printf("\t");
        for(col=0;col<num_col;col++)
        {
            printf(" %d ",B[row][col]);
        }
        printf("\n");
    }
    //Addition AA and BB Matrix && stored in C
    for(row=0;row<num_row;row++)
    {
        for(col=0;col<num_col;col++)
        {
            C[row][col]=A[row][col]+B[row][col];
        }
    }
    //print C = A + B
    printf("\nA + B = ");
    for(row=0;row<num_row;row++)
    {
        for(col=0;col<num_col;col++)
        {
            printf("%d ",C[row][col]);
        }
        printf("\n");
        printf("\t");
    }
    //Subtraction AA and BB Matrix && stored in C
    for(row=0;row<num_row;row++)
    {
        for(col=0;col<num_col;col++)
        {
            C[row][col]=A[row][col]-B[row][col];
        }
    }
    //print C = A + B
    printf("\nA - B = ");
    for(row=0;row<num_row;row++)
    {
        for(col=0;col<num_col;col++)
        {
            printf("%d ",C[row][col]);
        }
        printf("\n");
        printf("\t");
    }
    getch();
}
