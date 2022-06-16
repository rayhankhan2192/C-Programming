//First function programe

//Step-1 1 1 1 1
/*
#include<stdio.h>
void int main()
{
    int num1,num2;
    printf("Enter two numbers = ");
    scanf("%d %d",&num1,&num2);
    printf("The sum is = %d",sum(num1,num2));
}
void int sum(int a,int b)
{
    return a+b;
}*/


//Step-2 2 2 2 2
/*
#include<stdio.h>
int sum(int a,int b,int c)
{
    return a+b+c;
}
 int main()
{
    //int result = sum(5,5,10);
    printf("The sum is = %d",sum(5,5,10));
} */


//step-3 3 3 3 3 3

#include<stdio.h>
int sum(int a,int b,int c)
{
    return a+b+c;
}
 int main()
{
    ///int result = sum(5,5,5);
    //printf("The sum is = %d\n",result);
    //result = sum(10,10,10);
    //printf("The sum is = %d\n",result);
   // result = sum(10,20,20);
    //printf("The sum is = %d\n",result);

    int num1,num2,num3;
    printf("Enter 3 value = ");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("The sum is = %d\n",sum(num1,num2,num3));

    num1,num2,num3;
    printf("Enter 3 value = ");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("The sum is = %d\n",sum(num1,num2,num3));

    num1,num2,num3;
    printf("Enter 3 value = ");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("The sum is = %d\n",sum(num1,num2,num3));

} 


//Step-4 4 4 4 4
/*

#include<stdio.h>
void sum(int a,int b,int c)
{
    printf("The sum is = %d\n",a+b+c);
}
int main()
{
    sum (5,5,5);
    sum (10,10,20);

} */