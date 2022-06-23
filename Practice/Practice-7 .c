//find maximum & minimum between 3 number
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter 3 value = ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("Large number = %d\n",num1);
        }
        else
        {
            printf("Large number = %d\n",num3);
        }
    }
    else
    {
        if(num2>num3)
        {
            printf("Large number = %d\n",num2);
        }
        else
        {
            printf("Large number = %d\n",num3);
        }
    }
    //small
    if(num1<num2){
        if(num1<num3){
            printf("Small number = %d",num1);
        }
        else{
            printf("Small number = %d",num3);
        }
    }
    else{
        if(num2<num3){
            printf("Small number = %d",num2);
        }
        else{
            printf("Small number = %d",num3);
        }
    }
    return 0 ;
}
